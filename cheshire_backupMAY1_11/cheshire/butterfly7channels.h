

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
 
   O,O,O,O,O,O,O,O,O,O, 10,1,   //  # 1 chase from pin 1 to 10  /
   O,O,O,O,O,O,O,O,O,O, 0,0,
   O,O,O,O,O,O,O,O,O,O, 0,0,
   O,O,O,O,O,O,O,O,O,O, 0,0,
   O,O,O,O,O,O,O,O,O,O, 0,0,
   O,O,O,O,O,O,O,O,O,O, 0,0,
   O,O,O,O,O,O,O,O,O,O, 0,0,
   O,O,O,O,O,O,O,O,O,O, 0,0,
   O,O,O,O,O,O,O,O,O,O, 0,0,
   O,O,O,O,O,O,O,O,O,O, 0,0 
};
*/

PROGMEM prog_char pattern_0[] = {            // QUEEN
 
   O,O,O,  X,X,O,O,O,X,O, 72,25,   //  
   O,O,O,  X,O,X,O,O,X,O, 0,25,
   O,O,O,  O,O,O,X,O,O,X, 0,25,
   O,O,O,  O,O,O,O,X,O,X, 0,25,
   O,O,O,  X,X,O,O,O,X,O, 0,25,
   O,O,O,  X,O,X,O,O,X,O, 0,25,
   O,O,O,  O,O,O,X,O,O,X, 0,25,
   O,O,O,  O,O,O,O,X,O,X, 0,25,  // 8
   
   O,O,O,  X,X,O,X,O,X,O, 0,25,   
   O,O,O,  O,X,O,X,O,X,X, 0,25,
   O,O,O,  X,X,O,X,O,X,O, 0,25,
   O,O,O,  O,X,O,X,O,X,X, 0,25,
   O,O,O,  X,O,X,O,X,O,O, 0,25,
   O,O,O,  O,O,X,O,X,O,X, 0,25,
   O,O,O,  X,O,X,O,X,O,O, 0,25,
   O,O,O,  O,O,X,O,X,O,X, 0,25,  //16
   
   O,O,O,  X,X,O,O,O,X,O, 0,25,   
   O,O,O,  X,O,X,O,O,X,O, 0,25,
   O,O,O,  O,O,O,X,O,O,X, 0,25,
   O,O,O,  O,O,O,O,X,O,X, 0,25,
   O,O,O,  X,X,O,O,O,X,O, 0,25,
   O,O,O,  X,O,X,O,O,X,O, 0,25,
   O,O,O,  O,O,O,X,O,O,X, 0,25,
   O,O,O,  O,O,O,O,X,O,X, 0,25,  //24
   
   O,O,O,  X,X,X,O,O,X,X, 0,25,   
   O,O,O,  O,X,X,O,O,O,O, 0,25,
   O,O,O,  X,O,O,X,X,X,X, 0,25,
   O,O,O,  O,O,O,X,X,O,O, 0,25,
   O,O,O,  X,X,X,O,O,X,X, 0,25,
   O,O,O,  O,X,X,O,O,O,O, 0,25,
   O,O,O,  X,O,O,X,X,X,X, 0,25,
   O,O,O,  O,O,O,X,X,O,O, 0,25,  //32
   
   O,O,O,  X,X,O,O,O,X,O, 0,25,   
   O,O,O,  X,O,X,O,O,X,O, 0,25,
   O,O,O,  O,O,O,X,O,O,X, 0,25,
   O,O,O,  O,O,O,O,X,O,X, 0,25,
   O,O,O,  X,X,O,O,O,X,O, 0,25,
   O,O,O,  X,O,X,O,O,X,O, 0,25,
   O,O,O,  O,O,O,X,O,O,X, 0,25,
   O,O,O,  O,O,O,X,O,X,O, 0,25,  //40
   
   O,O,O,  X,X,O,X,O,X,O, 0,25,   
   O,O,O,  X,X,O,X,O,X,O, 0,25,
   O,O,O,  O,O,X,O,X,O,X, 0,25,
   O,O,O,  O,O,X,O,X,O,X, 0,25,
   O,O,O,  X,X,O,X,O,X,O, 0,25,
   O,O,O,  X,O,X,O,X,X,O, 0,25,
   O,O,O,  O,X,O,X,O,O,X, 0,25,
   O,O,O,  O,X,X,X,X,O,X, 0,25,  //48
   
   O,O,O,  X,X,O,O,O,X,O, 0,25,   
   O,O,O,  X,O,X,O,O,X,O, 0,25,
   O,O,O,  O,O,O,X,O,O,X, 0,25,
   O,O,O,  O,O,O,O,X,O,X, 0,25,
   O,O,O,  X,X,O,O,O,X,O, 0,25,
   O,O,O,  X,O,X,O,O,X,O, 0,25,
   O,O,O,  O,O,O,X,O,O,X, 0,25,
   O,O,O,  O,O,O,O,X,O,X, 0,25,  //56
   
   O,O,O,  X,O,O,O,O,X,X, 0,25,   
   O,O,O,  O,X,X,X,X,O,X, 0,25,
   O,O,O,  X,O,O,O,O,X,O, 0,25,
   O,O,O,  O,X,X,X,X,O,O, 0,25,
   O,O,O,  X,O,O,O,O,X,X, 0,25,
   O,O,O,  O,X,X,X,X,O,X, 0,25,
   O,O,O,  X,O,O,O,O,X,O, 0,25,
   O,O,O,  O,X,X,X,X,O,O, 0,25,  //64
   
   O,O,O,  X,O,X,X,O,X,X, 0,25,   
   O,O,O,  O,O,O,O,O,X,O, 0,25,
   O,O,O,  X,O,X,X,O,O,X, 0,25,
   O,O,O,  O,X,O,O,X,O,O, 0,25,
   O,O,O,  X,O,O,O,O,X,X, 0,25,
   O,O,O,  O,X,O,O,X,X,O, 0,25,
   O,O,O,  X,O,O,O,O,O,X, 0,25,
   O,O,O,  O,X,X,X,X,O,O, 0,25  //72
   

};  // QUEEN 0

PROGMEM prog_char pattern_1[] = {            // MONARCH

   O,O,X,  X,X,O,X,O,X,X, 69,25,   
   O,O,X,  X,O,X,O,X,X,X, 0,25,
   O,O,X,  X,X,O,X,O,X,X, 0,25,
   O,O,X,  X,O,X,O,X,X,X, 0,25,
   O,O,X,  X,X,O,X,O,X,X, 0,25,
   O,O,X,  X,O,X,O,X,X,X, 0,25, //6
   
   O,O,O,  X,X,X,X,X,O,X, 0,25,
   O,O,O,  O,O,O,O,O,X,O, 0,25,  //8
   O,O,O,  X,X,X,X,X,O,X, 0,25,   
   O,O,O,  O,O,O,O,O,X,O, 0,25,
   O,O,O,  X,X,X,X,X,O,X, 0,25,
   O,O,O,  O,O,O,O,O,X,O, 0,25,
   O,O,O,  X,X,X,X,X,O,X, 0,25,
   O,O,O,  O,O,O,O,O,X,O, 0,25,
   O,O,O,  X,X,X,X,X,O,X, 0,25,
   O,O,O,  O,O,O,O,O,X,O, 0,25,  //16
   O,O,0,  X,X,X,X,X,O,X, 0,25,   
   O,O,O,  O,O,O,O,O,X,O, 0,25,  //18
   
   O,O,O,  X,O,O,O,O,X,O, 0,25,
   O,O,O,  O,O,O,O,O,X,X, 0,25,
   O,O,O,  X,O,O,O,O,X,O, 0,25,
   O,O,O,  O,O,O,O,O,X,X, 0,25,
   O,O,O,  X,O,O,O,O,X,O, 0,25,
   O,O,O,  O,O,O,O,O,X,X, 0,25,  //24
   
   O,O,O,  X,X,X,X,O,X,O, 0,25,   
   O,O,O,  X,X,O,X,X,X,X, 0,25,
   O,O,O,  O,X,X,X,O,X,X, 0,25,
   O,O,O,  X,X,O,X,X,O,O, 0,25,
   O,O,O,  X,X,X,X,O,X,X, 0,25,
   O,O,O,  X,X,O,X,X,X,O, 0,25,
   O,O,O,  X,X,X,X,O,X,X, 0,25,
   O,O,O,  O,X,X,X,X,O,X, 0,50,  //32
   
   O,O,O,  X,X,O,O,O,X,O, 0,25,   
   O,O,O,  X,O,O,X,O,X,X, 0,25,
   O,O,O,  O,X,O,O,O,X,X, 0,25,
   O,O,O,  X,O,O,X,O,O,O, 0,25,
   O,O,O,  X,X,O,O,O,X,X, 0,25,
   O,O,O,  X,X,O,O,O,X,O, 0,25,
   O,O,O,  X,O,O,X,O,X,X, 0,25,
   O,O,O,  O,X,O,X,O,O,X, 0,50,  //40
   
   O,O,O,  X,O,O,O,O,X,X, 0,25,   
   O,O,O,  O,X,O,X,O,X,O, 0,25,
   O,O,O,  O,O,X,O,X,O,O, 0,25,  //43
   
   
   O,O,O,  O,O,X,O,X,O,O, 0,25,
   O,O,O,  X,O,O,O,O,X,X, 0,25,
   O,O,O,  O,X,O,X,O,X,O, 0,25,
   O,O,O,  O,O,X,O,X,O,O, 0,25,
   O,O,O,  O,O,X,O,X,O,O, 0,25,  //48
   O,O,0,  X,O,O,O,O,X,X, 0,25,   
   O,O,O,  O,X,O,X,O,X,O, 0,25,
   O,O,O,  O,O,X,O,X,O,O, 0,25,
   O,O,O,  O,O,X,O,X,O,O, 0,25,
   O,O,O,  O,O,O,O,O,X,O, 0,25,
   O,O,O,  O,O,X,O,X,X,O, 0,25,
   O,O,O,  O,O,O,O,O,O,O, 0,25,
   O,O,O,  O,O,X,O,X,X,O, 0,25,  //56
   O,O,O,  O,O,O,O,O,O,O, 0,25,   
   O,O,O,  X,X,X,X,X,X,O, 0,25,  //58
   
   
   O,O,O,  O,O,X,O,O,O,O, 0,25,
   O,O,O,  X,O,O,O,O,O,O, 0,25,
   O,O,O,  O,O,O,O,O,X,O, 0,25,
   O,O,O,  O,X,O,O,O,O,O, 0,25,
   O,O,O,  O,O,O,X,O,O,O, 0,25,
   O,O,O,  O,O,O,O,X,O,O, 0,25,  //64
   O,O,O,  O,O,O,O,O,O,X, 0,25,   
   O,O,O,  X,X,X,X,X,X,X, 0,25,
   O,O,O,  O,O,O,O,O,O,O, 0,25,
   O,O,O,  X,X,X,X,X,X,X, 0,25,
   O,O,O,  O,O,O,O,O,O,O, 0,25  //69
  
}; // MONARCH   1

PROGMEM prog_char pattern_2[] = {            // FLAMBEAU

   O,X,O,  X,X,O,O,O,O,O, 65,25,
   O,X,O,  X,O,X,O,O,O,O, 0,25,
   O,X,O,  X,O,O,X,O,O,O, 0,25,
   O,X,O,  X,O,O,O,X,O,X, 0,25,
   O,X,O,  O,O,O,O,O,X,X, 0,25,
   O,X,O,  O,O,O,O,X,O,X, 0,25,
   O,X,O,  O,O,O,X,O,O,O, 0,25,
   O,X,O,  O,O,X,O,O,O,O, 0,25,
   O,O,O,  X,X,O,O,O,O,O, 0,25,
   O,O,O,  X,O,X,O,O,O,X, 0,25,  // 10  
   O,O,O,  X,O,O,X,O,O,X, 0,25,
   O,O,O,  X,O,O,O,X,O,X, 0,25,
   O,O,O,  X,O,O,O,O,X,O, 0,25,
   O,O,O,  O,O,O,O,X,O,O, 0,25,
   O,O,O,  O,O,O,X,O,O,O, 0,25,
   O,O,O,  O,O,X,O,O,O,X, 0,25,
   O,O,O,  O,X,O,O,O,O,X, 0,25,  //17
   
   O,O,O,  X,X,X,X,X,X,X, 0,25,
   O,O,O,  O,O,O,O,O,O,O, 0,25,
   O,O,O,  X,X,X,X,X,X,X, 0,25,  // 20
   O,O,O,  O,O,O,O,O,O,O, 0,25,  //21
   
   O,O,O,  X,X,O,O,X,X,O, 0,25,
   O,O,O,  X,O,X,X,O,X,X, 0,25,
   O,O,O,  O,O,O,O,O,O,O, 0,25,
   O,O,O,  O,O,X,X,O,X,X, 0,25,
   O,O,O,  X,X,O,O,X,X,O, 0,25,
   O,O,O,  X,O,O,O,O,O,X, 0,25,
   O,O,O,  O,X,O,O,X,O,O, 0,25,
   O,O,O,  O,O,O,O,O,X,X, 0,25,  //29
      
   O,O,O,  X,X,O,O,O,O,X, 0,25,  // 30
   O,O,O,  X,O,X,O,O,O,X, 0,25,
   O,O,O,  O,O,O,X,O,O,O, 0,25,
   O,O,O,  O,O,O,O,X,O,O, 0,25,
   O,O,O,  X,O,O,O,O,X,O, 0,25,
   O,O,O,  X,O,O,O,X,O,X, 0,25,
   O,O,O,  O,O,O,X,O,O,X, 0,25,
   O,O,O,  O,O,X,O,O,O,X, 0,25,
   O,O,O,  X,X,O,O,O,O,O, 0,25,
   O,O,O,  X,O,O,O,O,O,O, 0,25,  //39
   
   O,O,O,  X,X,X,O,O,O,O, 0,25,  // 40
   O,O,O,  X,O,O,X,X,X,X, 0,25,
   O,O,O,  O,X,X,O,O,O,O, 0,25,
   O,O,O,  O,O,O,X,X,X,X, 0,25,
   O,O,O,  X,X,X,O,O,O,O, 0,25,
   O,O,O,  X,O,O,X,X,X,X, 0,25,
   O,O,O,  O,X,X,O,O,O,O, 0,25,
   O,O,O,  O,O,O,X,X,X,X, 0,25,  //47
   
   O,O,O,  X,X,O,X,O,X,O, 0,25,
   O,O,O,  X,O,X,O,X,O,X, 0,25,
   O,O,O,  O,X,O,X,O,X,O, 0,25,  //50
   O,O,O,  O,O,X,O,X,O,X, 0,25,  
   O,O,O,  X,X,O,X,O,X,O, 0,25,
   O,O,O,  X,O,X,O,X,O,X, 0,25,
   O,O,O,  O,X,O,X,O,X,O, 0,25,
   O,O,O,  O,O,X,O,X,O,X, 0,25,
   O,O,O,  X,X,O,O,X,X,O, 0,25,
   O,O,O,  O,O,X,X,O,X,X, 0,25,
   O,O,O,  X,O,O,O,O,O,O, 0,25,
   O,O,O,  O,O,X,X,O,X,X, 0,25,
   O,O,O,  X,X,O,O,X,X,O, 0,25,
   O,O,O,  O,O,O,O,O,O,X, 0,25,  // 
   O,O,O,  X,X,O,O,X,O,O, 0,25,
   O,O,O,  X,O,O,O,O,X,X, 0,25,
   
   O,O,O,  X,X,X,X,X,X,X, 0,25,
   O,O,O,  O,O,O,O,O,O,O, 0,25  //65
   
            
};  //FLAMBEAU 2

PROGMEM prog_char pattern_3[] = {            //EMPEROR

   X,O,O,  X,X,O,O,O,O,O, 60,25,
   X,O,O,  X,O,X,O,O,O,O, 0,25,
   X,O,O,  X,O,O,X,O,O,O, 0,25,
   X,O,O,  O,O,O,O,X,O,X, 0,25,
   X,O,O,  O,O,O,O,O,X,X, 0,25,
   X,O,O,  O,O,O,O,X,O,X, 0,25,
   X,O,O,  X,O,O,X,O,O,O, 0,25,
   X,O,O,  X,O,X,O,O,O,O, 0,25,
   O,O,O,  X,X,O,O,O,O,O, 0,25,
   O,O,O,  O,O,X,O,O,O,X, 0,25, //10
   O,O,O,  O,O,O,X,O,O,X, 0,25,
   O,O,O,  O,O,O,O,X,O,X, 0,25,
   O,O,O,  X,O,O,O,O,X,O, 0,25,
   O,O,O,  X,O,O,O,X,O,O, 0,25,
   O,O,O,  X,O,O,X,O,O,O, 0,25,
   O,O,O,  O,O,X,O,O,O,X, 0,25,
   O,O,O,  O,X,O,O,O,O,X, 0,25,
   
   O,O,O,  X,X,X,X,X,X,X, 0,25,
   O,O,O,  O,O,O,O,O,O,O, 0,25,
   O,O,O,  X,X,X,X,X,X,X, 0,25, //20 
   O,O,O,  O,O,O,O,O,O,O, 0,25,
   
   O,O,O,  X,X,O,O,X,X,O, 0,25,
   O,O,O,  O,O,X,X,O,X,X, 0,25,
   O,O,O,  X,O,O,O,O,O,O, 0,25,
   O,O,O,  O,O,X,X,O,X,X, 0,25,
   O,O,O,  X,X,O,O,X,X,O, 0,25,
   O,O,O,  O,O,O,O,O,O,X, 0,25,
   O,O,O,  X,X,O,O,X,O,O, 0,25,
   O,O,O,  X,O,O,O,O,X,X, 0,25,
   
   O,O,O,  X,X,O,O,O,O,X, 0,25, //30
   O,O,O,  O,O,X,O,O,O,X, 0,25,
   O,O,O,  X,O,O,X,O,O,O, 0,25,
   O,O,O,  O,O,O,O,X,O,O, 0,25,
   O,O,O,  X,O,O,O,O,X,O, 0,25,
   O,O,O,  O,O,O,O,X,O,X, 0,25,
   O,O,O,  X,O,O,X,O,O,X, 0,25,
   O,O,O,  O,O,X,O,O,O,X, 0,25,
   O,O,O,  X,X,O,O,O,O,O, 0,25,
   
   O,O,O,  X,X,X,O,O,O,O, 0,25,
   O,O,O,  O,O,O,X,X,X,X, 0,25, //40  
   O,O,O,  X,X,X,O,O,O,O, 0,25,
   
   O,O,O,  O,O,O,X,X,X,X, 0,25,
   O,O,O,  X,X,X,O,O,O,O, 0,25,
   O,O,O,  O,O,O,X,X,X,X, 0,25,
   O,O,O,  X,X,X,O,O,O,O, 0,25,
   O,O,O,  O,O,O,X,X,X,X, 0,25,
   O,O,O,  X,X,O,O,X,X,O, 0,25,
   O,O,O,  O,O,X,X,O,X,X, 0,25,
   O,O,O,  X,O,O,O,O,O,O, 0,25,
   O,O,O,  O,O,X,X,O,X,X, 0,25, //50
   O,O,O,  X,X,O,O,X,X,O, 0,25,
   O,O,O,  O,O,O,O,O,O,X, 0,25,
   O,O,O,  X,X,O,O,X,O,O, 0,25,
   O,O,O,  X,O,O,O,O,X,X, 0,25,
   
   O,O,O,  X,X,X,X,X,X,X, 0,25,
   O,O,O,  O,O,O,O,O,O,O, 0,25,
   O,O,O,  X,X,X,X,X,X,X, 0,25,
   O,O,O,  O,O,O,O,O,O,O, 0,25,
   O,O,O,  X,X,X,X,X,X,X, 0,25,
   O,O,O,  O,O,O,O,O,O,O, 0,25 //60
                              

}; //EMPEROR 3

PROGMEM prog_char pattern_4[] = {            // APOLLO

  O,X,X,  X,X,X,X,X,O,X, 52,25,
  O,X,X,  O,O,O,O,O,X,O, 0,25,
  O,X,X,  X,X,X,X,X,O,X, 0,25,
  O,X,X,  O,O,O,O,O,X,O, 0,25,
  O,X,X,  X,X,X,X,X,O,X, 0,25,
  O,O,O,  O,O,O,O,O,X,O, 0,25,
  O,O,O,  X,X,X,X,X,O,X, 0,25,
  O,O,O,  O,O,O,O,O,X,O, 0,25,
  O,O,O,  X,X,X,X,X,O,X, 0,25,
  O,O,O,  O,O,O,O,O,X,O, 0,25, //10
  O,O,O,  X,X,X,X,X,O,X, 0,25,
  O,O,O,  O,O,O,O,O,X,O, 0,25,
  
  O,O,O,  X,O,O,O,O,X,O, 0,25,
  O,O,O,  O,O,O,O,O,X,X, 0,25,
  O,O,O,  X,O,O,O,O,X,O, 0,25,
  O,O,O,  O,O,O,O,O,X,X, 0,25,
  O,O,O,  X,O,O,O,O,X,O, 0,25,
  O,O,O,  O,O,O,O,O,X,X, 0,25,
  
  O,O,O,  X,X,X,X,O,X,O, 0,25,
  O,O,O,  X,X,O,X,X,X,X, 0,25, //20
  O,O,O,  O,X,X,X,O,X,X, 0,25,
  O,O,O,  X,X,O,X,X,X,O, 0,25,
  O,O,O,  X,X,X,X,O,X,X, 0,25,
  O,O,O,  X,X,O,X,X,X,O, 0,25,
  O,O,O,  X,X,X,X,O,X,X, 0,25,
  O,O,O,  O,X,X,X,X,X,X, 0,50,
  
  O,O,O,  X,X,O,O,O,X,O, 0,25,
  O,O,O,  X,O,O,X,O,X,X, 0,25,
  O,O,O,  O,X,O,O,O,X,X, 0,25,
  O,O,O,  X,O,O,X,O,X,O, 0,25, //30 
  O,O,O,  X,X,O,O,O,X,X, 0,25,
  O,O,O,  X,X,O,O,O,X,O, 0,25,
  O,O,O,  X,O,O,X,O,X,X, 0,25,
  O,O,O,  O,X,O,X,O,X,X, 0,50,
  
  O,O,O,  X,O,O,O,O,X,X, 0,50,
  O,O,O,  O,X,O,X,O,X,O, 0,50,
  O,O,O,  O,O,X,O,X,X,O, 0,50,
  O,O,O,  O,O,X,O,X,X,O, 0,50,
  O,O,O,  X,O,O,O,O,X,X, 0,50,
  
  O,O,O,  O,X,O,X,O,X,O, 0,50, //40
  O,O,O,  O,O,X,O,X,X,O, 0,50,
  O,O,O,  O,O,X,O,X,X,O, 0,50,
  O,O,O,  X,O,O,O,O,X,X, 0,50,
  O,O,O,  O,X,O,X,O,X,O, 0,50,
  O,O,O,  O,O,X,O,X,X,O, 0,50,
  O,O,O,  O,O,X,O,X,X,O, 0,50,
  
  O,O,O,  O,O,O,O,O,X,O, 0,25,
  O,O,O,  O,O,X,O,X,X,O, 0,25,
  O,O,O,  O,O,O,O,O,X,O, 0,25,
  O,O,O,  O,O,X,O,X,X,O, 0,25, //50
  O,O,O,  O,O,O,O,O,X,O, 0,25,
  O,O,O,  X,X,X,X,X,O,O, 0,25
  
};  // APOLLO 4

PROGMEM prog_char pattern_5[] = {  //MORPHO

  X,X,X, X,X,X,X,X,X,X, 31,25,
  X,X,O, O,O,O,O,O,O,O, 0,25,
  X,X,X, X,O,O,O,O,O,O, 0,25,
  O,O,O, O,X,O,O,O,O,O, 0,25,
  O,O,O, O,O,X,O,O,O,O, 0,25,
  O,O,O, O,O,O,X,O,O,O, 0,25,
  O,O,O, O,O,O,O,X,O,O, 0,25,
  O,O,X, O,O,O,O,O,X,O, 0,25,
  O,O,X, O,O,O,O,O,O,X, 0,25,
  O,O,X, O,O,O,O,O,X,O, 0,25,
  O,O,X, O,O,O,O,X,O,O, 0,25,
  O,O,O, O,O,O,X,O,O,O, 0,25,
  O,O,O, O,O,X,O,O,O,O, 0,25,
  O,O,O, O,X,O,O,O,O,O, 0,25,
  O,O,O, X,O,O,O,O,O,O, 0,25,
  O,O,X, O,O,O,O,O,O,O, 0,25,
  O,O,X, X,X,O,O,O,O,O, 0,25,
  O,O,X, O,X,X,O,O,O,O, 0,25,
  O,O,X, O,O,X,X,O,O,O, 0,25, //
  O,O,O, O,O,O,X,X,O,O, 0,25,
  O,O,O, O,O,O,O,X,X,O, 0,25,
  O,O,O, O,O,O,O,O,X,O, 0,25,
  O,O,O, O,O,O,O,X,X,O, 0,25,
  O,O,X, O,O,O,X,X,O,O, 0,25,
  O,O,X, O,O,X,X,O,O,O, 0,25,
  O,O,X, O,X,X,O,O,O,O, 0,25,
  O,O,X, X,X,O,O,O,O,O, 0,25,
  O,O,O, X,O,X,O,X,O,O, 0,25,
  O,O,O, O,X,O,X,O,X,O, 0,25,
  O,O,O, X,O,X,O,X,O,O, 0,25, //
  O,O,X, X,X,X,X,X,X,X, 0,25
  
}; //MORPHO 5


   
PROGMEM prog_char pattern_6[] = {            // 255 = NO LIGHT
 
   X,X,X,X,X,X,X,X,X,X, 2,7,   //  # 7 blink all on all off  /
   O,O,O,O,O,O,O,O,O,O, 0,0   
}; 
   
PROGMEM prog_char pattern_7[] = {            // 255 = NO LIGHT
 
   X,X,X,X,X,X,X,X,X,X, 2,8,   //  # 8 all on then recede 1 by one  /
   O,X,X,X,X,X,X,X,X,X, 0,0   
  
}; 
   
PROGMEM prog_char pattern_8[] = {            // 255 = NO LIGHT
 
   X,X,X,X,X,X,X,X,X,X, 2,9,   //  # 9 all on then recede 1 by one  /
   O,X,X,X,X,X,X,X,X,X, 0,0   
   
};  
   
PROGMEM prog_char pattern_9[] = { 
   0,255,255,255,255,255,255,255,255,0, 2,10,  // # 10 two chases from each end X
   255,255,0,255,255,255,255,0,255,255, 10,0
}; 
   
PROGMEM prog_char pattern_10[] = { 
   0,255,255,255,255,255,255,255,255,0, 2,11,  // # 11 two chases from each end X
   255,0,255,255,255,255,255,255,0,255, 10,0,
   
}; 
   
PROGMEM prog_char pattern_11[] = {  
   0,255,255,255,255,255,255,255,255,0, 2,12,  // # 12 two chases from each end X
   255,0,255,255,255,255,255,255,0,255, 10,0
   
}; 
   
PROGMEM prog_char pattern_12[] = { 
   0,255,255,255,255,255,255,255,255,0, 2,13,  // # 13 two chases from each end X
   255,0,255,255,255,255,255,255,0,255, 10,0
   
};
   
PROGMEM prog_char pattern_13[] = { 
   0,255,255,255,255,255,255,255,255,0, 2,14,  // # 14 two chases from each end X
   255,0,255,255,255,255,255,255,0,255, 10,0
    
};

PROGMEM prog_char pattern_14[] = {  
   0,255,255,255,255,255,255,255,255,0, 2,15,  // #15 two chases from each end X
   255,0,255,255,255,255,255,255,0,255, 10,0
    
} ;

PROGMEM prog_char pattern_15[] = {  
   0,255,255,255,255,255,255,255,255,0, 2,16,  // #16 two chases from each end X
   255,0,255,255,255,255,255,255,0,255, 10,0
   
} ;




