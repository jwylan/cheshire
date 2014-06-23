const int pattern_max = 16;              // number of patterns

#define X 0
#define O 255


/* DUMMY BLOCK FOR COPYING
PROGMEM prog_char pattern_0[] = {            // 255 = NO LIGHT
 
   O,O, O,O,O,O,O,O,O,O, 10,1,   //  # 1 
   O,O, O,O,O,O,O,O,O,O, 0,1,
   O,O, O,O,O,O,O,O,O,O, 0,1,
   O,O, O,O,O,O,O,O,O,O, 0,1,
   O,O, O,O,O,O,O,O,O,O, 0,1,
   O,O, O,O,O,O,O,O,O,O, 0,1,
   O,O, O,O,O,O,O,O,O,O, 0,1,
   O,O, O,O,O,O,O,O,O,O, 0,1,
   O,O, O,O,O,O,O,O,O,O, 0,1,
   O,O, O,O,O,O,O,O,O,O, 0,1 
};
*/

PROGMEM prog_char pattern_0[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O,O,O, 2,1,   //  # 1 ALL OFF, THE LAST PATTERN IS ALL ON = STANDARD NOW...
   O,O,O,O,O,O,O,O,O,O, 0,1   
};

PROGMEM prog_char pattern_1[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O,O,X, 18,1,   //  # 2 chase from pin 1 to 10 and back /
   O,O,O,O,O,O,O,O,X,O, 0,1,
   O,O,O,O,O,O,O,X,O,O, 0,1,
   O,O,O,O,O,O,X,O,O,O, 0,1,
   O,O,O,O,O,X,O,O,O,O, 0,1,
   O,O,O,O,X,O,O,O,O,O, 0,1,
   O,O,O,X,O,O,O,O,O,O, 0,1,
   O,O,X,O,O,O,O,O,O,O, 0,1,
   O,X,O,O,O,O,O,O,O,O, 0,1,
   X,O,O,O,O,O,O,O,O,O, 0,1,
   O,X,O,O,O,O,O,O,O,O, 0,1,
   O,O,X,O,O,O,O,O,O,O, 0,1,
   O,O,O,X,O,O,O,O,O,O, 0,1,
   O,O,O,O,X,O,O,O,O,O, 0,1,
   O,O,O,O,O,X,O,O,O,O, 0,1,
   O,O,O,O,O,O,X,O,O,O, 0,1,
   O,O,O,O,O,O,O,X,O,O, 0,1,
   O,O,O,O,O,O,O,O,X,O, 0,1 
};
         
PROGMEM prog_char pattern_2[] = {            // 255 = NO LIGHT
 
   X,O,O,O,O,X,O,O,O,X, 5,1,   //  # 3 chase 1 and 5 from pin 1 to 10  /
   O,O,O,O,X,O,O,O,X,O, 0,1,
   O,O,O,X,O,O,O,X,O,O, 0,1,
   O,O,X,O,O,O,X,O,O,O, 0,1,
   O,X,O,O,O,X,O,O,O,O, 0,1
};

PROGMEM prog_char pattern_3[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,X,O,O,O,X, 10,1,   //  # 4 chase 1 and 5 from pin 1 to 10 and then back /
   O,O,O,O,X,O,O,O,X,O, 0,1,
   O,O,O,X,O,O,O,X,O,O, 0,1,
   O,O,X,O,O,O,X,O,O,O, 0,1,
   O,X,O,O,O,X,O,O,O,O, 0,1,
   X,O,O,O,X,O,O,O,O,O, 0,1,
   O,X,O,O,O,X,O,O,O,O, 0,1,
   O,O,X,O,O,O,X,O,O,O, 0,1,
   O,O,O,X,O,O,O,X,O,O, 0,1,
   O,O,O,O,X,O,O,O,X,O, 0,1
};
   
PROGMEM prog_char pattern_4[] = {            // 255 = NO LIGHT
 
   O,X,O,X,O,X,O,X,O,X, 2,1,   //  # 5 alternate odd evens  /
   X,O,X,O,X,O,X,O,X,O, 0,1
};

PROGMEM prog_char pattern_5[] = {            // 255 = NO LIGHT
 
   X,X,O,O,X,X,O,O,X,X, 2,1,   //  # 6 alternate in twos /
   O,O,X,X,O,O,X,X,O,O, 0,1   
}; 
   
PROGMEM prog_char pattern_6[] = {            // 255 = NO LIGHT
 
   X,X,X,X,X,X,X,X,X,X, 2,1,   //  # 7 blink all on all off  /
   O,O,O,O,O,O,O,O,O,O, 0,1   
}; 
   
PROGMEM prog_char pattern_7[] = {            // 255 = NO LIGHT
 
   X,X,X,X,X,X,X,X,X,X, 11,1,   //  # 8 all on then recede 1 by one  /
   O,X,X,X,X,X,X,X,X,X, 0,1,
   O,O,X,X,X,X,X,X,X,X, 0,1,
   O,O,O,X,X,X,X,X,X,X, 0,1,   
   O,O,O,O,X,X,X,X,X,X, 0,1,   
   O,O,O,O,O,X,X,X,X,X, 0,1,   
   O,O,O,O,O,O,X,X,X,X, 0,1,   
   O,O,O,O,O,O,O,X,X,X, 0,1,   
   O,O,O,O,O,O,O,O,X,X, 0,1,   
   O,O,O,O,O,O,O,O,O,X, 0,1,   
   O,O,O,O,O,O,O,O,O,O, 0,1   
}; 
   
PROGMEM prog_char pattern_8[] = {            // 255 = NO LIGHT
 
   X,X,X,X,X,X,X,X,X,X, 21,1,   //  # 9 all on then recede 1 by one  /
   O,X,X,X,X,X,X,X,X,X, 0,1,
   O,O,X,X,X,X,X,X,X,X, 0,1,
   O,O,O,X,X,X,X,X,X,X, 0,1,   
   O,O,O,O,X,X,X,X,X,X, 0,1,   
   O,O,O,O,O,X,X,X,X,X, 0,1,   
   O,O,O,O,O,O,X,X,X,X, 0,1,   
   O,O,O,O,O,O,O,X,X,X, 0,1,   
   O,O,O,O,O,O,O,O,X,X, 0,1,   
   O,O,O,O,O,O,O,O,O,X, 0,1,   
   O,O,O,O,O,O,O,O,O,O, 0,1, 
   O,O,O,O,O,O,O,O,O,X, 0,1,
   O,O,O,O,O,O,O,O,X,X, 0,1,
   O,O,O,O,O,O,O,X,X,X, 0,1,
   O,O,O,O,O,O,X,X,X,X, 0,1,
   O,O,O,O,O,X,X,X,X,X, 0,1,
   O,O,O,O,X,X,X,X,X,X, 0,1,
   O,O,O,X,X,X,X,X,X,X, 0,1,
   O,O,X,X,X,X,X,X,X,X, 0,1,
   O,X,X,X,X,X,X,X,X,X, 0,1,
   X,X,X,X,X,X,X,X,X,X, 0,1
};  
   
PROGMEM prog_char pattern_9[] = {            // 255 = NO LIGHT
 
   X,X,X,X,X,X,O,O,O,O, 16,1,   //  # 9 all on then recede 1 by one  /
   O,O,X,X,X,X,X,X,X,X, 0,1,   
   O,O,O,X,X,X,X,X,O,O, 0,1,   
   O,O,O,O,O,X,X,X,X,O, 0,1,   
   X,X,X,X,X,X,X,X,X,X, 0,1,   
   O,X,O,O,O,O,O,X,X,X, 0,1,   
   O,O,X,O,O,O,O,O,X,X, 0,1,   
   X,X,X,X,X,X,X,X,X,X, 0,1,   
   O,O,O,O,O,O,O,O,O,O, 0,1, 
   O,O,O,O,O,O,O,O,O,X, 0,1,
   X,X,X,X,X,X,X,X,X,X, 0,1,
   O,O,O,X,O,O,O,X,X,X, 0,1,
   O,O,X,O,O,O,X,X,X,X, 0,1,
   X,X,X,X,X,X,X,X,X,X, 0,1,
   O,O,O,O,X,X,X,X,O,O, 0,1,
   X,O,O,X,X,X,X,O,O,X, 0,1
};   
   
PROGMEM prog_char pattern_10[] = {            // 255 = NO LIGHT
 
   O,O,X,O,X,O,O,O,O,O, 44,1,   //  # 10 SPARKLE  /
   X,O,O,X,O,X,X,O,O,O, 0,1,   
   O,O,O,O,X,O,X,O,O,O, 0,1,   
   O,O,O,O,O,X,X,O,X,O, 0,1,   
   O,O,O,O,O,O,X,O,X,X, 0,1,   
   O,O,O,X,O,X,O,X,O,X, 0,1,   
   O,O,O,O,O,O,O,O,X,X, 0,1,   
   O,O,X,X,O,O,O,O,O,X, 0,1,   
   O,X,O,O,O,O,O,O,O,O, 0,1, 
   O,O,O,X,O,O,X,O,O,X, 0,1,
   O,O,O,O,O,O,O,O,X,X, 0,1,
   X,O,O,O,O,O,O,X,O,X, 0,1,
   O,X,O,O,O,O,X,O,X,X, 0,1,
   O,O,X,O,O,X,X,X,X,O, 0,1,
   O,O,O,O,X,O,O,O,O,O, 0,1,
   O,O,X,X,O,X,X,O,O,O, 0,1,   
   O,X,O,O,X,X,O,X,O,O, 0,1,   
   O,O,X,O,O,O,X,X,X,O, 0,1,   
   O,O,O,O,O,O,X,X,O,X, 0,1,   
   O,O,O,X,O,O,X,X,X,X, 0,1,   
   O,X,O,O,O,O,O,O,X,X, 0,1,   
   O,O,O,O,O,O,O,O,O,X, 0,1,   
   X,O,X,X,X,X,X,X,X,X, 0,1, 
   O,O,O,O,O,O,O,O,O,X, 0,1,
   X,O,X,X,X,X,X,X,X,X, 0,1,
   O,O,O,X,O,O,O,X,O,X, 0,1,
   O,O,O,O,O,O,X,X,X,X, 0,1,
   X,O,X,X,X,X,X,X,X,X, 0,1,
   X,O,X,X,X,X,X,O,X,X, 0,1,
   O,O,X,X,X,O,X,X,X,X, 0,1,   
   X,O,O,O,X,X,X,X,O,O, 0,1,   
   O,O,O,O,O,X,O,X,X,O, 0,1,   
   O,O,O,O,O,O,X,X,O,X, 0,1,   
   O,O,X,O,O,O,O,O,O,O, 0,1,   
   O,O,O,O,O,O,O,O,O,O, 0,1,   
   O,O,O,O,O,X,O,O,O,X, 0,1,   
   X,O,O,O,O,O,O,O,O,O, 0,1, 
   O,O,O,X,O,O,O,O,O,X, 0,1,
   O,O,O,O,O,O,O,O,X,X, 0,1,
   X,O,O,O,O,O,O,X,O,X, 0,1,
   O,O,O,X,O,O,X,X,X,X, 0,1,
   O,X,O,O,O,X,O,X,X,O, 0,1,
   O,X,O,O,O,X,O,X,O,O, 0,1,
   O,O,O,X,O,X,X,O,X,O, 0,1
}; 
   
PROGMEM prog_char pattern_11[] = {  
   X,X,X,X,X,X,X,X,X,X, 10,1,  // # 12 two chases from each end X
   X,X,X,X,X,X,X,X,X,X, 0,1,   
   X,X,X,X,X,X,X,X,X,X, 0,1,   
   O,O,O,O,O,O,O,O,O,O, 0,1, 
   X,X,X,X,X,X,X,X,X,X, 0,1,   
   X,X,X,X,X,X,X,X,X,X, 0,1,   
   O,O,O,O,O,O,O,O,O,O, 0,1,   
   O,O,O,O,O,O,O,O,O,O, 0,1,   
   X,X,X,X,X,X,X,X,X,X, 0,1,   
   O,O,O,O,O,O,O,O,O,O, 0,1,   
   O,O,O,O,O,O,O,O,O,O, 0,1,  
   O,O,O,O,O,O,O,O,O,O, 0,1,   
   O,O,O,O,O,O,O,O,O,O, 0,1,   
   X,X,X,X,X,X,X,X,X,X, 0,1,   
   X,X,X,X,X,X,X,X,X,X, 0,1,   
   X,X,X,X,X,X,X,X,X,X, 0,1, 
   O,O,O,O,O,O,O,O,O,O, 0,1,
   X,X,X,X,X,X,X,X,X,X, 0,1,
   O,O,O,O,O,O,O,O,O,O, 0,1,
   O,O,O,O,O,O,O,O,O,O, 0,1,
   X,X,X,X,X,X,X,X,X,X, 0,1,
   X,X,X,X,X,X,X,X,X,X, 0,1,
   O,O,O,O,O,O,O,O,O,O, 0,1 
}; 
   
PROGMEM prog_char pattern_12[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O,O,X, 10,1,   //  # 13 chase from pin 1 to 10  /
   O,O,O,O,O,O,O,O,X,O, 0,1,
   O,O,O,O,O,O,O,X,O,O, 0,1,
   O,O,O,O,O,O,X,O,O,O, 0,1,
   O,O,O,O,O,X,O,O,O,O, 0,1,
   O,O,O,O,X,O,O,O,O,O, 0,1,
   O,O,O,X,O,O,O,O,O,O, 0,1,
   O,O,X,O,O,O,O,O,O,O, 0,1,
   O,X,O,O,O,O,O,O,O,O, 0,1,
   X,O,O,O,O,O,O,O,O,O, 0,1
};
   
PROGMEM prog_char pattern_13[] = { 
   X,X,X,X,X,O,O,O,O,O, 2,1,   //  # 14 HALF ON HALF OFF ALTERNATE /
   O,O,O,O,O,X,X,X,X,X, 0,1 
};

PROGMEM prog_char pattern_14[] = {  
   X,X,X,X,X,X,X,X,X,X, 13,1,   //  # 15 WHO KNOWS! /
   O,X,O,X,O,X,O,X,O,X, 0,1, 
   X,X,X,X,X,X,X,X,X,X, 0,1, 
   X,O,X,O,X,O,X,O,X,O, 0,1, 
   X,X,X,X,X,X,X,X,X,X, 0,1, 
   O,O,X,O,O,O,O,X,O,O, 0,1, 
   X,X,X,X,X,X,X,X,X,X, 0,1, 
   O,O,O,O,O,X,O,O,O,O, 0,1, 
   X,X,X,X,X,X,X,X,X,X, 0,1, 
   O,O,O,O,O,O,O,O,O,O, 0,1, 
   X,X,X,X,X,X,X,X,X,X, 0,1, 
   O,O,O,O,O,O,O,O,O,O, 0,1, 
   O,O,O,O,O,O,O,O,O,O, 0,1 
} ;

PROGMEM prog_char pattern_15[] = {            // 255 = NO LIGHT
 
   X,X,X,X,X,X,X,X,X,X, 2,1,   //  # 16 ALL ON /
   X,X,X,X,X,X,X,X,X,X, 0,1   
};


