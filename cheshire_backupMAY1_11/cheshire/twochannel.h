

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

PROGMEM prog_char pattern_0[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, O,O, 2,1,   //  # 1 ALL OFF, THE LAST PATTERN IS ALL ON = STANDARD NOW...
   O,O,O,O,O,O,O,O, O,O, 0,1   
};

PROGMEM prog_char pattern_1[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, O,X, 4,1,   //  # 2 chase from pin 1 to 10 and back /
   O,O,O,O,O,O,O,O, X,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, X,O, 0,1
};
       
PROGMEM prog_char pattern_2[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, O,X, 2,1,   //  # 3 chase 1 and 5 from pin 1 to 10  /
   O,O,O,O,O,O,O,O, X,O, 0,1
};

PROGMEM prog_char pattern_3[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, O,X, 5,1,   //  # 4 chase 1 and 5 from pin 1 to 10 and then back /
   O,O,O,O,O,O,O,O, X,O, 0,1,
   O,O,O,O,O,O,O,O, X,O, 0,1,
   O,O,O,O,O,O,O,O, O,X, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1
};
   
PROGMEM prog_char pattern_4[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, O,X, 2,1,   //  # 5 alternate odd evens  /
   O,O,O,O,O,O,O,O, X,O, 0,1
};


PROGMEM prog_char pattern_5[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, X,X, 2,1,   //  # 6 alternate in twos /
   O,O,O,O,O,O,O,O, O,O, 0,1
}; 
   
PROGMEM prog_char pattern_6[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, X,X, 2,1,   //  # 7 blink all on all off  /
   O,O,O,O,O,O,O,O, O,O, 0,1   
}; 
   
PROGMEM prog_char pattern_7[] = {            // 255 = NO LIGHT
   
   O,O,O,O,O,O,O,O, X,X, 4,1,   //  # 8 all on then recede 1 by one  /      
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, O,X, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1   
}; 
   
PROGMEM prog_char pattern_8[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, X,X, 6,1,   //  # 9 all on then recede 1 by one  /   
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, O,X, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1, 
   O,O,O,O,O,O,O,O, O,X, 0,1,
   O,O,O,O,O,O,O,O, X,X, 0,1
};  
   
PROGMEM prog_char pattern_9[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, O,O, 16,1,   //  # 9 all on then recede 1 by one  /
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1,   
   O,O,O,O,O,O,O,O, X,O, 0,1,   
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1, 
   O,O,O,O,O,O,O,O, O,X, 0,1,
   O,O,O,O,O,O,O,O, X,X, 0,1,
   O,O,O,O,O,O,O,O, X,X, 0,1,
   O,O,O,O,O,O,O,O, X,X, 0,1,
   O,O,O,O,O,O,O,O, X,X, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1
};   
   
PROGMEM prog_char pattern_10[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, O,O, 17,1,   //  # 10 SPARKLE  /
   O,O,O,O,O,O,O,O, O,O, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1,   
   O,O,O,O,O,O,O,O, X,O, 0,1,   
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, O,X, 0,1,   
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, O,X, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1, 
   O,O,O,O,O,O,O,O, O,X, 0,1,
   O,O,O,O,O,O,O,O, X,X, 0,1,
   O,O,O,O,O,O,O,O, O,X, 0,1,
   O,O,O,O,O,O,O,O, X,X, 0,1,
   O,O,O,O,O,O,O,O, X,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1,   
  
}; 
   
PROGMEM prog_char pattern_11[] = {  
   O,O,O,O,O,O,O,O, X,X, 10,1,  // # 12 two chases from each end X
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1, 
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1,   
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1,  
   O,O,O,O,O,O,O,O, O,O, 0,1,   
   O,O,O,O,O,O,O,O, O,O, 0,1,   
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, X,X, 0,1,   
   O,O,O,O,O,O,O,O, X,X, 0,1, 
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, X,X, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, X,X, 0,1,
   O,O,O,O,O,O,O,O, X,X, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1 
}; 
   
PROGMEM prog_char pattern_12[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, O,X, 3,1,   //  # 13 chase from pin 1 to 10  /
   O,O,O,O,O,O,O,O, X,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, O,O, 0,1,
   O,O,O,O,O,O,O,O, X,O, 0,1
};
   
PROGMEM prog_char pattern_13[] = { 
   O,O,O,O,O,O,O,O, O,X, 2,1,   //  # 14 HALF ON HALF OFF ALTERNATE /
   O,O,O,O,O,O,O,O, X,X, 0,1  
};

PROGMEM prog_char pattern_14[] = {  
   O,O,O,O,O,O,O,O, X,X, 13,1,   //  # 15 WHO KNOWS! /
   O,O,O,O,O,O,O,O, O,X, 0,1, 
   O,O,O,O,O,O,O,O, X,X, 0,1, 
   O,O,O,O,O,O,O,O, X,O, 0,1, 
   O,O,O,O,O,O,O,O, X,X, 0,1, 
   O,O,O,O,O,O,O,O, O,O, 0,1, 
   O,O,O,O,O,O,O,O, X,X, 0,1, 
   O,O,O,O,O,O,O,O, O,O, 0,1, 
   O,O,O,O,O,O,O,O, X,X, 0,1, 
   O,O,O,O,O,O,O,O, O,O, 0,1, 
   O,O,O,O,O,O,O,O, X,X, 0,1, 
   O,O,O,O,O,O,O,O, O,O, 0,1, 
   O,O,O,O,O,O,O,O, O,O, 0,1 
};

PROGMEM prog_char pattern_15[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O, X,X, 2,1,   //  # 16 ALL ON /
   O,O,O,O,O,O,O,O, X,X, 0,1   
};


