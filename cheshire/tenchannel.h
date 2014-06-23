

#define X 0
#define O 255


/* DUMMY BLOCK FOR COPYING
//PROGMEM prog_char pattern_0[] = {            // 255 = NO LIGHT
 
   {O,O, O,O,O,O,O,O,O,O, 10,1},   //  # 1 
   {O,O, O,O,O,O,O,O,O,O, 0,1},
   {O,O, O,O,O,O,O,O,O,O, 0,1},
   {O,O, O,O,O,O,O,O,O,O, 0,1},
   {O,O, O,O,O,O,O,O,O,O, 0,1},
   {O,O, O,O,O,O,O,O,O,O, 0,1},
   {O,O, O,O,O,O,O,O,O,O, 0,1},
   {O,O, O,O,O,O,O,O,O,O, 0,1},
   {O,O, O,O,O,O,O,O,O,O, 0,1},
   {O,O, O,O,O,O,O,O,O,O, 0,1 
//};
*/

PROGMEM const unsigned char pattern_9_0_0[][12] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O,O,O,O,O,O, 2,1},   //  # 1 ALL OFF, THE LAST PATTERN IS ALL ON = STANDARD NOW... 0
   {O,O,O,O,O,O,O,O,O,O, 0,1},   
//};

//PROGMEM prog_char pattern_9_0_1[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O,O,O,O,O,X, 18,1},   //  # 2 chase from pin 1 to 10 and back / 2
   {O,O,O,O,O,O,O,O,X,O, 0,1},
   {O,O,O,O,O,O,O,X,O,O, 0,1},
   {O,O,O,O,O,O,X,O,O,O, 0,1},
   {O,O,O,O,O,X,O,O,O,O, 0,1},
   {O,O,O,O,X,O,O,O,O,O, 0,1},
   {O,O,O,X,O,O,O,O,O,O, 0,1},
   {O,O,X,O,O,O,O,O,O,O, 0,1},
   {O,X,O,O,O,O,O,O,O,O, 0,1},
   {X,O,O,O,O,O,O,O,O,O, 0,1},
   {O,X,O,O,O,O,O,O,O,O, 0,1},
   {O,O,X,O,O,O,O,O,O,O, 0,1},
   {O,O,O,X,O,O,O,O,O,O, 0,1},
   {O,O,O,O,X,O,O,O,O,O, 0,1},
   {O,O,O,O,O,X,O,O,O,O, 0,1},
   {O,O,O,O,O,O,X,O,O,O, 0,1},
   {O,O,O,O,O,O,O,X,O,O, 0,1},
   {O,O,O,O,O,O,O,O,X,O, 0,1}, 
//};
         
//PROGMEM prog_char pattern_9_0_2[] = {            // 255 = NO LIGHT
 
   {X,O,O,O,O,X,O,O,O,X, 5,1},   //  # 3 chase 1 and 5 from pin 1 to 10  / 20
   {O,O,O,O,X,O,O,O,X,O, 0,1},
   {O,O,O,X,O,O,O,X,O,O, 0,1},
   {O,O,X,O,O,O,X,O,O,O, 0,1},
   {O,X,O,O,O,X,O,O,O,O, 0,1},
//};

//PROGMEM prog_char pattern_9_0_3[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O,X,O,O,O,X, 10,1},   //  # 4 chase 1 and 5 from pin 1 to 10 and then back / 25
   {O,O,O,O,X,O,O,O,X,O, 0,1},
   {O,O,O,X,O,O,O,X,O,O, 0,1},
   {O,O,X,O,O,O,X,O,O,O, 0,1},
   {O,X,O,O,O,X,O,O,O,O, 0,1},
   {X,O,O,O,X,O,O,O,O,O, 0,1},
   {O,X,O,O,O,X,O,O,O,O, 0,1},
   {O,O,X,O,O,O,X,O,O,O, 0,1},
   {O,O,O,X,O,O,O,X,O,O, 0,1},
   {O,O,O,O,X,O,O,O,X,O, 0,1},
//};
   
//PROGMEM prog_char pattern_9_0_4[] = {            // 255 = NO LIGHT
 
   {O,X,O,X,O,X,O,X,O,X, 2,1},   //  # 5 alternate odd evens  / 35
   {X,O,X,O,X,O,X,O,X,O, 0,1},
//};

//PROGMEM prog_char pattern_9_0_5[] = {            // 255 = NO LIGHT
 
   {X,X,O,O,X,X,O,O,X,X, 2,1},   //  # 6 alternate in twos / 37
   {O,O,X,X,O,O,X,X,O,O, 0,1},   
//}; 
   
//PROGMEM prog_char pattern_9_0_6[] = {            // 255 = NO LIGHT
 
   {X,X,X,X,X,X,X,X,X,X, 2,1},   //  # 7 blink all on all off  / 39
   {O,O,O,O,O,O,O,O,O,O, 0,1},   
//}; 
   
//PROGMEM prog_char pattern_9_0_7[] = {            // 255 = NO LIGHT
 
   {X,X,X,X,X,X,X,X,X,X, 11,1},   //  # 8 all on then recede 1 by one  / 41
   {O,X,X,X,X,X,X,X,X,X, 0,1},
   {O,O,X,X,X,X,X,X,X,X, 0,1},
   {O,O,O,X,X,X,X,X,X,X, 0,1},   
   {O,O,O,O,X,X,X,X,X,X, 0,1},   
   {O,O,O,O,O,X,X,X,X,X, 0,1},   
   {O,O,O,O,O,O,X,X,X,X, 0,1},   
   {O,O,O,O,O,O,O,X,X,X, 0,1},   
   {O,O,O,O,O,O,O,O,X,X, 0,1},   
   {O,O,O,O,O,O,O,O,O,X, 0,1},   
   {O,O,O,O,O,O,O,O,O,O, 0,1},   
//}; 
   
//PROGMEM prog_char pattern_9_0_8[] = {            // 255 = NO LIGHT
 
   {X,X,X,X,X,X,X,X,X,X, 21,1},   //  # 9 all on then recede 1 by one  / 52
   {O,X,X,X,X,X,X,X,X,X, 0,1},
   {O,O,X,X,X,X,X,X,X,X, 0,1},
   {O,O,O,X,X,X,X,X,X,X, 0,1},   
   {O,O,O,O,X,X,X,X,X,X, 0,1},   
   {O,O,O,O,O,X,X,X,X,X, 0,1},   
   {O,O,O,O,O,O,X,X,X,X, 0,1},   
   {O,O,O,O,O,O,O,X,X,X, 0,1},   
   {O,O,O,O,O,O,O,O,X,X, 0,1},   
   {O,O,O,O,O,O,O,O,O,X, 0,1},   
   {O,O,O,O,O,O,O,O,O,O, 0,1}, 
   {O,O,O,O,O,O,O,O,O,X, 0,1},
   {O,O,O,O,O,O,O,O,X,X, 0,1},
   {O,O,O,O,O,O,O,X,X,X, 0,1},
   {O,O,O,O,O,O,X,X,X,X, 0,1},
   {O,O,O,O,O,X,X,X,X,X, 0,1},
   {O,O,O,O,X,X,X,X,X,X, 0,1},
   {O,O,O,X,X,X,X,X,X,X, 0,1},
   {O,O,X,X,X,X,X,X,X,X, 0,1},
   {O,X,X,X,X,X,X,X,X,X, 0,1},
   {X,X,X,X,X,X,X,X,X,X, 0,1},
//};  
   
//PROGMEM prog_char pattern_9_0_9[] = {            // 255 = NO LIGHT
 
   {X,X,X,X,X,X,O,O,O,O, 16,1},   //  # 9 all on then recede 1 by one  / 73
   {O,O,X,X,X,X,X,X,X,X, 0,1},   
   {O,O,O,X,X,X,X,X,O,O, 0,1},   
   {O,O,O,O,O,X,X,X,X,O, 0,1},   
   {X,X,X,X,X,X,X,X,X,X, 0,1},   
   {O,X,O,O,O,O,O,X,X,X, 0,1},   
   {O,O,X,O,O,O,O,O,X,X, 0,1},   
   {X,X,X,X,X,X,X,X,X,X, 0,1},   
   {O,O,O,O,O,O,O,O,O,O, 0,1}, 
   {O,O,O,O,O,O,O,O,O,X, 0,1},
   {X,X,X,X,X,X,X,X,X,X, 0,1},
   {O,O,O,X,O,O,O,X,X,X, 0,1},
   {O,O,X,O,O,O,X,X,X,X, 0,1},
   {X,X,X,X,X,X,X,X,X,X, 0,1},
   {O,O,O,O,X,X,X,X,O,O, 0,1},
   {X,O,O,X,X,X,X,O,O,X, 0,1},
//};   
   
//PROGMEM prog_char pattern_9_0_10[] = {            // 255 = NO LIGHT 
 
   {O,O,X,O,X,O,O,O,O,O, 44,1},   //  # 10 SPARKLE  / 89
   {X,O,O,X,O,X,X,O,O,O, 0,1},   
   {O,O,O,O,X,O,X,O,O,O, 0,1},   
   {O,O,O,O,O,X,X,O,X,O, 0,1},   
   {O,O,O,O,O,O,X,O,X,X, 0,1},   
   {O,O,O,X,O,X,O,X,O,X, 0,1},   
   {O,O,O,O,O,O,O,O,X,X, 0,1},   
   {O,O,X,X,O,O,O,O,O,X, 0,1},   
   {O,X,O,O,O,O,O,O,O,O, 0,1}, 
   {O,O,O,X,O,O,X,O,O,X, 0,1},
   {O,O,O,O,O,O,O,O,X,X, 0,1},
   {X,O,O,O,O,O,O,X,O,X, 0,1},
   {O,X,O,O,O,O,X,O,X,X, 0,1},
   {O,O,X,O,O,X,X,X,X,O, 0,1},
   {O,O,O,O,X,O,O,O,O,O, 0,1},
   {O,O,X,X,O,X,X,O,O,O, 0,1},   
   {O,X,O,O,X,X,O,X,O,O, 0,1},   
   {O,O,X,O,O,O,X,X,X,O, 0,1},   
   {O,O,O,O,O,O,X,X,O,X, 0,1},   
   {O,O,O,X,O,O,X,X,X,X, 0,1},   
   {O,X,O,O,O,O,O,O,X,X, 0,1},   
   {O,O,O,O,O,O,O,O,O,X, 0,1},   
   {X,O,X,X,X,X,X,X,X,X, 0,1}, 
   {O,O,O,O,O,O,O,O,O,X, 0,1},
   {X,O,X,X,X,X,X,X,X,X, 0,1},
   {O,O,O,X,O,O,O,X,O,X, 0,1},
   {O,O,O,O,O,O,X,X,X,X, 0,1},
   {X,O,X,X,X,X,X,X,X,X, 0,1},
   {X,O,X,X,X,X,X,O,X,X, 0,1},
   {O,O,X,X,X,O,X,X,X,X, 0,1},   
   {X,O,O,O,X,X,X,X,O,O, 0,1},   
   {O,O,O,O,O,X,O,X,X,O, 0,1},   
   {O,O,O,O,O,O,X,X,O,X, 0,1},   
   {O,O,X,O,O,O,O,O,O,O, 0,1},   
   {O,O,O,O,O,O,O,O,O,O, 0,1},   
   {O,O,O,O,O,X,O,O,O,X, 0,1},   
   {X,O,O,O,O,O,O,O,O,O, 0,1}, 
   {O,O,O,X,O,O,O,O,O,X, 0,1},
   {O,O,O,O,O,O,O,O,X,X, 0,1},
   {X,O,O,O,O,O,O,X,O,X, 0,1},
   {O,O,O,X,O,O,X,X,X,X, 0,1},
   {O,X,O,O,O,X,O,X,X,O, 0,1},
   {O,X,O,O,O,X,O,X,O,O, 0,1},
   {O,O,O,X,O,X,X,O,X,O, 0,1},
//}; 
   
//PROGMEM prog_char pattern_9_0_11[] = {  
   {X,X,X,X,X,X,X,X,X,X, 23,1},  // # 12 two chases from each end X  133
   {X,X,X,X,X,X,X,X,X,X, 0,1},   
   {X,X,X,X,X,X,X,X,X,X, 0,1},   
   {O,O,O,O,O,O,O,O,O,O, 0,1}, 
   {X,X,X,X,X,X,X,X,X,X, 0,1},   
   {X,X,X,X,X,X,X,X,X,X, 0,1},   
   {O,O,O,O,O,O,O,O,O,O, 0,1},   
   {O,O,O,O,O,O,O,O,O,O, 0,1},   
   {X,X,X,X,X,X,X,X,X,X, 0,1},   
   {O,O,O,O,O,O,O,O,O,O, 0,1},   
   {O,O,O,O,O,O,O,O,O,O, 0,1},  
   {O,O,O,O,O,O,O,O,O,O, 0,1},   
   {O,O,O,O,O,O,O,O,O,O, 0,1},   
   {X,X,X,X,X,X,X,X,X,X, 0,1},   
   {X,X,X,X,X,X,X,X,X,X, 0,1},   
   {X,X,X,X,X,X,X,X,X,X, 0,1}, 
   {O,O,O,O,O,O,O,O,O,O, 0,1},
   {X,X,X,X,X,X,X,X,X,X, 0,1},
   {O,O,O,O,O,O,O,O,O,O, 0,1},
   {O,O,O,O,O,O,O,O,O,O, 0,1},
   {X,X,X,X,X,X,X,X,X,X, 0,1},
   {X,X,X,X,X,X,X,X,X,X, 0,1},
   {O,O,O,O,O,O,O,O,O,O, 0,1}, 
//}; 
   
//PROGMEM prog_char pattern_9_0_12[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O,O,O,O,O,X, 10,1},   //  # 13 chase from pin 1 to 10  / 156
   {O,O,O,O,O,O,O,O,X,O, 0,1},
   {O,O,O,O,O,O,O,X,O,O, 0,1},
   {O,O,O,O,O,O,X,O,O,O, 0,1},
   {O,O,O,O,O,X,O,O,O,O, 0,1},
   {O,O,O,O,X,O,O,O,O,O, 0,1},
   {O,O,O,X,O,O,O,O,O,O, 0,1},
   {O,O,X,O,O,O,O,O,O,O, 0,1},
   {O,X,O,O,O,O,O,O,O,O, 0,1},
   {X,O,O,O,O,O,O,O,O,O, 0,1},
//};
   
//PROGMEM prog_char pattern_9_0_13[] = { 
   {X,X,X,X,X,O,O,O,O,O, 2,1},   //  # 14 HALF ON HALF OFF ALTERNATE / 166
   {O,O,O,O,O,X,X,X,X,X, 0,1}, 
//};

////////////////////////////////////////these two are custom patterns for John Rundall
/*
  {X,X,O,O,O,O,O,O,O,O, 7,1},  //168
  {O,O,X,X,O,O,O,O,O,O, 0,1},
  {O,O,O,O,X,X,O,O,O,O, 0,1},//170
  {O,O,O,O,O,O,X,X,O,O, 0,1},
  {O,O,O,O,O,O,O,O,X,X, 0,1},
  {O,O,O,O,O,O,O,O,O,X, 0,1},
  {O,O,O,O,O,O,O,O,X,X, 0,1},
  
  
  {X,X,O,O ,O,O,O,O,O,O, 10,1},  //175
  {X,X,X,X,O,O,O,O,O,O, 0,1},
  {O,O,X,X,X,X,O,O,O,O, 0,1},
  {O,O,O,O,X,X,X,X,O,O, 0,1},
  {O,O,O,O,O,O,X,X,O,O, 0,1},
  {O,O,O,O,O,O,O,O,X,X, 0,1}, //180
  {O,O,O,O,O,O,O,O,O,X, 0,1},
  {O,O,O,O,O,O,O,O,X,X, 0,1},
  {O,O,O,O,O,O,O,O,X,O, 0,1},
  {O,O,O,O,O,O,O,O,X,X, 0,1}

//////////////////////////////////////////end of John Rundall
*/


//PROGMEM prog_char pattern_9_0_14[] = {  
   {X,X,X,X,X,X,X,X,X,X, 13,1},   //  # 15 WHO KNOWS! / 168
   {O,X,O,X,O,X,O,X,O,X, 0,1}, 
   {X,X,X,X,X,X,X,X,X,X, 0,1}, 
   {X,O,X,O,X,O,X,O,X,O, 0,1}, 
   {X,X,X,X,X,X,X,X,X,X, 0,1}, 
   {O,O,X,O,O,O,O,X,O,O, 0,1}, 
   {X,X,X,X,X,X,X,X,X,X, 0,1}, 
   {O,O,O,O,O,X,O,O,O,O, 0,1}, 
   {X,X,X,X,X,X,X,X,X,X, 0,1}, 
   {O,O,O,O,O,O,O,O,O,O, 0,1}, 
   {X,X,X,X,X,X,X,X,X,X, 0,1}, 
   {O,O,O,O,O,O,O,O,O,O, 0,1}, 
   {O,O,O,O,O,O,O,O,O,O, 0,1}, 
//} ;

//PROGMEM prog_char pattern_9_0_15[] = {            // 255 = NO LIGHT 
 
   {X,X,X,X,X,X,X,X,X,X, 2,1},   //  # 16 ALL ON /  181
   {X,X,X,X,X,X,X,X,X,X, 0,1}  
};


