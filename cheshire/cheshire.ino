 
// Cheshre sequencer 2.5
//   2.0:  10 channel with progmem and byte storage.  strobe works great.
//   2.5: trigger, strobe, allpattern function
//   3.0 adding resident copies of all channel files so the number of channels does not need a chip swap, will use brightness pin


#include <SoftwareSerial.h>

// #define __PROG_TYPES_COMPAT__ 1
#include <avr/pgmspace.h>


const int speed_pin = 0;                // analog pin (potentiometer speed adjustment)
const int pattern_selector_pin = 2;     //
const int brightness_pin = 1;

const int pattern_max = 16;

const int strobe_pin = 3; 
const int USE_CONTROLS = 1;  ////////////////////////////1
const int READ_ONLY_SPEED = 0;
const int ALL_PATTERN_REPEAT = 1;
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
int light_pins[max_pins] = {  // rightmost pin is channel 1 on the cheshire
//      2,2,2,2,6,5,3,9,10,11}; // for pwm only 6 channel ON CHESHIRE BOARD
    8,7,6,5,4,3,2,9,10,11}; // USE THIS WHEN RUNNING ON CHESHIRE BOARD
  //2,3,4,5,6,7,8,9,10,11};  // USE THIS WHEN TESTING ON THE ARDUINO BOARD
//     8,6,4,2,10,7,5,3,9,11}; // USE THIS For modified Andy board
 
unsigned char pin_brightness[max_pins] = {
  0,0,0,0,0,0,0,0,0,0};

const int inverter_pin = 13;
//const int load_pin = 6;

int old_cycle_delay;
int old_fade_delay;
int old_pattern;
int brightness = 255;

const int MIN_delay = 5 ; // 5; //in microseconds  ( 5,7,9, 10, 11, 12 makes it flicker)

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
void change_pattern(int pattern_no);
int check_pattern_limits();
int numchannels=10;

//#include "patternstruct.h"

//#include "butterfly7channels.h"

//PROGMEM prog_char patternz[10][16][12] = {
#include "onechannel.h" // tested jun 16 yawn
#include "twochannel.h" // tested jun 16 yawn
#include "threechannel.h" //tested jun 16
#include "fourchannel.h"  // tested jun 16
#include "fivechannel.h"  // tested jun 16 
//#include "melsonsix.h" 
#include "sixchannel.h"  // tested jun 16   = corrected chase bug july 8 oops
//#include "butterfly7channels.h" // numchannels = 7, pattern_no = emperor = 3
#include "sevenchannel.h"  // tested jun 16
#include "eightchannel.h" // tested jun 16
#include "ninechannel.h"  // tested jun 16
#include "tenchannel.h"  //tested jun 16

  unsigned char *patternz[] = {
  (unsigned char *)&pattern_0_0_0[ 0][0],
  (unsigned char *)&pattern_0_0_0[ 2][0],
  (unsigned char *)&pattern_0_0_0[ 6][0],
  (unsigned char *)&pattern_0_0_0[ 8][0],
  (unsigned char *)&pattern_0_0_0[13][0],
  (unsigned char *)&pattern_0_0_0[15][0],
  (unsigned char *)&pattern_0_0_0[17][0],
  (unsigned char *)&pattern_0_0_0[19][0],
  (unsigned char *)&pattern_0_0_0[23][0],
  (unsigned char *)&pattern_0_0_0[29][0],
  (unsigned char *)&pattern_0_0_0[45][0],
  (unsigned char *)&pattern_0_0_0[62][0],
  (unsigned char *)&pattern_0_0_0[85][0],
  (unsigned char *)&pattern_0_0_0[90][0],
  (unsigned char *)&pattern_0_0_0[92][0],
  (unsigned char *)&pattern_0_0_0[105][0]
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
  return;
  
  if(current_pattern ==0) return;
  
  for (x = 0; x < max_pins; x++) {// turn each off
        digitalWrite(light_pins[x],255);
      }
  
  for (y = 0; y < iterations; ++y) {
      for (x = 0; x < numchannels; x++) {// turn each on
         digitalWrite(light_pins[max_pins - x],255);
      }
      delay(delay_period);
      for (x = 0; x < numchannels; x++) {// turn each off
        digitalWrite(light_pins[max_pins-x],0);
      }
      delay(delay_period);
    } 
     for (x = 0; x < numchannels; x++) {// restore the pattern
        digitalWrite(light_pins[max_pins-x],pin_brightness[max_pins-x]);
      }
}

/**********************************************************************************************/

int change_number_channels(int channels) {
  
  if(serflag)Serial.print("changing channel count to ");
      if(serflag)Serial.println(channels);
  
  switch (channels) {
    case 1:
      patternz[0]=(unsigned char *)&pattern_0_0_0[0][0];patternz[1]=(unsigned char *)&pattern_0_0_0[2][0];patternz[2]=(unsigned char *)&pattern_0_0_0[6][0];patternz[3]=(unsigned char *)&pattern_0_0_0[8][0];patternz[4]=(unsigned char *)&pattern_0_0_0[13][0];
      patternz[5]=(unsigned char *)&pattern_0_0_0[15][0];patternz[6]=(unsigned char *)&pattern_0_0_0[17][0];patternz[7]=(unsigned char *)&pattern_0_0_0[19][0];patternz[8]=(unsigned char *)&pattern_0_0_0[23][0];patternz[9]=(unsigned char *)&pattern_0_0_0[29][0];
      patternz[10]=(unsigned char *)&pattern_0_0_0[45][0];patternz[11]=(unsigned char *)&pattern_0_0_0[62][0];patternz[12]=(unsigned char *)&pattern_0_0_0[85][0];patternz[13]=(unsigned char *)&pattern_0_0_0[90][0];patternz[14]=(unsigned char *)&pattern_0_0_0[92][0];patternz[15]=(unsigned char *)&pattern_0_0_0[105][0];
    break;
    case 2:
      patternz[0]=(unsigned char *)&pattern_1_0_0[0][0];patternz[1]=(unsigned char *)&pattern_1_0_0[2][0];patternz[2]=(unsigned char *)&pattern_1_0_0[6][0];patternz[3]=(unsigned char *)&pattern_1_0_0[8][0];patternz[4]=(unsigned char *)&pattern_1_0_0[13][0];
      patternz[5]=(unsigned char *)&pattern_1_0_0[15][0];patternz[6]=(unsigned char *)&pattern_1_0_0[17][0];patternz[7]=(unsigned char *)&pattern_1_0_0[19][0];patternz[8]=(unsigned char *)&pattern_1_0_0[23][0];patternz[9]=(unsigned char *)&pattern_1_0_0[29][0];
      patternz[10]=(unsigned char *)&pattern_1_0_0[45][0];patternz[11]=(unsigned char *)&pattern_1_0_0[62][0];patternz[12]=(unsigned char *)&pattern_1_0_0[85][0];patternz[13]=(unsigned char *)&pattern_1_0_0[90][0];patternz[14]=(unsigned char *)&pattern_1_0_0[92][0];patternz[15]=(unsigned char *)&pattern_1_0_0[105][0];
    break;
    case 3:
      patternz[0]=(unsigned char *)&pattern_2_0_0[0][0];patternz[1]=(unsigned char *)&pattern_2_0_0[2][0];patternz[2]=(unsigned char *)&pattern_2_0_0[6][0];patternz[3]=(unsigned char *)&pattern_2_0_0[9][0];patternz[4]=(unsigned char *)&pattern_2_0_0[14][0];
      patternz[5]=(unsigned char *)&pattern_2_0_0[16][0];patternz[6]=(unsigned char *)&pattern_2_0_0[18][0];patternz[7]=(unsigned char *)&pattern_2_0_0[20][0];patternz[8]=(unsigned char *)&pattern_2_0_0[24][0];patternz[9]=(unsigned char *)&pattern_2_0_0[30][0];
      patternz[10]=(unsigned char *)&pattern_2_0_0[46][0];patternz[11]=(unsigned char *)&pattern_2_0_0[90][0];patternz[12]=(unsigned char *)&pattern_2_0_0[113][0];patternz[13]=(unsigned char *)&pattern_2_0_0[118][0];patternz[14]=(unsigned char *)&pattern_2_0_0[120][0];patternz[15]=(unsigned char *)&pattern_2_0_0[133][0];
    break;
    case 4:
      patternz[0]=(unsigned char *)&pattern_3_0_0[0][0];patternz[1]=(unsigned char *)&pattern_3_0_0[2][0];patternz[2]=(unsigned char *)&pattern_3_0_0[8][0];patternz[3]=(unsigned char *)&pattern_3_0_0[12][0];patternz[4]=(unsigned char *)&pattern_3_0_0[17][0];
      patternz[5]=(unsigned char *)&pattern_3_0_0[19][0];patternz[6]=(unsigned char *)&pattern_3_0_0[21][0];patternz[7]=(unsigned char *)&pattern_3_0_0[23][0];patternz[8]=(unsigned char *)&pattern_3_0_0[28][0];patternz[9]=(unsigned char *)&pattern_3_0_0[36][0];
      patternz[10]=(unsigned char *)&pattern_3_0_0[52][0];patternz[11]=(unsigned char *)&pattern_3_0_0[96][0];patternz[12]=(unsigned char *)&pattern_3_0_0[119][0];patternz[13]=(unsigned char *)&pattern_3_0_0[124][0];patternz[14]=(unsigned char *)&pattern_3_0_0[126][0];patternz[15]=(unsigned char *)&pattern_3_0_0[139][0];
    break;
    case 5:
      patternz[0]=(unsigned char *)&pattern_4_0_0[0][0];patternz[1]=(unsigned char *)&pattern_4_0_0[2][0];patternz[2]=(unsigned char *)&pattern_4_0_0[10][0];patternz[3]=(unsigned char *)&pattern_4_0_0[18][0];patternz[4]=(unsigned char *)&pattern_4_0_0[23][0];
      patternz[5]=(unsigned char *)&pattern_4_0_0[25][0];patternz[6]=(unsigned char *)&pattern_4_0_0[28][0];patternz[7]=(unsigned char *)&pattern_4_0_0[30][0];patternz[8]=(unsigned char *)&pattern_4_0_0[36][0];patternz[9]=(unsigned char *)&pattern_4_0_0[46][0];
      patternz[10]=(unsigned char *)&pattern_4_0_0[62][0];patternz[11]=(unsigned char *)&pattern_4_0_0[106][0];patternz[12]=(unsigned char *)&pattern_4_0_0[129][0];patternz[13]=(unsigned char *)&pattern_4_0_0[135][0];patternz[14]=(unsigned char *)&pattern_4_0_0[137][0];patternz[15]=(unsigned char *)&pattern_4_0_0[150][0];
    break;
    
    case 6:
      patternz[0]=(unsigned char *)&pattern_5_0_0[0][0];patternz[1]=(unsigned char *)&pattern_5_0_0[2][0];patternz[2]=(unsigned char *)&pattern_5_0_0[12][0];patternz[3]=(unsigned char *)&pattern_5_0_0[20][0];patternz[4]=(unsigned char *)&pattern_5_0_0[26][0];
      patternz[5]=(unsigned char *)&pattern_5_0_0[28][0];patternz[6]=(unsigned char *)&pattern_5_0_0[30][0];patternz[7]=(unsigned char *)&pattern_5_0_0[32][0];patternz[8]=(unsigned char *)&pattern_5_0_0[39][0];patternz[9]=(unsigned char *)&pattern_5_0_0[51][0];
      patternz[10]=(unsigned char *)&pattern_5_0_0[67][0];patternz[11]=(unsigned char *)&pattern_5_0_0[111][0];patternz[12]=(unsigned char *)&pattern_5_0_0[134][0];patternz[13]=(unsigned char *)&pattern_5_0_0[140][0];patternz[14]=(unsigned char *)&pattern_5_0_0[142][0];patternz[15]=(unsigned char *)&pattern_5_0_0[155][0];
    break;
    
    /* for M Elson six pattern
    case 6:
      patternz[0]=pattern_5_0_0[0];patternz[1]=pattern_5_0_0[2];patternz[2]=pattern_5_0_0[42];patternz[3]=pattern_5_0_0[82];patternz[4]=pattern_5_0_0[122];
      patternz[5]=&pattern_5_0_0[162][0];patternz[6]=&pattern_5_0_0[202][0];patternz[7]=&pattern_5_0_0[242][0];patternz[8]=&pattern_5_0_0[282][0];patternz[9]=&pattern_5_0_0[322][0];
      patternz[10]=&pattern_5_0_0[362][0];patternz[11]=&pattern_5_0_0[363][0];patternz[12]=&pattern_5_0_0[364][0];patternz[13]=&pattern_5_0_0[365][0];patternz[14]=&pattern_5_0_0[366][0];patternz[15]=&pattern_5_0_0[367][0];
    break;
    */
    case 7:
      patternz[0]=(unsigned char *)&pattern_6_0_0[0][0];patternz[1]=(unsigned char *)&pattern_6_0_0[2][0];patternz[2]=(unsigned char *)&pattern_6_0_0[14][0];patternz[3]=(unsigned char *)&pattern_6_0_0[22][0];patternz[4]=(unsigned char *)&pattern_6_0_0[30][0];
      patternz[5]=(unsigned char *)&pattern_6_0_0[32][0];patternz[6]=(unsigned char *)&pattern_6_0_0[34][0];patternz[7]=(unsigned char *)&pattern_6_0_0[36][0];patternz[8]=(unsigned char *)&pattern_6_0_0[44][0];patternz[9]=(unsigned char *)&pattern_6_0_0[58][0];
      patternz[10]=(unsigned char *)&pattern_6_0_0[74][0];patternz[11]=(unsigned char *)&pattern_6_0_0[118][0];patternz[12]=(unsigned char *)&pattern_6_0_0[141][0];patternz[13]=(unsigned char *)&pattern_6_0_0[148][0];patternz[14]=(unsigned char *)&pattern_6_0_0[150][0];patternz[15]=(unsigned char *)&pattern_6_0_0[163][0];
    break;
    
/*    
//===================for the butterflys 7 channel
     case 7:
      patternz[0]=&pattern_6_0_0[0][0];patternz[1]=&pattern_6_0_0[72][0];patternz[2]=&pattern_6_0_0[141][0];patternz[3]=&pattern_6_0_0[206][0];patternz[4]=&pattern_6_0_0[266][0];
      patternz[5]=&pattern_6_0_0[318][0];patternz[6]=&pattern_6_0_0[349][0];patternz[7]=&pattern_6_0_0[351][0];patternz[8]=&pattern_6_0_0[353][0];patternz[9]=&pattern_6_0_0[355][0];
      patternz[10]=&pattern_6_0_0[357][0];patternz[11]=&pattern_6_0_0[359][0];patternz[12]=&pattern_6_0_0[361][0];patternz[13]=&pattern_6_0_0[363][0];patternz[14]=&pattern_6_0_0[365][0];patternz[15]=&pattern_6_0_0[367][0];
    break;
 */   
    case 8:
      patternz[0]=(unsigned char *)&pattern_7_0_0[0][0];patternz[1]=(unsigned char *)&pattern_7_0_0[2][0];patternz[2]=(unsigned char *)&pattern_7_0_0[16][0];patternz[3]=(unsigned char *)&pattern_7_0_0[21][0];patternz[4]=(unsigned char *)&pattern_7_0_0[29][0];
      patternz[5]=(unsigned char *)&pattern_7_0_0[31][0];patternz[6]=(unsigned char *)&pattern_7_0_0[33][0];patternz[7]=(unsigned char *)&pattern_7_0_0[35][0];patternz[8]=(unsigned char *)&pattern_7_0_0[44][0];patternz[9]=(unsigned char *)&pattern_7_0_0[60][0];
      patternz[10]=(unsigned char *)&pattern_7_0_0[76][0];patternz[11]=(unsigned char *)&pattern_7_0_0[120][0];patternz[12]=(unsigned char *)&pattern_7_0_0[143][0];patternz[13]=(unsigned char *)&pattern_7_0_0[151][0];patternz[14]=(unsigned char *)&pattern_7_0_0[153][0];patternz[15]=(unsigned char *)&pattern_7_0_0[166][0];
    break;
    case 9:
      patternz[0]=(unsigned char *)&pattern_8_0_0[0][0];patternz[1]=(unsigned char *)&pattern_8_0_0[2][0];patternz[2]=(unsigned char *)&pattern_8_0_0[20][0];patternz[3]=(unsigned char *)&pattern_8_0_0[25][0];patternz[4]=(unsigned char *)&pattern_8_0_0[35][0];
      patternz[5]=(unsigned char *)&pattern_8_0_0[37][0];patternz[6]=(unsigned char *)&pattern_8_0_0[39][0];patternz[7]=(unsigned char *)&pattern_8_0_0[41][0];patternz[8]=(unsigned char *)&pattern_8_0_0[52][0];patternz[9]=(unsigned char *)&pattern_8_0_0[73][0];
      patternz[10]=(unsigned char *)&pattern_8_0_0[89][0];patternz[11]=(unsigned char *)&pattern_8_0_0[133][0];patternz[12]=(unsigned char *)&pattern_8_0_0[156][0];patternz[13]=(unsigned char *)&pattern_8_0_0[166][0];patternz[14]=(unsigned char *)&pattern_8_0_0[168][0];patternz[15]=(unsigned char *)&pattern_8_0_0[181][0];
    break;
    /*
    case 10: /// John Rundall ten channel
      patternz[0]=(unsigned char *)&pattern_9_0_0[0][0];patternz[1]=(unsigned char *)&pattern_9_0_0[2][0];patternz[2]=(unsigned char *)&pattern_9_0_0[20][0];patternz[3]=(unsigned char *)&pattern_9_0_0[25][0];patternz[4]=(unsigned char *)&pattern_9_0_0[35][0];
      patternz[5]=(unsigned char *)&pattern_9_0_0[37][0];patternz[6]=(unsigned char *)&pattern_9_0_0[39][0];patternz[7]=(unsigned char *)&pattern_9_0_0[41][0];patternz[8]=(unsigned char *)&pattern_9_0_0[52][0];patternz[9]=(unsigned char *)&pattern_9_0_0[73][0];
      patternz[10]=(unsigned char *)&pattern_9_0_0[89][0];patternz[11]=(unsigned char *)&pattern_9_0_0[133][0];patternz[12]=(unsigned char *)&pattern_9_0_0[156][0];patternz[13]=(unsigned char *)&pattern_9_0_0[166][0];patternz[14]=(unsigned char *)&pattern_9_0_0[168][0];patternz[15]=(unsigned char *)&pattern_9_0_0[175][0];
    break;  
    */
    //regular ten channel
    case 10:
      patternz[0]=(unsigned char *)&pattern_9_0_0[0][0];patternz[1]=(unsigned char *)&pattern_9_0_0[2][0];patternz[2]=(unsigned char *)&pattern_9_0_0[20][0];patternz[3]=(unsigned char *)&pattern_9_0_0[25][0];patternz[4]=(unsigned char *)&pattern_9_0_0[35][0];
      patternz[5]=(unsigned char *)&pattern_9_0_0[37][0];patternz[6]=(unsigned char *)&pattern_9_0_0[39][0];patternz[7]=(unsigned char *)&pattern_9_0_0[41][0];patternz[8]=(unsigned char *)&pattern_9_0_0[52][0];patternz[9]=(unsigned char *)&pattern_9_0_0[73][0];
      patternz[10]=(unsigned char *)&pattern_9_0_0[89][0];patternz[11]=(unsigned char *)&pattern_9_0_0[133][0];patternz[12]=(unsigned char *)&pattern_9_0_0[156][0];patternz[13]=(unsigned char *)&pattern_9_0_0[166][0];patternz[14]=(unsigned char *)&pattern_9_0_0[168][0];patternz[15]=(unsigned char *)&pattern_9_0_0[181][0];
    break;    
  }  
  
  numchannels = channels;
  if(current_pattern != 0) flashallfeedback(channels, 20);
  change_pattern( pattern_id);
}

/**********************************************************************************************/

unsigned char get_the_byte(int pattern, int row, int column) {

      switch (pattern) {
         
        case 0: return( pgm_read_byte_near(patternz[0]+(row*12) + column));
        break;
        case 1: return( pgm_read_byte_near(patternz[1]+(row*12) + column));
        break;
        case 2: return( pgm_read_byte_near(patternz[2]+(row*12) + column));
        break;
        case 3: return( pgm_read_byte_near(patternz[3]+(row*12) + column));
        break;
        case 4: return( pgm_read_byte_near(patternz[4]+(row*12) + column));
        break;
        case 5: return( pgm_read_byte_near(patternz[5]+(row*12) + column));
        break;
        case 6: return( pgm_read_byte_near(patternz[6]+(row*12) + column));
        break;
        case 7: return( pgm_read_byte_near(patternz[7]+(row*12) + column));
        break;
        case 8: return( pgm_read_byte_near(patternz[8]+(row*12) + column));
        break;
        case 9: return( pgm_read_byte_near(patternz[9]+(row*12) + column));
        break;
        case 10: return( pgm_read_byte_near(patternz[10]+(row*12) + column));
        break;
        case 11: return( pgm_read_byte_near(patternz[11]+(row*12) + column));
        break;
        case 12: return( pgm_read_byte_near(patternz[12]+(row*12) + column));
        break;
        case 13: return( pgm_read_byte_near(patternz[13]+(row*12) + column));
        break;
        case 14: return( pgm_read_byte_near(patternz[14]+(row*12) + column));
        break;
        case 15: return( pgm_read_byte_near(patternz[15]+(row*12) + column));
        break;
      };
}

/**********************************************************************************************/

void change_pattern(int pattern_no) {
  int x,y;
  unsigned char z;
  char thepattern=pattern_no;
  
  pattern_id = pattern_no;
  
      if(serflag)Serial.print("setting pattern # ");
      if(serflag)Serial.println(pattern_id);
            
    //  step_max = pgm_read_byte_near(pattern_ptr[0][pattern_id] + 10);
      //-------------debug
      switch (pattern_id) {
        case 0: step_max = pgm_read_byte_near(patternz[0]+(10));
        break;
        case 1: step_max = pgm_read_byte_near(patternz[1]+(10));
        break;
        case 2: step_max = pgm_read_byte_near(patternz[2]+(10));
        break;
        case 3: step_max = pgm_read_byte_near(patternz[3]+(10));
        break;
        case 4: step_max = pgm_read_byte_near(patternz[4]+(10));
        break;
        case 5: step_max = pgm_read_byte_near(patternz[5]+(10));
        break;
        case 6: step_max = pgm_read_byte_near(patternz[6]+(10));
        break;
        case 7: step_max = pgm_read_byte_near(patternz[7]+(10));
        break;
        case 8: step_max = pgm_read_byte_near(patternz[8]+(10));
        break;
        case 9: step_max = pgm_read_byte_near(patternz[9]+(10));
        break;
        case 10: step_max = pgm_read_byte_near(patternz[10]+(10));
        break;
        case 11: step_max = pgm_read_byte_near(patternz[11]+(10));
        break;
        case 12: step_max = pgm_read_byte_near(patternz[12]+(10));
        break;
        case 13: step_max = pgm_read_byte_near(patternz[13]+(10));
        break;
        case 14: step_max = pgm_read_byte_near(patternz[14]+(10));
        break;
        case 15: step_max = pgm_read_byte_near(patternz[15]+(10));
        break;
      };
      //step_max = pgm_read_byte_near(patternz[thepattern]+(10));//*(patternz[0][pattern_id]/*pattern_0[0]/*pattern_0_0_0[0]*/ + 10));
     
      //----------------debug
      step_counter = 0;
  
      if(serflag)Serial.print("step max =");
      if(serflag)Serial.println(step_max);
      
      for(x=0; x < step_max; ++x) {
        if(serflag)Serial.print(x);
        if(serflag)Serial.print(" ");
        for(y=0; y < 12; y++) {
          //if(serflag)Serial.print((int)pgm_read_byte_near(pattern_ptr[0][pattern_id] +(x*12) + y),HEX);
          //debug
          //if(serflag)Serial.print((int)pgm_read_byte_near(patternz[0][pattern_id] +(x*12) + y),HEX);
          z = get_the_byte(pattern_id,x,y);
           //pin_brightness[x] = (unsigned char) z;
          //z = pgm_read_byte_near(patternz[thepattern]+(x*12) + y);
          if(serflag)Serial.print(z,HEX);
          //debug
          if(serflag) {
           if(y>8)Serial.print("  ");
             else Serial.print(",");
          }
        }
        if(serflag)Serial.println(" ");
      }
      
      if(serflag)Serial.println("======= END READ =========== ");
            
   /* for (y = 0; y < 10; ++y) {
      for (x = 0; x < max_pins; x++) {// turn each on
         digitalWrite(light_pins[x],255);
      }
      delay(30);
      for (x = 0; x < max_pins; x++) {// turn each off
        digitalWrite(light_pins[x],0);
      }
      
    } */
    if(current_pattern != 0) flashallfeedback(5,50);
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
  //pinMode(load_pin, OUTPUT);
  //digitalWrite(load_pin, ON); 
  
  pinMode(external_trigger_pin, INPUT);
  digitalWrite(external_trigger_pin,HIGH);
  
  analogReference(DEFAULT);
 
  step_counter = 0;

  pattern_id = 0; //
  change_pattern(0);
  change_number_channels(5);

//butterfly =============

//  change_number_channels(7);
//  pattern_id = 3;
//  change_pattern(EMPEROR);
//  pattern_id = current_pattern = 3;
  //USE_CONTROLS = 0;
// end butterfly =====================

 // change_pattern(1);

  if(USE_CONTROLS) read_controls(); // first read
}

/**********************************************************************************************/

void loop()                     
{ 
  int x,y;
      
    if(serflag)Serial.print("loop ");
    for (x = 0; x < max_pins; x++) {// turn each on
     //debug pin_brightness[x] = (unsigned char)pgm_read_byte_near(pattern_ptr[max_pins] + (pattern_id*12) + (step_counter*12) + x);
            //pin_brightness[x] = (unsigned char)pgm_read_byte_near(patternz[max_pins][pattern_id] + (pattern_id*12) + (step_counter*12) + x);
         
           pin_brightness[x] = (unsigned char) get_the_byte(pattern_id,step_counter,x);
      digitalWrite(light_pins[x], pin_brightness[x]);
      if(serflag)Serial.print((int)pin_brightness[x],HEX);
      if(serflag)Serial.print(",");
    }
    if(serflag)Serial.print(" end");
    
    if(!USE_CONTROLS) { //25ms in the case of the butterfly
       cycle_delay = (unsigned char) get_the_byte(pattern_id,step_counter,11); ///(unsigned long)(pgm_read_byte_near(pattern_ptr[max_pins][pattern_id] + (step_counter*12) + 11) * 10);  // mult the delay * 10
       cycle_delay = cycle_delay * 10;
       if(serflag)Serial.print(", cycle delay = ");
       if(serflag)Serial.println(cycle_delay);
    }

    // increment the step_counter and reset back to 0 to start the sequence over
    
    if (++step_counter >= step_max) {  //step_max) {   
      step_counter = 0;
      if(serflag)Serial.print(". pattern-: ");
      if(serflag)Serial.println(pattern_id);
      
      if(current_pattern == 0) {  // run thru all patterns mode is on
        if(++pattern_repeat >= ALL_PATTERN_REPEAT) {
          pattern_repeat = 0;
          if(++the_repeat_pattern >= pattern_max) {
            the_repeat_pattern = 1;
          }
           // FOR MATT ELSON'S BOX ONLY ===========
        //  if(numchannels == 6) {
        //    for(y=0;y<16;++y) {
        //       for(x = 0; x < max_pins; ++x) {  // ALL ON
        //          digitalWrite(light_pins[x],0);
        //          
         //       } // for y
         //      strobe((unsigned long)cycle_delay);
         //   }
         // }
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
  
    strobe((unsigned long)cycle_delay); // put the values out to the pins
  
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
  
  int temp_p,x,y;
  int oldnumchannels;
  
  if(!USE_CONTROLS) return(0);
  if(READ_ONLY_SPEED) {
    old_cycle_delay = cycle_delay;
    cycle_delay = (analogRead(speed_pin)*delay_multiplier) ;
    if(cycle_delay < MIN_delay) cycle_delay = MIN_delay;
    if(cycle_delay > MAX_delay) cycle_delay = MAX_delay;
    strobe_period = 0;
    previous_cycle_delay = cycle_delay;
    old_pattern = pattern_id;
    previous_pattern_id = pattern_id;
    current_pattern = pattern_id;
    
   return(0); 
  }

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

 // brightness = analogRead(brightness_pin)/10;
 oldnumchannels = numchannels;
 numchannels = analogRead(brightness_pin)/100;
 
 
 
 if(numchannels > 10) numchannels = 10;
 if(numchannels < 1) numchannels = 1;
/////////////////////////////////////////////////////////////////////////////////// 
// numchannels = 8; // christoper hardwyck knob override ////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////// 
 if(oldnumchannels != numchannels) {
    change_number_channels(numchannels);
 }
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

    if(old_pattern != pattern_id) { // only for the custom 6 channel melsonsix.h
     
      
       change_pattern(pattern_id);
    // Serial.print("pattern = "); Serial.println(pattern_id);
    }
    else current_pattern = pattern_id = old_pattern;
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
  //return(pattern_id / 16);brightness_pinbrightness_pin
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
/*
int check_num_of_channels()
{
  //return(pattern_id / 16);brightness_pinbrightness_pin
  // these limits are based on having 16 patterns
  
  int num_channels = analogRead(brightness_pin);
  
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
*/
/**********************************************************************************************/




