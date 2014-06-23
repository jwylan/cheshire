

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

 const unsigned char PROGMEM pattern_7_0_0[][12] = {            // 255 = NO LIGHT
 
   {O,O, O,O,O,O,O,O,O,O, 2,1},   //  # 1 ALL OFF, THE LAST PATTERN IS ALL ON = STANDARD NOW... 0
   {O,O, O,O,O,O,O,O,O,O, 0,1},   
//};

//PROGMEM prog_char pattern_7_0_1[] = {            // 255 = NO LIGHT
 
   {O,O, O,O,O,O,O,O,O,X, 14,1},   //  # 2 chase from pin 1 to 10 and back /  2
   {O,O, O,O,O,O,O,O,X,O, 0,1},
   {O,O, O,O,O,O,O,X,O,O, 0,1},
   {O,O, O,O,O,O,X,O,O,O, 0,1},
   {O,O, O,O,O,X,O,O,O,O, 0,1},
   {O,O, O,O,X,O,O,O,O,O, 0,1},
   {O,O, O,X,O,O,O,O,O,O, 0,1},
   {O,O, X,O,O,O,O,O,O,O, 0,1},
   {O,O, O,X,O,O,O,O,O,O, 0,1},
   {O,O, O,O,X,O,O,O,O,O, 0,1},
   {O,O, O,O,O,X,O,O,O,O, 0,1},
   {O,O, O,O,O,O,X,O,O,O, 0,1},
   {O,O, O,O,O,O,O,X,O,O, 0,1},
   {O,O, O,O,O,O,O,O,X,O, 0,1}, 
//};
   
      
//PROGMEM prog_char pattern_7_0_2[] = {            // 255 = NO LIGHT
 
   {O,O, O,O,O,X,O,O,O,X, 5,1},   //  # 3 chase 1 and 5 from pin 1 to 10  / 16
   {O,O, O,O,X,O,O,O,X,O, 0,1},
   {O,O, O,X,O,O,O,X,O,O, 0,1},
   {O,O, X,O,O,O,X,O,O,O, 0,1},
   {O,O, O,O,O,X,O,O,O,O, 0,1},
//};

//PROGMEM prog_char pattern_7_0_3[] = {            // 255 = NO LIGHT
 
   {O,O, O,O,O,X,O,O,O,X, 8,1},   //  # 4 chase 1 and 5 from pin 1 to 10 and then back / 21
   {O,O, O,O,X,O,O,O,X,O, 0,1},
   {O,O, O,X,O,O,O,X,O,O, 0,1},
   {O,O, X,O,O,O,X,O,O,O, 0,1},
   {O,O, O,O,O,X,O,O,O,O, 0,1},
   {O,O, X,O,O,O,X,O,O,O, 0,1},
   {O,O, O,X,O,O,O,X,O,O, 0,1},
   {O,O, O,O,X,O,O,O,X,O, 0,1},
//};
   
//PROGMEM prog_char pattern_7_0_4[] = {            // 255 = NO LIGHT
 
   {O,O, O,X,O,X,O,X,O,X, 2,1},   //  # 5 alternate odd evens  / 29
   {O,O, X,O,X,O,X,O,X,O, 0,1},
//};


//PROGMEM prog_char pattern_7_0_5[] = {            // 255 = NO LIGHT
 
   {O,O, O,O,X,X,O,O,X,X, 2,1},   //  # 6 alternate in twos / 31
   {O,O, X,X,O,O,X,X,O,O, 0,1},   
//}; 
   
//PROGMEM prog_char pattern_7_0_6[] = {            // 255 = NO LIGHT
 
   {O,O, X,X,X,X,X,X,X,X, 2,1},   //  # 7 blink all on all off  / 33
   {O,O, O,O,O,O,O,O,O,O, 0,1},   
//}; 
   
//PROGMEM prog_char pattern_7_0_7[] = {            // 255 = NO LIGHT
 
   {O,O, X,X,X,X,X,X,X,X, 9,1},   //  # 8 all on then recede 1 by one  / 35
   {O,O, O,X,X,X,X,X,X,X, 0,1},   
   {O,O, O,O,X,X,X,X,X,X, 0,1},   
   {O,O, O,O,O,X,X,X,X,X, 0,1},   
   {O,O, O,O,O,O,X,X,X,X, 0,1},   
   {O,O, O,O,O,O,O,X,X,X, 0,1},   
   {O,O, O,O,O,O,O,O,X,X, 0,1},   
   {O,O, O,O,O,O,O,O,O,X, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1},   
//}; 
   
//PROGMEM prog_char pattern_7_0_8[] = {            // 255 = NO LIGHT
 
   {O,O, X,X,X,X,X,X,X,X, 16,1},   //  # 9 all on then recede 1 by one  / 44
   {O,O, O,X,X,X,X,X,X,X, 0,1},   
   {O,O, O,O,X,X,X,X,X,X, 0,1},   
   {O,O, O,O,O,X,X,X,X,X, 0,1},   
   {O,O, O,O,O,O,X,X,X,X, 0,1},   
   {O,O, O,O,O,O,O,X,X,X, 0,1},   
   {O,O, O,O,O,O,O,O,X,X, 0,1},   
   {O,O, O,O,O,O,O,O,O,X, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1}, 
   {O,O, O,O,O,O,O,O,O,X, 0,1},
   {O,O, O,O,O,O,O,O,X,X, 0,1},
   {O,O, O,O,O,O,O,X,X,X, 0,1},
   {O,O, O,O,O,O,X,X,X,X, 0,1},
   {O,O, O,O,O,X,X,X,X,X, 0,1},
   {O,O, O,O,X,X,X,X,X,X, 0,1},
   {O,O, O,X,X,X,X,X,X,X, 0,1},
//};  
   
//PROGMEM prog_char pattern_7_0_9[] = {            // 255 = NO LIGHT
 
   {O,O, X,X,X,X,O,O,O,O, 16,1},   //  # 9 all on then recede 1 by one  / 60
   {O,O, X,X,X,X,X,X,X,X, 0,1},   
   {O,O, O,O,X,X,X,X,O,O, 0,1},   
   {O,O, O,O,O,X,X,X,X,O, 0,1},   
   {O,O, X,X,X,X,X,X,X,X, 0,1},   
   {O,O, O,O,O,O,O,X,X,X, 0,1},   
   {O,O, O,O,O,O,O,O,X,X, 0,1},   
   {O,O, X,X,X,X,X,X,X,X, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1}, 
   {O,O, O,O,O,O,O,O,O,X, 0,1},
   {O,O, X,X,X,X,X,X,X,X, 0,1},
   {O,O, O,O,O,O,O,X,X,X, 0,1},
   {O,O, O,O,O,O,X,X,X,X, 0,1},
   {O,O, X,X,X,X,X,X,X,X, 0,1},
   {O,O, O,O,X,X,X,X,O,O, 0,1},
   {O,O, O,X,X,X,X,O,O,O, 0,1},
//};   
   
//PROGMEM prog_char pattern_7_0_10[] = {            // 255 = NO LIGHT
 
   {O,O, X,O,X,O,O,O,O,O, 44,1},   //  # 10 SPARKLE  /                    76
   {O,O, O,X,O,X,X,O,O,O, 0,1},   
   {O,O, O,O,X,O,X,O,O,O, 0,1},   
   {O,O, O,O,O,X,X,O,X,O, 0,1},   
   {O,O, O,O,O,O,X,O,X,X, 0,1},   
   {O,O, O,X,O,O,O,X,O,X, 0,1},   
   {O,O, O,O,O,O,O,O,X,X, 0,1},   
   {O,O, X,X,O,O,O,O,O,X, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1}, 
   {O,O, O,X,O,O,O,O,O,X, 0,1},
   {O,O, O,O,O,O,O,O,X,X, 0,1},
   {O,O, O,O,O,O,O,X,O,X, 0,1},
   {O,O, O,O,O,O,X,O,X,X, 0,1},
   {O,O, X,O,O,X,X,X,X,O, 0,1},
   {O,O, O,O,X,O,O,O,O,O, 0,1},
   {O,O, O,X,O,X,X,O,O,O, 0,1},   
   {O,O, O,O,X,X,O,X,O,O, 0,1},   
   {O,O, O,O,O,O,X,X,X,O, 0,1},   
   {O,O, O,O,O,O,X,X,X,X, 0,1},   
   {O,O, O,X,O,O,X,X,X,X, 0,1},   
   {O,O, O,O,O,O,O,O,X,X, 0,1},   
   {O,O, O,O,O,O,O,O,O,X, 0,1},   
   {O,O, X,X,X,X,X,X,X,X, 0,1}, 
   {O,O, O,O,O,O,O,O,O,X, 0,1},
   {O,O, X,X,X,X,X,X,X,X, 0,1},
   {O,O, O,X,O,O,O,X,O,X, 0,1},
   {O,O, O,O,O,O,X,X,X,X, 0,1},
   {O,O, X,X,X,X,X,X,X,X, 0,1},
   {O,O, X,X,X,X,X,X,X,X, 0,1},
   {O,O, X,X,X,X,X,X,X,X, 0,1},   
   {O,O, O,O,X,X,X,X,O,O, 0,1},   
   {O,O, O,O,O,X,O,X,X,O, 0,1},   
   {O,O, O,O,O,O,X,X,O,X, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1},   
   {O,O, O,O,O,O,O,O,O,X, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1}, 
   {O,O, O,X,O,O,O,O,O,X, 0,1},
   {O,O, O,O,O,O,O,O,X,X, 0,1},
   {O,O, O,O,O,O,O,X,O,X, 0,1},
   {O,O, O,X,O,O,X,X,X,X, 0,1},
   {O,O, O,O,O,X,O,X,X,O, 0,1},
   {O,O, O,O,O,X,O,X,O,O, 0,1},
   {O,O, O,X,O,X,X,O,X,O, 0,1},
//}; 
   
//PROGMEM prog_char pattern_7_0_11[] = {  
   {O,O, X,X,X,X,X,X,X,X, 23,1},  // # 12 two chases from each end X  120
   {O,O, X,X,X,X,X,X,X,X, 0,1},   
   {O,O, X,X,X,X,X,X,X,X, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1}, 
   {O,O, X,X,X,X,X,X,X,X, 0,1},   
   {O,O, X,X,X,X,X,X,X,X, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1},   
   {O,O, X,X,X,X,X,X,X,X, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1},  
   {O,O, O,O,O,O,O,O,O,O, 0,1},   
   {O,O, O,O,O,O,O,O,O,O, 0,1},   
   {O,O, X,X,X,X,X,X,X,X, 0,1},   
   {O,O, X,X,X,X,X,X,X,X, 0,1},   
   {O,O, X,X,X,X,X,X,X,X, 0,1}, 
   {O,O, O,O,O,O,O,O,O,O, 0,1},
   {O,O, X,X,X,X,X,X,X,X, 0,1},
   {O,O, O,O,O,O,O,O,O,O, 0,1},
   {O,O, O,O,O,O,O,O,O,O, 0,1},
   {O,O, X,X,X,X,X,X,X,X, 0,1},
   {O,O, X,X,X,X,X,X,X,X, 0,1},
   {O,O, O,O,O,O,O,O,O,O, 0,1}, 
//}; 
   
//PROGMEM prog_char pattern_7_0_12[] = {            // 255 = NO LIGHT
 
   {O,O, O,O,O,O,O,O,O,X, 8,1},   //  # 13 chase from pin 1 to 10  / 143
   {O,O, O,O,O,O,O,O,X,O, 0,1},
   {O,O, O,O,O,O,O,X,O,O, 0,1},
   {O,O, O,O,O,O,X,O,O,O, 0,1},
   {O,O, O,O,O,X,O,O,O,O, 0,1},
   {O,O, O,O,X,O,O,O,O,O, 0,1},
   {O,O, O,X,O,O,O,O,O,O, 0,1},
   {O,O, X,O,O,O,O,O,O,O, 0,1},
   
//};
   
//PROGMEM prog_char pattern_7_0_13[] = { 
   {O,O, X,X,X,X,O,O,O,O, 2,1},   //  # 14 HALF ON HALF OFF ALTERNATE / 151
   {O,O, O,O,O,O,X,X,X,X, 0,1}, 
  
//};

//PROGMEM prog_char pattern_7_0_14[] = {  
   {O,O, X,X,X,X,X,X,X,X, 13,1},   //  # 15 WHO KNOWS! / 153
   {O,O, O,X,O,X,O,X,O,X, 0,1}, 
   {O,O, X,X,X,X,X,X,X,X, 0,1}, 
   {O,O, X,O,X,O,X,O,X,O, 0,1}, 
   {O,O, X,X,X,X,X,X,X,X, 0,1}, 
   {O,O, O,O,O,O,O,O,O,O, 0,1}, 
   {O,O, X,X,X,X,X,X,X,X, 0,1}, 
   {O,O, O,O,O,O,O,O,O,O, 0,1}, 
   {O,O, X,X,X,X,X,X,X,X, 0,1}, 
   {O,O, O,O,O,O,O,O,O,O, 0,1}, 
   {O,O, X,X,X,X,X,X,X,X, 0,1}, 
   {O,O, O,O,O,O,O,O,O,O, 0,1}, 
   {O,O, O,O,O,O,O,O,O,O, 0,1}, 
//} ;

//PROGMEM prog_char pattern_7_0_15[] = {            // 255 = NO LIGHT
 
   {O,O, X,X,X,X,X,X,X,X, 2,1},   //  # 16 ALL ON / 166
   {O,O, X,X,X,X,X,X,X,X, 0,1}   
};


