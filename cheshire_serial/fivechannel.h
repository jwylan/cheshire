

#define X 0
#define O 255


/* DUMMY BLOCK FOR COPYING
PROGMEM prog_char pattern_0[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O, O,O,O,O,O, 10,1},   //  # 1 
   {O,O,O,O,O, O,O,O,O,O, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1 
};
*/

PROGMEM const unsigned char pattern_4_0_0[][12] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O, O,O,O,O,O, 2,1},   //  # 1 ALL OFF, THE LAST PATTERN IS ALL ON = STANDARD NOW... 0
   {O,O,O,O,O, O,O,O,O,O, 0,1},   
//};

//PROGMEM prog_char pattern_4_0_1[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O, O,O,O,O,X, 8,1},   //  # 2 chase from pin 1 to 10 and back / 2
   {O,O,O,O,O, O,O,O,X,O, 0,1},
   {O,O,O,O,O, O,O,X,O,O, 0,1},
   {O,O,O,O,O, O,X,O,O,O, 0,1},
   {O,O,O,O,O, X,O,O,O,O, 0,1},
   {O,O,O,O,O, O,X,O,O,O, 0,1},
   {O,O,O,O,O, O,O,X,O,O, 0,1},
   {O,O,O,O,O, O,O,O,X,O, 0,1}, 
//};
   
      
//PROGMEM prog_char pattern_4_0_2[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O, X,O,O,O,X, 8,1},   //  # 3 chase 1 and 5 from pin 1 to 10  / 10
   {O,O,O,O,O, O,O,O,X,O, 0,1},
   {O,O,O,O,O, O,O,X,O,O, 0,1},
   {O,O,O,O,O, O,X,O,O,O, 0,1},   
   {O,O,O,O,O, X,O,O,O,X, 0,1},
   {O,O,O,O,O, O,O,O,X,O, 0,1},
   {O,O,O,O,O, O,O,X,O,O, 0,1},
   {O,O,O,O,O, O,X,O,O,O, 0,1},
//};

//PROGMEM prog_char pattern_4_0_3[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O, X,O,O,O,X, 5,1},   //  # 4 chase 1 and 5 from pin 1 to 10 and then back / 18
   {O,O,O,O,O, O,O,O,X,O, 0,1},
   {O,O,O,O,O, X,O,O,X,O, 0,1},
   {O,O,O,O,O, O,X,O,O,X, 0,1},
   {O,O,O,O,O, O,O,X,O,O, 0,1},
//};
   
//PROGMEM prog_char pattern_4_0_4[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O, X,O,X,O,X, 2,1},   //  # 5 alternate odd evens  / 23
   {O,O,O,O,O, O,X,O,X,O, 0,1},
//};


//PROGMEM prog_char pattern_4_0_5[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O, X,O,O,X,X, 3,1},   //  # 6 alternate in twos / 25
   {O,O,O,O,O, O,X,X,O,O, 0,1},   
   {O,O,O,O,O, X,O,X,X,O, 0,1},
//}; 
   
//PROGMEM prog_char pattern_4_0_6[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O, X,X,X,X,X, 2,1},   //  # 7 blink all on all off  / 28
   {O,O,O,O,O, O,O,O,O,O, 0,1},   
//}; 
   
//PROGMEM prog_char pattern_4_0_7[] = {            // 255 = NO LIGHT
   
   {O,O,O,O,O, X,X,X,X,X, 6,1},   //  # 8 all on then recede 1 by one  /     30 
   {O,O,O,O,O, O,X,X,X,X, 0,1},   
   {O,O,O,O,O, O,O,X,X,X, 0,1},   
   {O,O,O,O,O, O,O,O,X,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1},   
//}; 
   
//PROGMEM prog_char pattern_4_0_8[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O, X,X,X,X,X, 10,1},   //  # 9 all on then recede 1 by one  / 36
   {O,O,O,O,O, O,X,X,X,X, 0,1},   
   {O,O,O,O,O, O,O,X,X,X, 0,1},   
   {O,O,O,O,O, O,O,O,X,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1}, 
   {O,O,O,O,O, O,O,O,O,X, 0,1},
   {O,O,O,O,O, O,O,O,X,X, 0,1},
   {O,O,O,O,O, O,O,X,X,X, 0,1},
   {O,O,O,O,O, O,X,X,X,X, 0,1},
//};  
   
//PROGMEM prog_char pattern_4_0_9[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O, X,O,O,O,O, 16,1},   //  # 9 all on then recede 1 by one  / 46
   {O,O,O,O,O, X,X,X,X,X, 0,1},   
   {O,O,O,O,O, X,X,X,O,O, 0,1},   
   {O,O,O,O,O, X,X,X,X,O, 0,1},   
   {O,O,O,O,O, X,X,X,X,X, 0,1},   
   {O,O,O,O,O, O,O,X,X,X, 0,1},   
   {O,O,O,O,O, O,O,O,X,X, 0,1},   
   {O,O,O,O,O, X,X,X,X,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1}, 
   {O,O,O,O,O, O,O,O,O,X, 0,1},
   {O,O,O,O,O, X,X,X,X,X, 0,1},
   {O,O,O,O,O, O,O,X,X,X, 0,1},
   {O,O,O,O,O, O,X,X,X,X, 0,1},
   {O,O,O,O,O, X,X,X,X,X, 0,1},
   {O,O,O,O,O, X,X,X,O,O, 0,1},
   {O,O,O,O,O, X,X,O,O,O, 0,1},
//};   
   
//PROGMEM prog_char pattern_4_0_10[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O, O,O,O,O,O, 44,1},   //  # 10 SPARKLE  / 62
   {O,O,O,O,O, X,X,O,O,O, 0,1},   
   {O,O,O,O,O, O,X,O,O,O, 0,1},   
   {O,O,O,O,O, X,X,O,X,O, 0,1},   
   {O,O,O,O,O, O,X,O,X,X, 0,1},   
   {O,O,O,O,O, O,O,X,O,X, 0,1},   
   {O,O,O,O,O, O,O,O,X,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1}, //70
   {O,O,O,O,O, O,O,O,O,X, 0,1},
   {O,O,O,O,O, O,O,O,X,X, 0,1},
   {O,O,O,O,O, O,O,X,O,X, 0,1},
   {O,O,O,O,O, O,X,O,X,X, 0,1},
   {O,O,O,O,O, X,X,X,X,O, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1},
   {O,O,O,O,O, X,X,O,O,O, 0,1},   
   {O,O,O,O,O, X,O,X,O,O, 0,1},   
   {O,O,O,O,O, O,X,X,X,O, 0,1},   
   {O,O,O,O,O, O,X,X,X,X, 0,1},   //80
   {O,O,O,O,O, O,X,X,X,X, 0,1},   
   {O,O,O,O,O, O,O,O,X,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,X, 0,1},   
   {O,O,O,O,O, X,X,X,X,X, 0,1}, 
   {O,O,O,O,O, O,O,O,O,X, 0,1},
   {O,O,O,O,O, X,X,X,X,X, 0,1},
   {O,O,O,O,O, O,O,X,O,X, 0,1},
   {O,O,O,O,O, O,X,X,X,X, 0,1},
   {O,O,O,O,O, X,X,X,X,X, 0,1},
   {O,O,O,O,O, X,X,X,X,X, 0,1}, //90
   {O,O,O,O,O, X,X,X,X,X, 0,1},   
   {O,O,O,O,O, X,X,X,O,O, 0,1},   
   {O,O,O,O,O, X,O,X,X,O, 0,1},   
   {O,O,O,O,O, O,X,X,O,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1},   
   {O,O,O,O,O, O,O,O,O,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1}, 
   {O,O,O,O,O, O,O,O,O,X, 0,1},
   {O,O,O,O,O, O,O,O,X,X, 0,1}, //100
   {O,O,O,O,O, O,O,X,O,X, 0,1},
   {O,O,O,O,O, O,X,X,X,X, 0,1},
   {O,O,O,O,O, X,O,X,X,O, 0,1},
   {O,O,O,O,O, X,O,X,O,O, 0,1},
   {O,O,O,O,O, X,X,O,X,O, 0,1},
//}; 
   
//PROGMEM prog_char pattern_4_0_11[] = {  
   {O,O,O,O,O, X,X,X,X,X, 23,1},  // # 12 two chases from each end X 106
   {O,O,O,O,O, X,X,X,X,X, 0,1},   
   {O,O,O,O,O, X,X,X,X,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1}, 
   {O,O,O,O,O, X,X,X,X,X, 0,1},   //110
   {O,O,O,O,O, X,X,X,X,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1},   
   {O,O,O,O,O, X,X,X,X,X, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1},  
   {O,O,O,O,O, O,O,O,O,O, 0,1},   
   {O,O,O,O,O, O,O,O,O,O, 0,1},   
   {O,O,O,O,O, X,X,X,X,X, 0,1},   
   {O,O,O,O,O, X,X,X,X,X, 0,1},  //120 
   {O,O,O,O,O, X,X,X,X,X, 0,1}, 
   {O,O,O,O,O, O,O,O,O,O, 0,1},
   {O,O,O,O,O, X,X,X,X,X, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1},
   {O,O,O,O,O, X,X,X,X,X, 0,1},
   {O,O,O,O,O, X,X,X,X,X, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1}, 
//}; 
   
//PROGMEM prog_char pattern_4_0_12[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O, O,O,O,O,X, 6,1},   //  # 13 chase from pin 1 to 10  / 129
   {O,O,O,O,O, O,O,O,X,O, 0,1},
   {O,O,O,O,O, O,O,X,O,O, 0,1},
   {O,O,O,O,O, O,X,O,O,O, 0,1},
   {O,O,O,O,O, X,O,O,O,O, 0,1},
   {O,O,O,O,O, O,O,O,O,O, 0,1},
//};
   
//PROGMEM prog_char pattern_4_0_13[] = { 
   {O,O,O,O,O, X,X,O,O,O, 2,1},   //  # 14 HALF ON HALF OFF ALTERNATE / 135
   {O,O,O,O,O, O,O,X,X,X, 0,1},  
//};

//PROGMEM prog_char pattern_4_0_14[] = {  
   {O,O,O,O,O, X,X,X,X,X, 13,1},   //  # 15 WHO KNOWS! / 137
   {O,O,O,O,O, X,O,X,O,X, 0,1}, 
   {O,O,O,O,O, X,X,X,X,X, 0,1}, 
   {O,O,O,O,O, O,X,O,X,O, 0,1}, 
   {O,O,O,O,O, X,X,X,X,X, 0,1}, 
   {O,O,O,O,O, O,O,O,O,O, 0,1}, 
   {O,O,O,O,O, X,X,X,X,X, 0,1}, 
   {O,O,O,O,O, O,O,O,O,O, 0,1}, 
   {O,O,O,O,O, X,X,X,X,X, 0,1}, 
   {O,O,O,O,O, O,O,O,O,O, 0,1}, 
   {O,O,O,O,O, X,X,X,X,X, 0,1}, 
   {O,O,O,O,O, O,O,O,O,O, 0,1}, 
   {O,O,O,O,O, O,O,O,O,O, 0,1}, 
//};

//PROGMEM prog_char pattern_4_0_15[] = {            // 255 = NO LIGHT
  
   {O,O,O,O,O, X,X,X,X,X, 2,1},   //  # 16 ALL ON / 150
   {O,O,O,O,O, X,X,X,X,X, 0,1}   
};


