#include <SoftwareSerial.h>

const int speed_pin = 0;                // analog pin (potentiometer speed adjustment)
const int pattern_selector_pin = 1;     //
const int brightness_pin = 2;

const int strobe_pin = 3;

const int external_trigger_pin = 12;
const int pattern_max = 15;              // number of profiles
const int step_max = 24;                 // number of steps in each sequence
const int fade_in_out = 1;
const int fade_steps = 50;
const int ON = LOW;
const int OFF = HIGH;
int fade_delay;
int fade_multiplier;


const int max_pins = 4;
int light_pins[max_pins] = {11,10,9,3};

const int inverter_pin = 13;
const int load_pin = 6;

int old_cycle_delay;
int old_fade_delay;
int old_pattern;
int brightness = 255;

const int MIN_delay = 30
; //in microseconds

const int MAX_delay = 5000;
int delay_multiplier = 5;


// PWM PINS 3,5,6,9,10,11

//#include <timer.h>


/**********************************************************************************************/
                         
int cycle_delay;                        // analog reading from the speed_pin
int previous_cycle_delay;

int pattern_id = 0;                     // the currently selected profile
int previous_pattern_id = 0;
int step_counter = 0;                   // where in the four step sequence:  0 - (step_max-1)
int x = 0;                              // counter varaible for small for loops
int external_trigger_mode = 0;

int read_controls();

#include "eightchannel.h"
//#include "sevenchannel.h"
//#include "sixchannel.h"
//#include "fivechannel.h"
//#include "fourchannel.h"
//#include "threechannel.h"
//#include "twochannel.h"
//#include "onechannel.h"


#define TIMER_CLK_STOP		0x00	///< Timer Stopped
#define TIMER_CLK_DIV1		0x01	///< Timer clocked at F_CPU
#define TIMER_CLK_DIV8		0x02	///< Timer clocked at F_CPU/8
#define TIMER_CLK_DIV64		0x03	///< Timer clocked at F_CPU/64
#define TIMER_CLK_DIV256	0x04	///< Timer clocked at F_CPU/256
#define TIMER_CLK_DIV1024	0x05	///< Timer clocked at F_CPU/1024

/**********************************************************************************************/

void setup()                    
{
  
  TCCR1B = (TCCR1B & ~B00000111) | TIMER_CLK_DIV8;
  
  Serial.begin(9600);
  Serial.println("setup");
  
  delay_multiplier = (MAX_delay - MIN_delay) / 1033;

  // set led pins for output starting at first_light_pin
  for (x = 0; x < max_pins; x++)    
    pinMode(light_pins[x], OUTPUT);
    
  pinMode(inverter_pin, OUTPUT);
  digitalWrite(inverter_pin, HIGH);
  pinMode(load_pin, OUTPUT);
  digitalWrite(load_pin, ON); 
 
  analogReference(DEFAULT);
  
  read_controls(); // first read
}
  
/**********************************************************************************************/

void loop()                     
{ 
      int y;
    
  // look-up the byte to use according to the profile, and step_counter
  // set each let based on the corresponding bit in the profile byte
  if(fade_in_out) {
    fade_multiplier = 255/fade_steps;
    for (y = 0; y < fade_steps; y++) {
         for(x = 0; x < max_pins; ++x) { // fade up to full
             if(patterns[pattern_id][step_counter] & (1<<x))
              analogWrite(light_pins[x],  fade_multiplier * y);
        }
        delay(fade_delay);
        Serial.println(y);
    } // for fade steps
    for (y = fade_steps; y > 0; y--) {
         for(x = 0; x < max_pins; ++x) { // fade out to zero
         //
         if(patterns[pattern_id][step_counter] & (1<<x))
             
             
              analogWrite(light_pins[x], fade_multiplier * y);
            
        }
        delay(fade_delay);
        Serial.println(y);
    } // for fade steps
    for(x=0;x<max_pins;x++)
    analogWrite(light_pins[x], 0);
  } // if fade
 
  else {
    for (x = 0; x < max_pins; x++) {// turn each on
      if((patterns[pattern_id][step_counter] & (1<<x))) 
      
        analogWrite(light_pins[x], brightness);
      else
        analogWrite(light_pins[x], 0);
      
      //Serial.println((patterns[pattern_id][step_counter] & (1<<x))*brightness)
      
      ;
     // digitalWrite(light_pins[x], patterns[pattern_id][step_counter] & (1<<x)); 
    }
  }
 
  // increment the step_counter and reset back to 0 to start the sequence over
  if ((++step_counter >= pattern_length[pattern_id]) || step_counter >= step_max) {
    step_counter = 0;
    //
    //
    //Serial.println(".");
  }
  
  
    
  // wait time is set by the potentiomenter on speed_pin
  
  while(read_controls()) {};
 
  if(!external_trigger_mode) {
    delay(cycle_delay);  
    Serial.println(patterns[pattern_id][step_counter]+256,BIN);
    
   }
}
  
/**********************************************************************************************/

int read_controls()
{
    
  // reading the cycle_delay and profile_id could be moved to the setup function
  // but for testing, it's easier to just leave them here to get called by loop
    
  // read the delay to put between steps
  old_cycle_delay = cycle_delay;
  cycle_delay = (analogRead(speed_pin)*delay_multiplier) ;
  
  
  
  if(cycle_delay < MIN_delay) cycle_delay = MIN_delay;
  if(cycle_delay > MAX_delay) cycle_delay = MAX_delay;
  


  
  
  
  old_fade_delay = fade_delay;
  fade_delay = cycle_delay/fade_steps;
  
  if(cycle_delay != old_cycle_delay) {
    //Serial.print("cycle delay =");
     //Serial.println(cycle_delay);
 
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
  
  
  
  
  // determine which profile to use, right now it's by input pin selection, but
  // it could be software derived, from a rotary switch, or other method later
  
  old_pattern = pattern_id;
  
  pattern_id = analogRead(pattern_selector_pin) / 64;
  if(pattern_id > 15) pattern_id = 15;
  
  if(old_pattern != pattern_id) {
  Serial.print("pattern = "); Serial.println(pattern_id);
  }
  
  if (external_trigger_mode)                     //cancel external trigger mode if the twist selector was turned
    if(pattern_id != previous_pattern_id)
      external_trigger_mode = 0;
      
   previous_pattern_id = pattern_id;
  
  // make sure whatever profile_id is selected is within the profile table range
  if (pattern_id >= pattern_max || pattern_id < 0)  pattern_id = pattern_max-1;
 //
 external_trigger_mode = 0;
 return(external_trigger_mode);


}
  
/**********************************************************************************************/

