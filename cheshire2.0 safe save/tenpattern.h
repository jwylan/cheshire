const int pattern_max = 16;              // number of patterns

#define X 0
#define O 255


/* DUMMY BLOCK FOR COPYING
PROGMEM prog_char pattern_0[] = {            // 255 = NO LIGHT
 
   O,O, O,O,O,O,O,O,O,O, 10,1,   //  # 1 
   O,O, O,O,O,O,O,O,O,O, 0,0,
   O,O, O,O,O,O,O,O,O,O, 0,0,
   O,O, O,O,O,O,O,O,O,O, 0,0,
   O,O, O,O,O,O,O,O,O,O, 0,0,
   O,O, O,O,O,O,O,O,O,O, 0,0,
   O,O, O,O,O,O,O,O,O,O, 0,0,
   O,O, O,O,O,O,O,O,O,O, 0,0,
   O,O, O,O,O,O,O,O,O,O, 0,0,
   O,O, O,O,O,O,O,O,O,O, 0,0 
};
*/

PROGMEM prog_char pattern_0[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O,O,O, 2,1,   //  # 1 ALL OFF, THE LAST PATTERN IS ALL ON = STANDARD NOW...
   O,O,O,O,O,O,O,O,O,O, 0,0,   
};

PROGMEM prog_char pattern_1[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O,O,X, 18,2,   //  # 2 chase from pin 1 to 10 and back /
   O,O,O,O,O,O,O,O,X,O, 0,0,
   O,O,O,O,O,O,O,X,O,O, 0,0,
   O,O,O,O,O,O,X,O,O,O, 0,0,
   O,O,O,O,O,X,O,O,O,O, 0,0,
   O,O,O,O,X,O,O,O,O,O, 0,0,
   O,O,O,X,O,O,O,O,O,O, 0,0,
   O,O,X,O,O,O,O,O,O,O, 0,0,
   O,X,O,O,O,O,O,O,O,O, 0,0,
   X,O,O,O,O,O,O,O,O,O, 0,0,
   O,X,O,O,O,O,O,O,O,O, 0,0,
   O,O,X,O,O,O,O,O,O,O, 0,0,
   O,O,O,X,O,O,O,O,O,O, 0,0,
   O,O,O,O,X,O,O,O,O,O, 0,0,
   O,O,O,O,O,X,O,O,O,O, 0,0,
   O,O,O,O,O,O,X,O,O,O, 0,0,
   O,O,O,O,O,O,O,X,O,O, 0,0,
   O,O,O,O,O,O,O,O,X,O, 0,0 
};
   
      
PROGMEM prog_char pattern_2[] = {            // 255 = NO LIGHT
 
   X,O,O,O,O,X,O,O,O,X, 5,3,   //  # 3 chase 1 and 5 from pin 1 to 10  /
   O,O,O,O,X,O,O,O,X,O, 0,0,
   O,O,O,X,O,O,O,X,O,O, 0,0,
   O,O,X,O,O,O,X,O,O,O, 0,0,
   O,X,O,O,O,X,O,O,O,O, 0,0
};

PROGMEM prog_char pattern_3[] = {            // 255 = NO LIGHT
 
   O,O, O,O,O,X,O,O,O,X, 8,4,   //  # 4 chase 1 and 5 from pin 1 to 10 and then back /
   O,O, O,O,X,O,O,O,X,O, 0,0,
   O,O, O,X,O,O,O,X,O,O, 0,0,
   O,O, X,O,O,O,X,O,O,O, 0,0,
   O,O, O,O,O,X,O,O,O,O, 0,0,
   O,O, X,O,O,O,X,O,O,O, 0,0,
   O,O, O,X,O,O,O,X,O,O, 0,0,
   O,O, O,O,X,O,O,O,X,O, 0,0
};
   
PROGMEM prog_char pattern_4[] = {            // 255 = NO LIGHT
 
   O,O, O,X,O,X,O,X,O,X, 2,5,   //  # 5 alternate odd evens  /
   O,O, X,O,X,O,X,O,X,O, 0,0
};


PROGMEM prog_char pattern_5[] = {            // 255 = NO LIGHT
 
   O,O, O,O,X,X,O,O,X,X, 2,6,   //  # 6 alternate in twos /
   O,O, X,X,O,O,X,X,O,O, 0,0   
}; 
   
PROGMEM prog_char pattern_6[] = {            // 255 = NO LIGHT
 
   O,O, X,X,X,X,X,X,X,X, 2,7,   //  # 7 blink all on all off  /
   O,O, O,O,O,O,O,O,O,O, 0,0   
}; 
   
PROGMEM prog_char pattern_7[] = {            // 255 = NO LIGHT
 
   O,O, X,X,X,X,X,X,X,X, 9,8,   //  # 8 all on then recede 1 by one  /
   O,O, O,X,X,X,X,X,X,X, 0,0,   
   O,O, O,O,X,X,X,X,X,X, 0,0,   
   O,O, O,O,O,X,X,X,X,X, 0,0,   
   O,O, O,O,O,O,X,X,X,X, 0,0,   
   O,O, O,O,O,O,O,X,X,X, 0,0,   
   O,O, O,O,O,O,O,O,X,X, 0,0,   
   O,O, O,O,O,O,O,O,O,X, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0   
}; 
   
PROGMEM prog_char pattern_8[] = {            // 255 = NO LIGHT
 
   O,O, X,X,X,X,X,X,X,X, 16,9,   //  # 9 all on then recede 1 by one  /
   O,O, O,X,X,X,X,X,X,X, 0,0,   
   O,O, O,O,X,X,X,X,X,X, 0,0,   
   O,O, O,O,O,X,X,X,X,X, 0,0,   
   O,O, O,O,O,O,X,X,X,X, 0,0,   
   O,O, O,O,O,O,O,X,X,X, 0,0,   
   O,O, O,O,O,O,O,O,X,X, 0,0,   
   O,O, O,O,O,O,O,O,O,X, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0, 
   O,O, O,O,O,O,O,O,O,X, 0,0,
   O,O, O,O,O,O,O,O,X,X, 0,0,
   O,O, O,O,O,O,O,X,X,X, 0,0,
   O,O, O,O,O,O,X,X,X,X, 0,0,
   O,O, O,O,O,X,X,X,X,X, 0,0,
   O,O, O,O,X,X,X,X,X,X, 0,0,
   O,O, O,X,X,X,X,X,X,X, 0,0
};  
   
PROGMEM prog_char pattern_9[] = {            // 255 = NO LIGHT
 
   O,O, X,X,X,X,O,O,O,O, 16,10,   //  # 9 all on then recede 1 by one  /
   O,O, X,X,X,X,X,X,X,X, 0,0,   
   O,O, O,O,X,X,X,X,O,O, 0,0,   
   O,O, O,O,O,X,X,X,X,O, 0,0,   
   O,O, X,X,X,X,X,X,X,X, 0,0,   
   O,O, O,O,O,O,O,X,X,X, 0,0,   
   O,O, O,O,O,O,O,O,X,X, 0,0,   
   O,O, X,X,X,X,X,X,X,X, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0, 
   O,O, O,O,O,O,O,O,O,X, 0,0,
   O,O, X,X,X,X,X,X,X,X, 0,0,
   O,O, O,O,O,O,O,X,X,X, 0,0,
   O,O, O,O,O,O,X,X,X,X, 0,0,
   O,O, X,X,X,X,X,X,X,X, 0,0,
   O,O, O,O,X,X,X,X,O,O, 0,0,
   O,O, O,X,X,X,X,O,O,O, 0,0
};   
   
PROGMEM prog_char pattern_10[] = {            // 255 = NO LIGHT
 
   O,O, X,O,X,O,O,O,O,O, 44,11,   //  # 10 SPARKLE  /
   O,O, O,X,O,X,X,O,O,O, 0,0,   
   O,O, O,O,X,O,X,O,O,O, 0,0,   
   O,O, O,O,O,X,X,O,X,O, 0,0,   
   O,O, O,O,O,O,X,O,X,X, 0,0,   
   O,O, O,X,O,O,O,X,O,X, 0,0,   
   O,O, O,O,O,O,O,O,X,X, 0,0,   
   O,O, X,X,O,O,O,O,O,X, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0, 
   O,O, O,X,O,O,O,O,O,X, 0,0,
   O,O, O,O,O,O,O,O,X,X, 0,0,
   O,O, O,O,O,O,O,X,O,X, 0,0,
   O,O, O,O,O,O,X,O,X,X, 0,0,
   O,O, X,O,O,X,X,X,X,O, 0,0,
   O,O, O,O,X,O,O,O,O,O, 0,0,
   O,O, O,X,O,X,X,O,O,O, 0,0,   
   O,O, O,O,X,X,O,X,O,O, 0,0,   
   O,O, O,O,O,O,X,X,X,O, 0,0,   
   O,O, O,O,O,O,X,X,X,X, 0,0,   
   O,O, O,X,O,O,X,X,X,X, 0,0,   
   O,O, O,O,O,O,O,O,X,X, 0,0,   
   O,O, O,O,O,O,O,O,O,X, 0,0,   
   O,O, X,X,X,X,X,X,X,X, 0,0, 
   O,O, O,O,O,O,O,O,O,X, 0,0,
   O,O, X,X,X,X,X,X,X,X, 0,0,
   O,O, O,X,O,O,O,X,O,X, 0,0,
   O,O, O,O,O,O,X,X,X,X, 0,0,
   O,O, X,X,X,X,X,X,X,X, 0,0,
   O,O, X,X,X,X,X,X,X,X, 0,0,
   O,O, X,X,X,X,X,X,X,X, 0,0,   
   O,O, O,O,X,X,X,X,O,O, 0,0,   
   O,O, O,O,O,X,O,X,X,O, 0,0,   
   O,O, O,O,O,O,X,X,O,X, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0,   
   O,O, O,O,O,O,O,O,O,X, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0, 
   O,O, O,X,O,O,O,O,O,X, 0,0,
   O,O, O,O,O,O,O,O,X,X, 0,0,
   O,O, O,O,O,O,O,X,O,X, 0,0,
   O,O, O,X,O,O,X,X,X,X, 0,0,
   O,O, O,O,O,X,O,X,X,O, 0,0,
   O,O, O,O,O,X,O,X,O,O, 0,0,
   O,O, O,X,O,X,X,O,X,O, 0,0
}; 
   
PROGMEM prog_char pattern_11[] = {  
   O,O, X,X,X,X,X,X,X,X, 10,12,  // # 12 two chases from each end X
   O,O, X,X,X,X,X,X,X,X, 0,0,   
   O,O, X,X,X,X,X,X,X,X, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0, 
   O,O, X,X,X,X,X,X,X,X, 0,0,   
   O,O, X,X,X,X,X,X,X,X, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0,   
   O,O, X,X,X,X,X,X,X,X, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0,  
   O,O, O,O,O,O,O,O,O,O, 0,0,   
   O,O, O,O,O,O,O,O,O,O, 0,0,   
   O,O, X,X,X,X,X,X,X,X, 0,0,   
   O,O, X,X,X,X,X,X,X,X, 0,0,   
   O,O, X,X,X,X,X,X,X,X, 0,0, 
   O,O, O,O,O,O,O,O,O,O, 0,0,
   O,O, X,X,X,X,X,X,X,X, 0,0,
   O,O, O,O,O,O,O,O,O,O, 0,0,
   O,O, O,O,O,O,O,O,O,O, 0,0,
   O,O, X,X,X,X,X,X,X,X, 0,0,
   O,O, X,X,X,X,X,X,X,X, 0,0,
   O,O, O,O,O,O,O,O,O,O, 0,0 
}; 
   
PROGMEM prog_char pattern_12[] = {            // 255 = NO LIGHT
 
   O,O, O,O,O,O,O,O,O,X, 8,13,   //  # 13 chase from pin 1 to 10  /
   O,O, O,O,O,O,O,O,X,O, 0,0,
   O,O, O,O,O,O,O,X,O,O, 0,0,
   O,O, O,O,O,O,X,O,O,O, 0,0,
   O,O, O,O,O,X,O,O,O,O, 0,0,
   O,O, O,O,X,O,O,O,O,O, 0,0,
   O,O, O,X,O,O,O,O,O,O, 0,0,
   O,O, X,O,O,O,O,O,O,O, 0,0
   
};
   
PROGMEM prog_char pattern_13[] = { 
   O,O, X,X,X,X,O,O,O,O, 2,14,   //  # 14 HALF ON HALF OFF ALTERNATE /
   O,O, O,O,O,O,X,X,X,X, 0,0 
  
};

PROGMEM prog_char pattern_14[] = {  
   O,O, X,X,X,X,X,X,X,X, 13,15,   //  # 15 WHO KNOWS! /
   O,O, O,X,O,X,O,X,O,X, 0,0, 
   O,O, X,X,X,X,X,X,X,X, 0,0, 
   O,O, X,O,X,O,X,O,X,O, 0,0, 
   O,O, X,X,X,X,X,X,X,X, 0,0, 
   O,O, O,O,O,O,O,O,O,O, 0,0, 
   O,O, X,X,X,X,X,X,X,X, 0,0, 
   O,O, O,O,O,O,O,O,O,O, 0,0, 
   O,O, X,X,X,X,X,X,X,X, 0,0, 
   O,O, O,O,O,O,O,O,O,O, 0,0, 
   O,O, X,X,X,X,X,X,X,X, 0,0, 
   O,O, O,O,O,O,O,O,O,O, 0,0, 
   O,O, O,O,O,O,O,O,O,O, 0,0 
} ;

PROGMEM prog_char pattern_15[] = {            // 255 = NO LIGHT
 
   O,O, X,X,X,X,X,X,X,X, 2,16,   //  # 16 ALL ON /
   O,O, X,X,X,X,X,X,X,X, 0,0   
};


