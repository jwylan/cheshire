

#define X 0
#define O 255


/* DUMMY BLOCK FOR COPYING
PROGMEM prog_char pattern_0[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, O,O, 10,1,   //  # 1 
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1 
};
    
*/
PROGMEM const unsigned char pattern_1_0_0[][12] = {            // 255 = NO LIGHT 0
 
   {O,O,O,O,O,O,O,O, O,O, 2,1},   //  # 1 ALL OFF, THE LAST PATTERN IS ALL ON = STANDARD NOW...
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
//};

//PROGMEM prog_char pattern_1_0_1[] = {            // 255 = NO LIGHT 2
 
   {O,O,O,O,O,O,O,O, O,X, 4,1},   //  # 2 chase from pin 1 to 10 and back /
   {O,O,O,O,O,O,O,O, X,O, 0,1},
   {O,O,O,O,O,O,O,O, O,O, 0,1},
   {O,O,O,O,O,O,O,O, X,O, 0,1},
//};
       
//PROGMEM prog_char pattern_1_0_2[] = {            // 255 = NO LIGHT 6
 
   {O,O,O,O,O,O,O,O, O,X, 2,1},   //  # 3 chase 1 and 5 from pin 1 to 10  /
   {O,O,O,O,O,O,O,O, X,O, 0,1},
//};

//PROGMEM prog_char pattern_1_0_3[] = {            // 255 = NO LIGHT 8
 
   {O,O,O,O,O,O,O,O, O,X, 5,1},   //  # 4 chase 1 and 5 from pin 1 to 10 and then back /
   {O,O,O,O,O,O,O,O, X,O, 0,1},
   {O,O,O,O,O,O,O,O, X,O, 0,1},
   {O,O,O,O,O,O,O,O, O,X, 0,1},
   {O,O,O,O,O,O,O,O, O,O, 0,1},
//};
   
//PROGMEM prog_char pattern_1_0_4[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O,O,O,O, O,X, 2,1},   //  # 5 alternate odd evens  / 13
   {O,O,O,O,O,O,O,O, X,O, 0,1},
//};


//PROGMEM prog_char pattern_1_0_5[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O,O,O,O, X,X, 2,1},   //  # 6 alternate in twos / 15
   {O,O,O,O,O,O,O,O, O,O, 0,1},
//}; 
   
//PROGMEM prog_char pattern_1_0_6[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O,O,O,O, X,X, 2,1},   //  # 7 blink all on all off  / 17
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
//}; 
   
//PROGMEM prog_char pattern_1_0_7[] = {            // 255 = NO LIGHT
   
   {O,O,O,O,O,O,O,O, X,X, 4,1},   //  # 8 all on then recede 1 by one  /    19   
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, O,X, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
//}; 
   
//PROGMEM prog_char pattern_1_0_8[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O,O,O,O, X,X, 6,1},   //  # 9 all on then recede 1 by one  /   23
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, O,X, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1}, 
   {O,O,O,O,O,O,O,O, O,X, 0,1},
   {O,O,O,O,O,O,O,O, X,X, 0,1},
//};  
   
//PROGMEM prog_char pattern_1_0_9[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O,O,O,O, O,O, 16,1},   //  # 9 all on then recede 1 by one  / 29
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
   {O,O,O,O,O,O,O,O, X,O, 0,1},   
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1}, 
   {O,O,O,O,O,O,O,O, O,X, 0,1},
   {O,O,O,O,O,O,O,O, X,X, 0,1},
   {O,O,O,O,O,O,O,O, X,X, 0,1},
   {O,O,O,O,O,O,O,O, X,X, 0,1},
   {O,O,O,O,O,O,O,O, X,X, 0,1},
   {O,O,O,O,O,O,O,O, O,O, 0,1},
   {O,O,O,O,O,O,O,O, O,O, 0,1},
//};   
   
//PROGMEM prog_char pattern_1_0_10[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O,O,O,O, O,O, 17,1},   //  # 10 SPARKLE  / 45
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
   {O,O,O,O,O,O,O,O, X,O, 0,1},   
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, O,X, 0,1},   
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, O,X, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1}, 
   {O,O,O,O,O,O,O,O, O,X, 0,1},
   {O,O,O,O,O,O,O,O, X,X, 0,1},
   {O,O,O,O,O,O,O,O, O,X, 0,1},
   {O,O,O,O,O,O,O,O, X,X, 0,1},
   {O,O,O,O,O,O,O,O, X,O, 0,1},
   {O,O,O,O,O,O,O,O, O,O, 0,1},
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
  
//}; 
   
//PROGMEM prog_char pattern_1_0_11[] = {  
   {O,O,O,O,O,O,O,O, X,X, 23,1},  // # 12 two chases from each end X  62
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1}, 
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1},  
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
   {O,O,O,O,O,O,O,O, O,O, 0,1},   
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, X,X, 0,1},   
   {O,O,O,O,O,O,O,O, X,X, 0,1}, 
   {O,O,O,O,O,O,O,O, O,O, 0,1},
   {O,O,O,O,O,O,O,O, X,X, 0,1},
   {O,O,O,O,O,O,O,O, O,O, 0,1},
   {O,O,O,O,O,O,O,O, O,O, 0,1},
   {O,O,O,O,O,O,O,O, X,X, 0,1},
   {O,O,O,O,O,O,O,O, X,X, 0,1},
   {O,O,O,O,O,O,O,O, O,O, 0,1}, 
//}; 
   
//PROGMEM prog_char pattern_1_0_12[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O,O,O,O, O,X, 3,1},   //  # 13 chase from pin 1 to 10  /  85
   {O,O,O,O,O,O,O,O, X,O, 0,1},
   {O,O,O,O,O,O,O,O, O,O, 0,1},
   {O,O,O,O,O,O,O,O, O,O, 0,1},
   {O,O,O,O,O,O,O,O, X,O, 0,1},
//};
   
//PROGMEM prog_char pattern_1_0_13[] = { 
   {O,O,O,O,O,O,O,O, O,X, 2,1},   //  # 14 HALF ON HALF OFF ALTERNATE / 90
   {O,O,O,O,O,O,O,O, X,X, 0,1},  
//};

//PROGMEM prog_char pattern_1_0_14[] = {  
   {O,O,O,O,O,O,O,O, X,X, 13,1},   //  # 15 WHO KNOWS! / 92
   {O,O,O,O,O,O,O,O, O,X, 0,1}, 
   {O,O,O,O,O,O,O,O, X,X, 0,1}, 
   {O,O,O,O,O,O,O,O, X,O, 0,1}, 
   {O,O,O,O,O,O,O,O, X,X, 0,1}, 
   {O,O,O,O,O,O,O,O, O,O, 0,1}, 
   {O,O,O,O,O,O,O,O, X,X, 0,1}, 
   {O,O,O,O,O,O,O,O, O,O, 0,1}, 
   {O,O,O,O,O,O,O,O, X,X, 0,1}, 
   {O,O,O,O,O,O,O,O, O,O, 0,1}, 
   {O,O,O,O,O,O,O,O, X,X, 0,1}, 
   {O,O,O,O,O,O,O,O, O,O, 0,1}, 
   {O,O,O,O,O,O,O,O, O,O, 0,1}, 
//};

//PROGMEM prog_char pattern_1_0_15[] = {            // 255 = NO LIGHT
 
   {O,O,O,O,O,O,O,O, X,X, 2,1},   //  # 16 ALL ON / 105
   {O,O,O,O,O,O,O,O, X,X, 0,1}   
};


