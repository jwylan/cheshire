#include <SoftwareSerial.h>
#include <avr/pgmspace.h>

const int speed_pin = 0;                // analog pin (potentiometer speed adjustment)
const int pattern_selector_pin = 2;     //
const int brightness_pin = 1;

const int strobe_pin = 3;
const int USE_CONTROLS = 0;

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

int serflag = 1;  // set to 1 to get serial feedback

/**********************************************************************************************/

int cycle_delay;                        // analog reading from the speed_pin
int previous_cycle_delay;

int pattern_id = 0;                     // the currently selected profile
int previous_pattern_id = 0;
int step_counter = 0;                   // where in the four step sequence:  0 - (step_max-1)
int x = 0;                              // counter varaible for small for loops
int external_trigger_mode = 0;

int read_controls();
void OLDloop();
int change_pattern(int pattern_no);
int check_pattern_limits();

//#include "patternstruct.h"

//#include "eightchannel.h"
//#include "patternstruct.h"
//#include "eightpattern.h"
//#include "sevenchannel.h"
//#include "sixchannel.h"
//#include "fivechannel.h"
//#include "fourchannel.h"
//#include "threechannel.h"
//#include "twochannel.h" 
//#include "onechannel.h"
#include "butterfly7channels.h"

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
      delay(15);
      for (x = 0; x < max_pins; x++) {// turn each off
        digitalWrite(light_pins[x],0);
      }
    } 
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

  analogReference(DEFAULT);
 
 step_counter = 0;

 pattern_id = QUEEN;
 
  change_pattern(0);

  if(USE_CONTROLS) read_controls(); // first read
}

/**********************************************************************************************/

void loop()                     
{ 
  int y;

    for (x = 0; x < max_pins; x++) {// turn each on
     // pin_brightness[x] = the_pattern[step_counter][x];
      pin_brightness[x] = (unsigned char)pgm_read_byte_near(pattern_ptr[pattern_id] + (step_counter*12) + x);
      if(!USE_CONTROLS) {
        cycle_delay = (unsigned long)(pgm_read_byte_near(pattern_ptr[pattern_id] + (step_counter*12) + 11) * 10);
      }
        
      digitalWrite(light_pins[x], pin_brightness[x]);
      if(serflag)Serial.print((int)pin_brightness[x],HEX);
      if(serflag)Serial.print(",");
    }

  // increment the step_counter and reset back to 0 to start the sequence over
  
  
  //if (++step_counter >= the_pattern[0][10]) {  //step_max) {
    
  if (++step_counter >= step_max) {  //step_max) {   
    
    step_counter = 0;
    if(serflag)Serial.print(". pattern: ");
    if(serflag)Serial.println(pattern_id);
  }
  
 if(serflag)Serial.print(". step: ");
 if(serflag)Serial.println(step_counter);
 
  if(USE_CONTROLS) read_controls();
  
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

  //strobe_period = 10;

  while((millis() - time) < wait) {
    read_controls();
    if(strobe_flag) {
      for(st = 0; st < max_pins; ++st) {  // first turn them all off
        digitalWrite(light_pins[st],255);
      }
      delay(strobe_period);
    } // if strobe is on  

    for(st = 0; st < max_pins; ++st) {  // turn on the pins that should be on
      //analogWrite(light_pins[st], pin_brightness[st]);
      
      //analogWrite(light_pins[st], pgm_read_byte_near(pattern_ptr[pattern_id] + (step_counter*12) + st));
      
      digitalWrite(light_pins[st], pgm_read_byte_near(pattern_ptr[pattern_id] + (step_counter*12) + st));
    }

    delay(strobe_period);

  }
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

  strobe_period  = analogRead(strobe_pin) / 50;// + 5;

  if(strobe_period < 0 || strobe_period > 1024)
    strobe_period = 512;

  strobe_period = strobe_period / 48;

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

  if(previous_cycle_delay != cycle_delay)  {  //if the speed knob was turned, cancel external trigger mode
    external_trigger_mode = 0;
    //
    //
    //Serial.println("trigger mode OFF");
  }

  previous_cycle_delay = cycle_delay;

  if(digitalRead(external_trigger_pin) == ON) { //got an external trigger, set the mode for waiting
    external_trigger_mode = 1;
    //Serial.println("trigger mode ON");
  }

  old_pattern = pattern_id;

  pattern_id = analogRead(pattern_selector_pin);  // 0 to 15 - 16 patts
  temp_p = check_pattern_limits();
  if(temp_p != 255) {
    pattern_id = temp_p;
    if(pattern_id > 15) pattern_id = 15;

    if(old_pattern != pattern_id) {
       change_pattern(pattern_id);
    // Serial.print("pattern = "); Serial.println(pattern_id);
    }
  }

 /* if (external_trigger_mode)                     //cancel external trigger mode if the twist selector was turned
    if(pattern_id != previous_pattern_id)
      external_trigger_mode = 0;
*/
  previous_pattern_id = pattern_id;

  // make sure whatever profile_id is selected is within the profile table range
  if (pattern_id >= pattern_max || pattern_id < 0)  pattern_id = pattern_max-1;
  //
  external_trigger_mode = 0;
  return(external_trigger_mode);
}

/**********************************************************************************************/

int check_pattern_limits()
{
  
  // these limits are based on having 16 patterns
  
  if(pattern_id >   5 && pattern_id <  59) return(0);
  if(pattern_id >  69 && pattern_id < 123) return(1);
  if(pattern_id > 133 && pattern_id < 187) return(2);
  if(pattern_id > 197 && pattern_id < 251) return(3);
  if(pattern_id > 261 && pattern_id < 315) return(4);
  if(pattern_id > 325 && pattern_id < 379) return(5);
  if(pattern_id > 389 && pattern_id < 443) return(6);
  if(pattern_id > 453 && pattern_id < 507) return(7);
  if(pattern_id > 517 && pattern_id < 571) return(8);
  if(pattern_id > 581 && pattern_id < 635) return(9);
  if(pattern_id > 645 && pattern_id < 699) return(10);
  if(pattern_id > 709 && pattern_id < 763) return(11);
  if(pattern_id > 773 && pattern_id < 827) return(12);
  if(pattern_id > 837 && pattern_id < 891) return(13);
  if(pattern_id > 901 && pattern_id < 955) return(14);
  if(pattern_id > 965 && pattern_id < 1019) return(15);
  
  return(255);
}

/**********************************************************************************************/




