
// Cheshre sequencer 2.5
//   2.0:  10 channel with progmem and byte storage.  strobe works great.
//   2.5: trigger, strobe, allpattern function



#include <SoftwareSerial.h>
#include <avr/pgmspace.h>

const int speed_pin = 0;                // analog pin (potentiometer speed adjustment)
const int pattern_selector_pin = 2;     //
const int brightness_pin = 1;

const int strobe_pin = 3;
const int USE_CONTROLS = 1;
const int ALL_PATTERN_REPEAT = 3;
int pattern_repeat = 0;

const int external_trigger_pin = 12;
int step_max = 80;                 // number of steps in each sequence
const int fade_in_out = 0;
const int fade_steps = 50;
const int ON = LOW;
const int OFF = HIGH;
int fade_delay;
int fade_multiplier;


// PIN MAP: 11,10,9,2,3,4,5,6,7,8

const int max_pins = 10;
int light_pins[max_pins] = {
    8,7,6,5,4,3,2,9,10,11}; // USE THIS WHEN RUNNING ON CHESHIRE BOARD
  //2,3,4,5,6,7,8,9,10,11};  // USE THIS WHEN TESTING ON THE ARDUINO BOARD
  
unsigned char pin_brightness[max_pins] = {
  0,0,0,0,0,0,0,0,0,0};

const int inverter_pin = 13;
const int load_pin = 6;

int old_cycle_delay;
int old_fade_delay;
int old_pattern;
int brightness = 255;

const int MIN_delay = 5; //in microseconds

const int MAX_delay = 6000;
int delay_multiplier = 5;

int strobe(unsigned long wait);
int strobe_period;

// PWM PINS 

//#include <timer.h>

int serflag = 0;  // set to 1 to get serial feedback

/**********************************************************************************************/

int cycle_delay;                        // analog reading from the speed_pin
int previous_cycle_delay;

int pattern_id = 1;                     // set in read controls
int the_repeat_pattern = 1;
int current_pattern = 0;                // the currently selected profile
int previous_pattern_id = 0;
int step_counter = 0;                   // where in the four step sequence:  0 - (step_max-1)
int x = 0;                              // counter varaible for small for loops
int external_trigger_mode = 0;

int read_controls();
void OLDloop();
int change_pattern(int pattern_no);
int check_pattern_limits();

//#include "patternstruct.h"

#include "tenchannel.h"  //tested jun 16
//#include "ninechannel.h"  // tested jun 16
//include "eightchannel.h" // tested jun 16
//#include "sevenchannel.h"  // tested jun 16
//#include "sixchannel.h"  // tested jun 16
//#include "fivechannel.h"  // tested jun 16
//#include "fourchannel.h"  // tested jun 16
//#include "threechannel.h" //tested jun 16
//#include "twochannel.h" // tested jun 16 yawn
//#include "butterfly7channels.h"


prog_char  *pattern_ptr[] = {
  pattern_0,
  pattern_1,
  pattern_2,
  pattern_3,
  pattern_4,
  pattern_5,
  pattern_6,
  pattern_7,
  pattern_8,
  pattern_9,
  pattern_10,
  pattern_11,
  pattern_12,
  pattern_13,
  pattern_14,
  pattern_15  
};

#define TIMER_CLK_STOP		0x00	///< Timer Stopped
#define TIMER_CLK_DIV1		0x01	///< Timer clocked at F_CPU
#define TIMER_CLK_DIV8		0x02	///< Timer clocked at F_CPU/8
#define TIMER_CLK_DIV64		0x03	///< Timer clocked at F_CPU/64
#define TIMER_CLK_DIV256	0x04	///< Timer clocked at F_CPU/256
#define TIMER_CLK_DIV1024	0x05	///< Timer clocked at F_CPU/1024
#define TIMER_CLK_DIV2048	0x07	///< Timer clocked at F_CPU/2048
#define TIMER_CLK_DIV4096	0x08	///< Timer clocked at F_CPU/4096

/**********************************************************************************************/

void flashallfeedback(int iterations, int delay_period)
{
  int x, y;
  
  for (y = 0; y < iterations; ++y) {
      for (x = 0; x < max_pins; x++) {// turn each on
         digitalWrite(light_pins[x],255);
      }
      delay(delay_period);
      for (x = 0; x < max_pins; x++) {// turn each off
        digitalWrite(light_pins[x],0);
      }
      delay(delay_period);
    } 
     for (x = 0; x < max_pins; x++) {// restore the pattern
        digitalWrite(light_pins[x],pin_brightness[x]);
      }
}

/**********************************************************************************************/

int change_pattern(int pattern_no) {
  int x,y;
  
      if(serflag)Serial.print("setting pattern # ");
      if(serflag)Serial.println(pattern_id);
            
      step_max = pgm_read_byte_near(pattern_ptr[pattern_id] + 10);
      step_counter = 0;
  
      if(serflag)Serial.print("step max =");
      if(serflag)Serial.println(step_max);
      
      for(x=0; x < step_max; ++x) {
        for(y=0; y < 12; ++y) {
          if(serflag)Serial.print((int)pgm_read_byte_near(pattern_ptr[pattern_id] +(x*12) + y),HEX);
          if(serflag)Serial.print(",");
        }
        if(serflag)Serial.println(" ");
      }
      
      if(serflag)Serial.println("======= END READ =========== ");
            
    for (y = 0; y < 10; ++y) {
      for (x = 0; x < max_pins; x++) {// turn each on
         digitalWrite(light_pins[x],255);
      }
      delay(30);
      for (x = 0; x < max_pins; x++) {// turn each off
        digitalWrite(light_pins[x],0);
      }
    } 
    flashallfeedback(5,5);
}

/**********************************************************************************************/

void setup()                    
{

  TCCR1B = (TCCR1B & ~B00000111) | TIMER_CLK_DIV256;  // Pins 9 and 10 PWM set to 122Hz
  TCCR2B = TCCR2B & B11111000 | TIMER_CLK_DIV1024;  // Pins 11 and 3 PWM set to 122Hz

  delay(50);

  if(serflag)Serial.begin(9600);
  if(serflag)Serial.println("setup");

  delay_multiplier = (MAX_delay - MIN_delay) / 1033;
  
    // set led pins for output starting at first_light_pin
  for (x = 0; x < max_pins; x++)    
    pinMode(light_pins[x], OUTPUT);

  pinMode(inverter_pin, OUTPUT);
  digitalWrite(inverter_pin, HIGH);
  pinMode(load_pin, OUTPUT);
  digitalWrite(load_pin, ON); 
  
  pinMode(external_trigger_pin, INPUT);
  digitalWrite(external_trigger_pin,HIGH);
  
  analogReference(DEFAULT);
 
  step_counter = 0;

  pattern_id = 1;
 
  change_pattern(1);

  if(USE_CONTROLS) read_controls(); // first read
}

/**********************************************************************************************/

void loop()                     
{ 
  int y;
      
    for (x = 0; x < max_pins; x++) {// turn each on
      pin_brightness[x] = (unsigned char)pgm_read_byte_near(pattern_ptr[pattern_id] + (step_counter*12) + x);
      digitalWrite(light_pins[x], pin_brightness[x]);
      if(serflag)Serial.print((int)pin_brightness[x],HEX);
      if(serflag)Serial.print(",");
    }
    
    if(!USE_CONTROLS) {
        cycle_delay = (unsigned long)(pgm_read_byte_near(pattern_ptr[pattern_id] + (step_counter*12) + 11) * 10);  // mult the delay * 10
    }

    // increment the step_counter and reset back to 0 to start the sequence over
    
    if (++step_counter >= step_max) {  //step_max) {   
      step_counter = 0;
      if(serflag)Serial.print(". pattern: ");
      if(serflag)Serial.println(pattern_id);
      
      if(current_pattern == 0) {  // run thru all patterns mode is on
        if(++pattern_repeat >= ALL_PATTERN_REPEAT) {
          pattern_repeat = 0;
          if(++the_repeat_pattern >= pattern_max) {
            the_repeat_pattern = 1;
          }
          pattern_id = the_repeat_pattern;
          change_pattern(pattern_id);
        }
      }
    }
  
    if(serflag)Serial.print(". step: ");
    if(serflag)Serial.println(step_counter);
 
    if(USE_CONTROLS) read_controls();
    
    if( external_trigger_mode == 1) {
      
      while(digitalRead(external_trigger_pin) == OFF) {
         if(   abs(   (analogRead(speed_pin)*delay_multiplier) - cycle_delay) > 10) {
           external_trigger_mode = 0;
           break;
         }
        //flashallfeedback(2,50);
      }
      delay(150); //debounce it
      //read_controls();
    }
  
    strobe((unsigned long)cycle_delay);
  
    for(x=0;x<max_pins;x++)
      pin_brightness[x] = 255;

}  
/**********************************************************************************************/

int strobe(unsigned long wait)
{

  int st = 0;
  unsigned long time = millis();
  int strobe_flag;
  
  //return(0);

  if (strobe_period == 0)  //don't do strobe if knob turned all the way down
    strobe_flag = 0;
  else 
    strobe_flag = 1;
    
  if( external_trigger_mode == 1) {
    for(st = 0; st < max_pins; ++st)   // turn on the pins that should be on
        digitalWrite(light_pins[st], pin_brightness[st]);
    return(0);
  }

  //strobe_period = 10;

  if(strobe_flag) {
    while((millis() - time) < cycle_delay) {
      read_controls();
      if(strobe_flag) {
        for(st = 0; st < max_pins; ++st) {  // first turn them all off
          digitalWrite(light_pins[st],255);
        } // for st
        delay(strobe_period);
      } // if strobe is on  

      for(st = 0; st < max_pins; ++st) {  // turn on the pins that should be on
        digitalWrite(light_pins[st], pin_brightness[st]);
        //analogWrite(light_pins[st], pgm_read_byte_near(pattern_ptr[pattern_id] + (step_counter*12) + st));
        //digitalWrite(light_pins[st], pgm_read_byte_near(pattern_ptr[pattern_id] + (step_counter*12) + st));
      } // for st
      delay(strobe_period);
    }  // while time wait
  }  // if strobe flag
  else { //no strobe
     while((millis() - time) < cycle_delay) {
        read_controls();
      }
  }  // no strobe
  return(0);
}


/**********************************************************************************************/

int read_controls()
{
  
  int temp_p;
  
  if(!USE_CONTROLS) return(0);

  // reading the cycle_delay and profile_id could be moved to the setup function
  // but for testing, it's easier to just leave them here to get called by loop

  // read the delay to put between steps
  old_cycle_delay = cycle_delay;
  cycle_delay = (analogRead(speed_pin)*delay_multiplier) ;

  strobe_period = analogRead(strobe_pin);
  if(strobe_period < 200) strobe_period = 0;
  strobe_period  = strobe_period / 50;// + 5;

  if(strobe_period < 0 || strobe_period > 1024)
    strobe_period = 512;
    
  //strobe_period = strobe_period / 48;

  //  Serial.print("strobe = ");
  //  Serial.println(strobe_period);

  if(cycle_delay < MIN_delay) cycle_delay = MIN_delay;
  if(cycle_delay > MAX_delay) cycle_delay = MAX_delay;

  old_fade_delay = fade_delay;
  fade_delay = cycle_delay/fade_steps;

  if(cycle_delay != old_cycle_delay) {
    //  Serial.print("cycle delay =");
    //  Serial.println(cycle_delay);

    //   Serial.print("fade delay =");
    //  Serial.println(fade_delay);
  }

  brightness = analogRead(brightness_pin)/4;
  //Serial.print("brightness: "); Serial.println(brightness);

  if(old_cycle_delay != cycle_delay)  {  //if the speed knob was turned, cancel external trigger mode
    if(external_trigger_mode == 1)
      if(abs(old_cycle_delay - cycle_delay) > 10)
        external_trigger_mode = 0;
    //
    //
    //Serial.println("trigger mode OFF");
  }

  previous_cycle_delay = cycle_delay;

  if(digitalRead(external_trigger_pin) == ON) { //got an external trigger, set the mode for waiting
    external_trigger_mode = 1;
    //flashallfeedback(5,15);
    //Serial.println("trigger mode ON");
    if(digitalRead(external_trigger_pin) == ON)  // wait till trigger off
      while(digitalRead(external_trigger_pin) == ON) {}//{flashallfeedback(5,15);}
  }

  old_pattern = pattern_id;

  temp_p = analogRead(pattern_selector_pin);  // 0 to 15 - 16 patts
   //if(serflag)Serial.println(pattern_id);
  current_pattern = temp_p = check_pattern_limits(temp_p);
  if((temp_p != 255) && (current_pattern != 0)) {
    pattern_id = temp_p;
    //if(pattern_id > 15) pattern_id = 15;

    if(old_pattern != pattern_id) {
       change_pattern(pattern_id);
    // Serial.print("pattern = "); Serial.println(pattern_id);
    }
    else pattern_id = old_pattern;
  }

 /* if (external_trigger_mode)                     //cancel external trigger mode if the twist selector was turned
    if(pattern_id != previous_pattern_id)
      external_trigger_mode = 0;
*/
  previous_pattern_id = pattern_id;

  // make sure whatever profile_id is selected is within the profile table range
  if (pattern_id >= pattern_max || pattern_id < 0)  pattern_id = pattern_max-1;
  //
  //external_trigger_mode = 0;
  return(external_trigger_mode);
}

/**********************************************************************************************/

int check_pattern_limits(int new_pattern)
{
  //return(pattern_id / 16);
  // these limits are based on having 16 patterns
  
  if(new_pattern <  59) return(0);
  if(new_pattern >  69 && new_pattern < 123) return(1);
  if(new_pattern > 133 && new_pattern < 187) return(2);
  if(new_pattern > 197 && new_pattern < 251) return(3);
  if(new_pattern > 261 && new_pattern < 315) return(4);
  if(new_pattern > 325 && new_pattern < 379) return(5);
  if(new_pattern > 389 && new_pattern < 443) return(6);
  if(new_pattern > 453 && new_pattern < 507) return(7);
  if(new_pattern > 517 && new_pattern < 571) return(8);
  if(new_pattern > 581 && new_pattern < 635) return(9);
  if(new_pattern > 645 && new_pattern < 699) return(10);
  if(new_pattern > 709 && new_pattern < 763) return(11);
  if(new_pattern > 773 && new_pattern < 827) return(12);
  if(new_pattern > 837 && new_pattern < 891) return(13);
  if(new_pattern > 901 && new_pattern < 955) return(14);
  if(new_pattern > 965) return(15);
  
  return(255);
}

/**********************************************************************************************/




