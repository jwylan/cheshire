

#define X 0
#define O 255

#define QUEEN 0
#define MONARCH 1
#define FLAMBEAU 2
#define EMPEROR 3
#define APOLLO 4
#define MORPHO 5


/* DUMMY BLOCK FOR COPYING
PROGMEM prog_char pattern_0[] = {            // 255 = NO LIGHT
 
   O,O,O,O,O,O,O,O,O,O,  10,1,   //  # 1 chase from pin 1 to 10  /
   O,O,O,O,O,O,O,O,O,O,  0,0,
   O,O,O,O,O,O,O,O,O,O,  0,0,
   O,O,O,O,O,O,O,O,O,O,  0,0,
   O,O,O,O,O,O,O,O,O,O,  0,0,
   O,O,O,O,O,O,O,O,O,O,  0,0,
   O,O,O,O,O,O,O,O,O,O,  0,0,
   O,O,O,O,O,O,O,O,O,O,  0,0,
   O,O,O,O,O,O,O,O,O,O,  0,0,
   O,O,O,O,O,O,O,O,O,O,  0,0 
};
*/

//PROGMEM prog_char pattern_0[] = {            // QUEEN
PROGMEM const unsigned char pattern_6_0_0[][12] = { 
 
   {O,O,O,   X,X,O,O,O,X,O, 72,27},   //  0
   {O,O,O,   X,O,X,O,O,X,O, 0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,O,O,X,O,X, 0,27},
   {O,O,O,   X,X,O,O,O,X,O, 0,27},
   {O,O,O,   X,O,X,O,O,X,O, 0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,O,O,X,O,X, 0,27},  // 7
   
   {O,O,O,   X,X,O,X,O,X,O, 0,27},   
   {O,O,O,   O,X,O,X,O,X,X, 0,27},
   {O,O,O,   X,X,O,X,O,X,O, 0,27},//10
   {O,O,O,   O,X,O,X,O,X,X, 0,27},
   {O,O,O,   X,O,X,O,X,O,O, 0,27},
   {O,O,O,   O,O,X,O,X,O,X, 0,27},
   {O,O,O,   X,O,X,O,X,O,O, 0,27},
   {O,O,O,   O,O,X,O,X,O,X, 0,27},  //15
   
   {O,O,O,   X,X,O,O,O,X,O, 0,27},   
   {O,O,O,   X,O,X,O,O,X,O, 0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,O,O,X,O,X, 0,27},
   {O,O,O,   X,X,O,O,O,X,O, 0,27},//20
   {O,O,O,   X,O,X,O,O,X,O, 0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,O,O,X,O,X, 0,27},  //23
   
   {O,O,O,   X,X,X,O,O,X,X, 0,27},   
   {O,O,O,   O,X,X,O,O,O,O,  0,27},
   {O,O,O,   X,O,O,X,O,O,O,   0,27},
   {O,O,O,   O,O,O,X,X,O,O, 0,27},
   {O,O,O,   X,X,X,O,O,X,X, 0,27},
   {O,O,O,   O,X,X,O,O,O,O,  0,27},
   {O,O,O,   X,O,O,X,O,O,O,   0,27},//30
   {O,O,O,   O,O,O,X,X,O,O, 0,27},  //31
   
   {O,O,O,   X,X,O,O,O,X,O, 0,27},   
   {O,O,O,   X,O,X,O,O,X,O, 0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,O,O,X,O,X, 0,27},
   {O,O,O,   X,X,O,O,O,X,O, 0,27},
   {O,O,O,   X,O,X,O,O,X,O, 0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,O,X,O,X,O, 0,27},  //39...........
   
   {O,O,O,   X,X,O,X,O,X,O, 0,27},   
   {O,O,O,   X,X,O,X,O,X,O, 0,27},
   {O,O,O,   O,O,X,O,X,O,X, 0,27},
   {O,O,O,   O,O,X,O,X,O,X, 0,27},
   {O,O,O,   X,X,O,X,O,X,O, 0,27},
   {O,O,O,   X,O,X,O,O,O,O,   0,27},
   {O,O,O,   O,X,O,X,O,O,O,  0,27},
   {O,O,O,   O,X,X,X,X,O,X, 0,27},  //47.
   
   {O,O,O,   X,X,O,O,O,X,O, 0,27},   
   {O,O,O,   X,O,X,O,O,X,O, 0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},//50.
   {O,O,O,   O,O,O,O,X,O,X, 0,27},
   {O,O,O,   X,X,O,O,O,X,O, 0,27},
   {O,O,O,   X,O,X,O,O,X,O, 0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,O,O,X,O,X, 0,27},  //55
   
   {O,O,O,   X,O,O,O,O,X,X, 0,27},   
   {O,O,O,   O,X,X,X,X,O,X, 0,27},
   {O,O,O,   X,O,O,O,O,X,O, 0,27},
   {O,O,O,   O,X,X,X,X,O,O, 0,27},
   {O,O,O,   X,O,O,O,O,X,X, 0,27},//60.
   {O,O,O,   O,X,X,X,X,O,X, 0,27},
   {O,O,O,   X,O,O,O,O,X,O, 0,27},
   {O,O,O,   O,X,X,X,X,O,O, 0,27},  //63.
   
   {O,O,O,   X,O,X,X,O,X,X, 0,27},   
   {O,O,O,   O,O,O,O,O,X,O, 0,27},
   {O,O,O,   X,O,X,X,O,O,O,  0,27},
   {O,O,O,   O,X,O,O,X,O,O, 0,27},
   {O,O,O,   X,O,O,O,O,X,X, 0,27},
   {O,O,O,   O,X,O,O,O,O,O,   0,27},
   {O,O,O,   X,O,O,O,O,O,O,  0,27},//70.
   {O,O,O,   O,X,X,X,X,O,O, 0,27},  //71.
   

//};  // QUEEN 0

//PROGMEM prog_char pattern_1[] = {            // MONARCH

   {O,O,O,   X,X,O,X,O,X,X, 69,27},   //72.
   {O,O,O,   X,O,X,O,O,O,O,   0,27},
   {O,O,O,   X,X,O,X,O,X,X, 0,27},
   {O,O,O,   X,O,X,O,O,O,O,   0,27},
   {O,O,O,   X,X,O,X,O,X,X, 0,27},
   {O,O,O,   X,O,X,O,O,O,O,   0,27}, //77
   
   {O,O,O,   X,X,X,X,X,O,X, 0,27},
   {O,O,O,   O,O,O,O,O,X,O, 0,27},  //79
   {O,O,O,   X,X,X,X,X,O,X, 0,27},   
   {O,O,O,   O,O,O,O,O,X,O, 0,27},
   {O,O,O,   X,X,X,X,X,O,X, 0,27},
   {O,O,O,   O,O,O,O,O,X,O, 0,27},
   {O,O,O,   X,X,X,X,X,O,X, 0,27},
   {O,O,O,   O,O,O,O,O,X,O, 0,27},
   {O,O,O,   X,X,X,X,X,O,X, 0,27},
   {O,O,O,   O,O,O,O,O,X,O, 0,27},  //87
   {O,O,O,   X,X,X,X,X,O,X, 0,27},   
   {O,O,O,   O,O,O,O,O,X,O, 0,27},  //89.
   
   {O,O,O,   X,O,O,O,O,X,O, 0,27},//90
   {O,O,O,   O,O,O,O,O,X,X, 0,27},
   {O,O,O,   X,O,O,O,O,X,O, 0,27},
   {O,O,O,   O,O,O,O,O,X,X, 0,27},
   {O,O,O,   X,O,O,O,O,X,O, 0,27},
   {O,O,O,   O,O,O,O,O,X,X, 0,27},  //95.
   
   {O,O,O,   X,X,X,X,O,X,O, 0,27},   
   {O,O,O,   X,X,O,X,O,O,O,   0,27},
   {O,O,O,   O,X,X,X,O,X,X, 0,27},
   {O,O,O,   X,X,O,X,X,O,O, 0,27},
   {O,O,O,   X,X,X,X,O,X,X, 0,27},//100
   {O,O,O,   X,X,O,X,O,O,O,   0,27},
   {O,O,O,   X,X,X,X,O,X,X, 0,27},
   {O,O,O,   O,X,X,X,X,O,X, 0,27},  //103.
   
   {O,O,O,   X,X,O,O,O,X,O, 0,27},   
   {O,O,O,   X,O,O,X,O,X,X, 0,27},
   {O,O,O,   O,X,O,O,O,X,X, 0,27},
   {O,O,O,   X,O,O,X,O,O,O,  0,27},
   {O,O,O,   X,X,O,O,O,X,X, 0,27},
   {O,O,O,   X,X,O,O,O,X,O, 0,27},
   {O,O,O,   X,O,O,X,O,X,X, 0,27},//110
   {O,O,O,   O,X,O,X,O,O,O,  0,27},  //111.
   
   {O,O,O,   X,O,O,O,O,X,X, 0,27},   
   {O,O,O,   O,X,O,X,O,X,O, 0,27},
   {O,O,O,   O,O,X,O,X,O,O, 0,27},  //114.
   
   
   {O,O,O,   O,O,X,O,X,O,O, 0,27},
   {O,O,O,   X,O,O,O,O,X,X, 0,27},
   {O,O,O,   O,X,O,X,O,X,O, 0,27},
   {O,O,O,   O,O,X,O,X,O,O, 0,27},
   {O,O,O,   O,O,X,O,X,O,O, 0,27},  //119
   {O,O,O,   X,O,O,O,O,X,X, 0,27},   
   {O,O,O,   O,X,O,X,O,X,O, 0,27},
   {O,O,O,   O,O,X,O,X,O,O, 0,27},
   {O,O,O,   O,O,X,O,X,O,O, 0,27},
   {O,O,O,   O,O,O,O,O,X,O, 0,27},
   {O,O,O,   O,O,X,O,O,O,O,   0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27},
   {O,O,O,   O,O,X,O,O,O,O,   0,27},  //127
   {O,O,O,   O,O,O,O,O,O,O,  0,27},   
   {O,O,O,   X,X,X,X,O,O,O,   0,27},  //129.
   
   
   {O,O,O,   O,O,X,O,O,O,O,  0,27},
   {O,O,O,   X,O,O,O,O,O,O,  0,27},
   {O,O,O,   O,O,O,O,O,X,O, 0,27},
   {O,O,O,   O,X,O,O,O,O,O,  0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,O,O,X,O,O, 0,27},  //135.
   {O,O,O,   O,O,O,O,O,O,O,  0,27},   
   {O,O,O,   X,X,X,X,O,O,O,   0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27},
   {O,O,O,   X,X,X,X,O,O,O,   0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27},  //140.
  
//}; // MONARCH   1

//PROGMEM prog_char pattern_2[] = {            // FLAMBEAU

   {O,O,O,   X,X,O,O,O,O,O,  65,27}, //141.
   {O,O,O,   X,O,X,O,O,O,O,  0,27},
   {O,O,O,   X,O,O,X,O,O,O,  0,27},
   {O,O,O,   X,O,O,O,X,O,X, 0,27},
   {O,O,O,   O,O,O,O,O,X,X, 0,27},
   {O,O,O,   O,O,O,O,X,O,X, 0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,X,O,O,O,O,  0,27},
   {O,O,O,   X,X,O,O,O,O,O,  0,27},  //149.
   {O,O,O,   X,O,X,O,O,O,O,  0,27},  
   {O,O,O,   X,O,O,X,O,O,O,  0,27},
   {O,O,O,   X,O,O,O,X,O,X, 0,27},
   {O,O,O,   X,O,O,O,O,X,O, 0,27},
   {O,O,O,   O,O,O,O,X,O,O, 0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,X,O,O,O,O,  0,27},
   {O,O,O,   O,X,O,O,O,O,O,  0,27},  //157.
   
   {O,O,O,   X,X,X,X,O,O,O,   0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27}, //159.
   {O,O,O,   X,X,X,X,O,O,O,   0,27},  
   {O,O,O,   O,O,O,O,O,O,O,  0,27},  
   
   {O,O,O,   X,X,O,O,O,O,O,   0,27},
   {O,O,O,   X,O,X,X,O,X,X, 0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27},
   {O,O,O,   O,O,X,X,O,X,X, 0,27},
   {O,O,O,   X,X,O,O,O,O,O,   0,27},
   {O,O,O,   X,O,O,O,O,O,O,  0,27},
   {O,O,O,   O,X,O,O,X,O,O, 0,27},
   {O,O,O,   O,O,O,O,O,X,X, 0,27},  //169.
      
   {O,O,O,   X,X,O,O,O,O,O,  0,27},  
   {O,O,O,   X,O,X,O,O,O,O,  0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,O,O,X,O,O, 0,27},
   {O,O,O,   X,O,O,O,O,X,O, 0,27},
   {O,O,O,   X,O,O,O,X,O,X, 0,27},
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,X,O,O,O,O,  0,27},
   {O,O,O,   X,X,O,O,O,O,O,  0,27},
   {O,O,O,   X,O,O,O,O,O,O,  0,27},  //179.
   
   {O,O,O,   X,X,X,O,O,O,O,  0,27},  
   {O,O,O,   X,O,O,X,O,O,O,   0,27},
   {O,O,O,   O,X,X,O,O,O,O,  0,27},
   {O,O,O,   O,O,O,X,O,O,O,   0,27},
   {O,O,O,   X,X,X,O,O,O,O,  0,27},
   {O,O,O,   X,O,O,X,O,O,O,   0,27},
   {O,O,O,   O,X,X,O,O,O,O,  0,27},
   {O,O,O,   O,O,O,X,O,O,O,   0,27},  //187.
   
   {O,O,O,   X,X,O,X,O,X,O, 0,27},
   {O,O,O,   X,O,X,O,X,O,X, 0,27},
   {O,O,O,   O,X,O,X,O,X,O, 0,27},  //190.
   {O,O,O,   O,O,X,O,X,O,X, 0,27},  
   {O,O,O,   X,X,O,X,O,X,O, 0,27},
   {O,O,O,   X,O,X,O,X,O,X, 0,27},
   {O,O,O,   O,X,O,X,O,X,O, 0,27},
   {O,O,O,   O,O,X,O,X,O,X, 0,27},
   {O,O,O,   X,X,O,O,O,O,O,   0,27},
   {O,O,O,   O,O,X,X,O,X,X, 0,27},
   {O,O,O,   X,O,O,O,O,O,O,  0,27},
   {O,O,O,   O,O,X,X,O,X,X, 0,27}, //199.
   {O,O,O,   X,X,O,O,O,O,O,   0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27},  // 
   {O,O,O,   X,X,O,O,X,O,O, 0,27},
   {O,O,O,   X,O,O,O,O,X,X, 0,27},
   
   {O,O,O,   X,X,X,X,O,O,O,   0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27},  //205.,,,,,,,,,
   
            
//};  //FLAMBEAU 2

//PROGMEM prog_char pattern_3[] = {            //EMPEROR

   {O,O,O,   X,X,O,O,O,O,O,  60,27},//206.
   {O,O,O,   X,O,X,O,O,O,O,  0,27},
   {O,O,O,   X,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,O,O,X,O,X, 0,27},// 209,
   {O,O,O,   O,O,O,O,O,X,X, 0,27},
   {O,O,O,   O,O,O,O,X,O,X, 0,27},
   {O,O,O,   X,O,O,X,O,O,O,  0,27},
   {O,O,O,   X,O,X,O,O,O,O,  0,27},
   {O,O,O,   X,X,O,O,O,O,O,  0,27},
   {O,O,O,   O,O,X,O,O,O,O,  0,27}, 
   {O,O,O,   O,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,O,O,X,O,X, 0,27},
   {O,O,O,   X,O,O,O,O,X,O, 0,27},
   {O,O,O,   X,O,O,O,X,O,O, 0,27},//219,
   {O,O,O,   X,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,X,O,O,O,O,  0,27},
   {O,O,O,   O,X,O,O,O,O,O,  0,27},
   
   {O,O,O,   X,X,X,X,O,O,O,   0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27},
   {O,O,O,   X,X,X,X,O,O,O,   0,27}, 
   {O,O,O,   O,O,O,O,O,O,O,  0,27},
   
   {O,O,O,   X,X,O,O,O,O,O,   0,27},
   {O,O,O,   O,O,X,X,O,X,X, 0,27},
   {O,O,O,   X,O,O,O,O,O,O,  0,27},//229
   {O,O,O,   O,O,X,X,O,X,X, 0,27},
   {O,O,O,   X,X,O,O,O,O,O,   0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27},
   {O,O,O,   X,X,O,O,X,O,O, 0,27},
   {O,O,O,   X,O,O,O,O,X,X, 0,27},
   
   {O,O,O,   X,X,O,O,O,O,O,  0,27}, 
   {O,O,O,   O,O,X,O,O,O,O,  0,27},
   {O,O,O,   X,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,O,O,X,O,O, 0,27},
   {O,O,O,   X,O,O,O,O,X,O, 0,27},//239,
   {O,O,O,   O,O,O,O,X,O,X, 0,27},
   {O,O,O,   X,O,O,X,O,O,O,  0,27},
   {O,O,O,   O,O,X,O,O,O,O,  0,27},
   {O,O,O,   X,X,O,O,O,O,O,  0,27},
   
   {O,O,O,   X,X,X,O,O,O,O,  0,27},
   {O,O,O,   O,O,O,X,O,O,O,   0,27}, 
   {O,O,O,   X,X,X,O,O,O,O,  0,27},
   
   {O,O,O,   O,O,O,X,O,O,O,   0,27},
   {O,O,O,   X,X,X,O,O,O,O,  0,27},
   {O,O,O,   O,O,O,X,O,O,O,   0,27},//249,
   {O,O,O,   X,X,X,O,O,O,O,  0,27},
   {O,O,O,   O,O,O,X,O,O,O,   0,27},
   {O,O,O,   X,X,O,O,O,O,O,   0,27},
   {O,O,O,   O,O,X,X,O,X,X, 0,27},
   {O,O,O,   X,O,O,O,O,O,O,  0,27},
   {O,O,O,   O,O,X,X,O,X,X, 0,27}, 
   {O,O,O,   X,X,O,O,O,O,O,   0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27},
   {O,O,O,   X,X,O,O,X,O,O, 0,27},
   {O,O,O,   X,O,O,O,O,X,X, 0,27},//259,
   
   {O,O,O,   X,X,X,X,O,O,O,   0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27},
   {O,O,O,   X,X,X,X,O,O,O,   0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27},
   {O,O,O,   X,X,X,X,O,O,O,   0,27},
   {O,O,O,   O,O,O,O,O,O,O,  0,27}, //265,
                              

//}; //EMPEROR 3

//PROGMEM prog_char pattern_4[] = {            // APOLLO

  {O,O,O,   X,X,X,X,X,O,X, 52,27},//266.
  {O,O,O,   O,O,O,O,O,X,O, 0,27},
  {O,O,O,   X,X,X,X,X,O,X, 0,27},
  {O,O,O,   O,O,O,O,O,X,O, 0,27},//269
  {O,O,O,   X,X,X,X,X,O,X, 0,27},
  {O,O,O,   O,O,O,O,O,X,O, 0,27},
  {O,O,O,   X,X,X,X,X,O,X, 0,27},
  {O,O,O,   O,O,O,O,O,X,O, 0,27},
  {O,O,O,   X,X,X,X,X,O,X, 0,27},
  {O,O,O,   O,O,O,O,O,X,O, 0,27}, 
  {O,O,O,   X,X,X,X,X,O,X, 0,27},//276.
  {O,O,O,   O,O,O,O,O,X,O, 0,27},
  
  {O,O,O,   X,O,O,O,O,X,O, 0,27},
  {O,O,O,   O,O,O,O,O,X,X, 0,27},//279
  {O,O,O,   X,O,O,O,O,X,O, 0,27},
  {O,O,O,   O,O,O,O,O,X,X, 0,27},
  {O,O,O,   X,O,O,O,O,X,O, 0,27},
  {O,O,O,   O,O,O,O,O,X,X, 0,27},
  
  {O,O,O,   X,X,X,X,O,X,O, 0,27},
  {O,O,O,   X,X,O,X,O,O,O,   0,27}, 
  {O,O,O,   O,X,X,X,O,X,X, 0,27},//286.
  {O,O,O,   X,X,O,X,O,O,O,   0,27},
  {O,O,O,   X,X,X,X,O,X,X, 0,27},
  {O,O,O,   X,X,O,X,O,O,O,   0,27},//289.
  {O,O,O,   X,X,X,X,O,X,X, 0,27},
  {O,O,O,   O,X,X,X,O,O,O,   0,27},
  
  {O,O,O,   X,X,O,O,O,X,O, 0,27},
  {O,O,O,   X,O,O,X,O,X,X, 0,27},
  {O,O,O,   O,X,O,O,O,X,X, 0,27},
  {O,O,O,   X,O,O,X,O,X,O, 0,27},
  {O,O,O,   X,X,O,O,O,X,X, 0,27},
  {O,O,O,   X,X,O,O,O,X,O, 0,27},
  {O,O,O,   X,O,O,X,O,X,X, 0,27},
  {O,O,O,   O,X,O,X,O,X,X, 0,27},//299
  
  {O,O,O,   X,O,O,O,O,X,X, 0,27},
  {O,O,O,   O,X,O,X,O,X,O, 0,27},
  {O,O,O,   O,O,X,O,O,O,O,   0,27},
  {O,O,O,   O,O,X,O,O,O,O,   0,27},
  {O,O,O,   X,O,O,O,O,X,X, 0,27},
  
  {O,O,O,   O,X,O,X,O,X,O, 0,27}, 
  {O,O,O,   O,O,X,O,O,O,O,   0,27},//306.
  {O,O,O,   O,O,X,O,O,O,O,   0,27},
  {O,O,O,   X,O,O,O,O,X,X, 0,27},
  {O,O,O,   O,X,O,X,O,X,O, 0,27},//309.
  {O,O,O,   O,O,X,O,O,O,O,   0,27},
  {O,O,O,   O,O,X,O,O,O,O,   0,27},
  
  {O,O,O,   O,O,O,O,O,X,O, 0,27},
  {O,O,O,   O,O,X,O,O,O,O,   0,27},
  {O,O,O,   O,O,O,O,O,X,O, 0,27},
  {O,O,O,   O,O,X,O,O,O,O,   0,27}, 
  {O,O,O,   O,O,O,O,O,X,O, 0,27},//316
  {O,O,O,   X,X,X,X,X,O,O, 0,27},
  
//};  // APOLLO 4

//PROGMEM prog_char pattern_5[] = {  //MORPHO

  {O,O,O,  X,X,X,X,O,O,O, 31,27},//318
  {O,O,O,  O,O,O,O,O,O,O,  0,27},
  {O,O,O,  X,O,O,O,O,O,O,  0,27},
  {O,O,O,  O,X,O,O,O,O,O,  0,27},
  {O,O,O,  O,O,X,O,O,O,O,  0,27},
  {O,O,O,  O,O,O,X,O,O,O,  0,27},
  {O,O,O,  O,O,O,O,X,O,O, 0,27},
  {O,O,O,  O,O,O,O,O,X,O, 0,27},
  {O,O,O,  O,O,O,O,O,O,O,  0,27},  //326
  {O,O,O,  O,O,O,O,O,X,O, 0,27},
  {O,O,O,  O,O,O,O,X,O,O, 0,27}, //
  {O,O,O,  O,O,O,X,O,O,O,  0,27},//329
  {O,O,O,  O,O,X,O,O,O,O,  0,27},
  {O,O,O,  O,X,O,O,O,O,O,  0,27},
  {O,O,O,  X,O,O,O,O,O,O,  0,27},
  {O,O,O,  O,O,O,O,O,O,O,  0,27},
  {O,O,O,  X,X,O,O,O,O,O,  0,27},
  {O,O,O,  O,X,X,O,O,O,O,  0,27},
  {O,O,O,  O,O,X,X,O,O,O,  0,27}, //336.
  {O,O,O,  O,O,O,X,X,O,O, 0,27},
  {O,O,O,  O,O,O,O,O,O,O,   0,27},
  {O,O,O,  O,O,O,O,O,X,O, 0,27},//339.
  {O,O,O,  O,O,O,O,O,O,O,   0,27},
  {O,O,O,  O,O,O,X,X,O,O, 0,27},
  {O,O,O,  O,O,X,X,O,O,O,  0,27},
  {O,O,O,  O,X,X,O,O,O,O,  0,27},
  {O,O,O,  X,X,O,O,O,O,O,  0,27},
  {O,O,O,  X,O,X,O,X,O,O, 0,27},
  {O,O,O,  O,X,O,X,O,X,O, 0,27},//346.
  {O,O,O,  X,O,X,O,X,O,O, 0,27}, //
  {O,O,O,  X,X,X,X,O,O,O,   0,27},//348.
  
//}; //MORPHO 5


   
//PROGMEM prog_char pattern_6[] = {            // 255 = NO LIGHT
 
   {X,X,X,X,X,X,X,O,O,O,   2,27},   //349  # 7 blink all on all off  /
   {O,O,O,O,O,O,O,O,O,O,  0,27},   
//}; 
   
//PROGMEM prog_char pattern_7[] = {            // 255 = NO LIGHT
 
   {X,X,X,X,X,X,X,O,O,O,   2,27},   // 351 # 8 all on then recede 1 by one  /
   {O,X,X,X,X,X,X,O,O,O,   0,27},   
  
//}; 
   
//PROGMEM prog_char pattern_8[] = {            // 255 = NO LIGHT
 
   {X,X,X,X,X,X,X,O,O,O,   2,27},   //353  # 9 all on then recede 1 by one  /
   {O,X,X,X,X,X,X,O,O,O,   0,27},  
   
//};  
   
//PROGMEM prog_char pattern_9[] = { 
   {0,255,255,255,255,255,255,255,255,0, 2,27},  //355 # 10 two chases from each end X
   {255,255,0,255,255,255,255,0,255,255, 10,27},
//}; 
   
//PROGMEM prog_char pattern_10[] = { 
   {0,255,255,255,255,255,255,255,255,0, 2,27},  //357 # 11 two chases from each end X
   {255,0,255,255,255,255,255,255,0,255, 10,27},
   
//}; 
   
//PROGMEM prog_char pattern_11[] = {  
   {0,255,255,255,255,255,255,255,255,0, 2,27},  //359 # 12 two chases from each end X
   {255,0,255,255,255,255,255,255,0,255, 10,27},
   
//}; 
   
//PROGMEM prog_char pattern_12[] = { 
  {0,255,255,255,255,255,255,255,255,0, 2,27},  // 361 13 two chases from each end X
   {255,0,255,255,255,255,255,255,0,255, 10,27},
   
//};
   
//PROGMEM prog_char pattern_13[] = { 
   {0,255,255,255,255,255,255,255,255,0, 2,27},  // 363 # 14 two chases from each end X
   {255,0,255,255,255,255,255,255,0,255, 10,27},
    
//};

//PROGMEM prog_char pattern_14[] = {  
   {0,255,255,255,255,255,255,255,255,0, 2,27},  // 365 #15 two chases from each end X
   {255,0,255,255,255,255,255,255,0,255, 10,27},
    
//} ;

//PROGMEM prog_char pattern_15[] = {  
   {0,255,255,255,255,255,255,255,255,0, 2,27},  //367 #16 two chases from each end X
   {255,0,255,255,255,255,255,255,0,255, 10,25}
   
} ;




