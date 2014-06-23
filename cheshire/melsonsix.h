

#define X 0
#define O 255


/* DUMMY BLOCK FOR COPYING
PROGMEM prog_char pattern_0[] = {            // 255 = NO LIGHT
 
   {O,O,O,O, O,O,O,O,O,O, 10,1},   //  # 1 
   {O,O,O,O, O,O,O,O,O,O, 0,1},
   {O,O,O,O, O,O,O,O,O,O, 0,1},
   {O,O,O,O, O,O,O,O,O,O, 0,1},
   {O,O,O,O, O,O,O,O,O,O, 0,1},
   {O,O,O,O, O,O,O,O,O,O, 0,1},
   {O,O,O,O, O,O,O,O,O,O, 0,1},
   {O,O,O,O, O,O,O,O,O,O, 0,1},
   {O,O,O,O, O,O,O,O,O,O, 0,1},
   {O,O,O,O, O,O,O,O,O,O, 0,1 
};
*/

PROGMEM const unsigned char pattern_5_0_0[][12] = {            // 255 = NO LIGHT
 
   {O,O,O,O, O,O,O,O,O,O, 2,1}, // PATTERN 1(0) # 1 ALL OFF, THE LAST PATTERN IS ALL ON = STANDARD NOW...0
   {O,O,O,O, O,O,O,O,O,O, 0,1},   
 
   {O,O,O,O, X,X,X,X,X,X, 40,1},//1  //PATTERN 2(1)-----------------V1  OFFSET 2 
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //2
   {O,O,O,O, X,O,X,X,O,X, 0,1}, //3
   {O,O,O,O, X,O,O,X,O,X, 0,1}, //4
   {O,O,O,O, X,O,O,O,O,X, 0,1}, //5
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //6
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //7
   {O,O,O,O, X,X,O,O,O,O, 0,1}, //8
   {O,O,O,O, X,X,O,X,O,X, 0,1}, //9
   {O,O,O,O, X,X,X,X,O,X, 0,1}, //10 
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //11  
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //12
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //13
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //14  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //15
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //16
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //17
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //18
   {O,O,O,O, O,O,O,X,O,X, 0,1}, //19 
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //20
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //21
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //22
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //23
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //24
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //25  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //26
   {O,O,O,O, X,X,O,O,O,O, 0,1}, //27  
   {O,O,O,O, X,X,X,O,X,O, 0,1}, //28  
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //29
   {O,O,O,O, X,X,O,O,O,O, 0,1}, //30  
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //31  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //32  
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //33  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //34  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //35  
   {O,O,O,O, O,O,O,O,X,X, 0,1}, //36  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //37 
   {O,O,O,O, O,O,X,X,O,O, 0,1}, //38 
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //39
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //40
   
   {O,O,O,O, X,X,X,X,X,X, 40,1},//1   //PATTERN 3(2)-----------------V2  OFFSET  42 
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //2   
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //3  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //4  
   {O,O,O,O, X,X,O,O,O,O, 0,1}, //5
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //6
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //7
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //8
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //9
   {O,O,O,O, X,X,O,O,O,O, 0,1}, //10
   {O,O,O,O, X,X,X,O,X,O, 0,1}, //11 
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //12
   {O,O,O,O, X,X,O,X,O,X, 0,1}, //13  
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //14  
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //15  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //16 
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //17  
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //18  
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //19
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //20
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //21
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //22
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //23
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //24
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //25
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //26  
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //27  
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //28  
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //29  
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //30  
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //31  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //32  
   {O,O,O,O, X,O,O,O,O,X, 0,1}, //33  
   {O,O,O,O, X,O,O,X,O,O, 0,1}, //34
   {O,O,O,O, X,O,O,O,X,O, 0,1}, //35
   {O,O,O,O, X,O,X,O,O,O, 0,1}, //36
   {O,O,O,O, X,X,O,O,O,O, 0,1}, //37
   {O,O,O,O, X,X,O,O,O,O, 0,1}, //38
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //39
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //40
   
   {O,O,O,O, X,O,X,X,X,X, 40,1},//1  //PATTERN 4(3)-----------------V3  OFFSET  82
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //2  
   {O,O,O,O, O,X,O,O,O,O, 0,1}, //3  
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //4  
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //5
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //6
   {O,O,O,O, O,X,X,X,O,O, 0,1}, //7
   {O,O,O,O, O,X,O,O,X,X, 0,1}, //8
   {O,O,O,O, X,O,O,O,X,X, 0,1}, //9
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //10
   {O,O,O,O, O,X,X,X,O,O, 0,1}, //11 
   {O,O,O,O, O,X,O,O,X,X, 0,1}, //12
   {O,O,O,O, X,O,O,O,X,X, 0,1}, //13  
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //14  
   {O,O,O,O, O,X,O,O,X,X, 0,1}, //15  
   {O,O,O,O, O,X,X,X,O,O, 0,1}, //16
   {O,O,O,O, X,O,O,O,X,X, 0,1}, //17  
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //18  
   {O,O,O,O, O,X,O,O,O,O, 0,1}, //19
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //20
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //21
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //22
   {O,O,O,O, O,X,O,O,O,O, 0,1}, //23
   {O,O,O,O, O,X,O,X,O,X, 0,1}, //24
   {O,O,O,O, X,O,X,O,X,O, 0,1}, //25
   {O,O,O,O, X,O,O,X,O,X, 0,1}, //26
   {O,O,O,O, O,X,X,O,X,O, 0,1}, //27  
   {O,O,O,O, O,X,X,O,X,O, 0,1}, //28  
   {O,O,O,O, X,O,O,X,O,X, 0,1}, //29  
   {O,O,O,O, X,O,O,X,O,X, 0,1}, //30 
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //31  
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //32  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //33  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //34  
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //35
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //36
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //37
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //38
   {O,O,O,O, O,X,O,O,O,O, 0,1}, //39
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //40
   
   {O,O,O,O, X,X,X,X,X,X, 40,1},//1  //PATTERN 5(4)-----------------V4  OFFSET  122
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //2  
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //3  
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //4  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //5
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //6
   {O,O,O,O, X,O,O,O,X,X, 0,1}, //7
   {O,O,O,O, O,X,X,X,O,O, 0,1}, //8
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //9
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //10
   {O,O,O,O, X,O,O,O,X,X, 0,1}, //11 
   {O,O,O,O, O,X,X,X,O,O, 0,1}, //12
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //13  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //14  
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //15  
   {O,O,O,O, O,X,O,O,X,X, 0,1}, //16
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //17  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //18  
   {O,O,O,O, X,O,O,X,O,X, 0,1}, //19
   {O,O,O,O, O,X,O,X,O,X, 0,1}, //20
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //21
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //22
   {O,O,O,O, X,O,X,O,X,O, 0,1}, //23
   {O,O,O,O, O,X,X,O,X,O, 0,1}, //24
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //25
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //26
   {O,O,O,O, X,O,O,X,X,O, 0,1}, //27  
   {O,O,O,O, O,X,O,X,X,O, 0,1}, //28  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //29  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //30 
   {O,O,O,O, X,O,X,O,O,X, 0,1}, //31  
   {O,O,O,O, O,X,X,O,O,X, 0,1}, //32  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //33  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //34  
   {O,O,O,O, X,O,O,X,X,X, 0,1}, //35
   {O,O,O,O, O,X,X,O,X,X, 0,1}, //36
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //37 
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //38
   {O,O,O,O, X,O,X,X,O,X, 0,1}, //39
   {O,O,O,O, O,X,X,X,X,O, 0,1}, //40
   
   {O,O,O,O, X,X,X,X,O,O, 40,1},//1  //PATTERN 6(5)-----------------V5  OFFSET  162
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //2  
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //3  
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //4  
   {O,O,O,O, O,O,O,O,X,X, 0,1}, //5
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //6
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //7
   {O,O,O,O, O,X,O,O,X,X, 0,1}, //8
   {O,O,O,O, O,O,X,X,O,O, 0,1}, //9
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //10
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //11 
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //12
   {O,O,O,O, O,O,O,O,X,X, 0,1}, //13  
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //14  
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //15  
   {O,O,O,O, O,X,O,O,X,X, 0,1}, //16
   {O,O,O,O, O,O,X,X,O,O, 0,1}, //17  
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //18  
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //19
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //20
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //21
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //22
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //23
   {O,O,O,O, O,X,O,O,X,X, 0,1}, //24
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //25
   {O,O,O,O, X,X,O,O,O,O, 0,1}, //26
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //27  
   {O,O,O,O, X,X,O,O,O,O, 0,1}, //28  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //29  
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //30 
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //31  
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //32  
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //33  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //34  
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //35
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //36
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //37
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //38
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //39
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //40
   
   {O,O,O,O, O,O,O,O,O,X, 40,1},//1  //PATTERN 7(6)-----------------V6  OFFSET  202
   {O,O,O,O, O,O,O,X,O,O, 0,1}, //2  
   {O,O,O,O, O,O,O,O,O,X, 0,1}, //3  
   {O,O,O,O, O,O,O,X,O,O, 0,1}, //4  
   {O,O,O,O, O,O,O,O,X,X, 0,1}, //5
   {O,O,O,O, O,O,X,X,O,O, 0,1}, //6
   {O,O,O,O, O,O,O,O,X,X, 0,1}, //7
   {O,O,O,O, O,O,X,X,O,O, 0,1}, //8
   {O,O,O,O, O,O,O,O,X,O, 0,1}, //9
   {O,O,O,O, O,O,X,O,O,O, 0,1}, //10
   {O,O,O,O, O,O,O,O,X,O, 0,1}, //11 
   {O,O,O,O, O,O,X,O,O,O, 0,1}, //12
   {O,O,O,O, O,O,X,O,X,O, 0,1}, //13  
   {O,O,O,O, O,O,O,X,O,X, 0,1}, //14  
   {O,O,O,O, O,O,X,O,X,O, 0,1}, //15  
   {O,O,O,O, O,O,O,X,O,X, 0,1}, //16
   {O,O,O,O, O,O,X,O,X,O, 0,1}, //17  
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //18  
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //19
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //20
   {O,O,O,O, O,X,O,O,O,O, 0,1}, //21
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //22
   {O,O,O,O, O,X,O,O,O,O, 0,1}, //23
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //24
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //25
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //26
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //27  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //28  
   {O,O,O,O, X,O,O,X,O,O, 0,1}, //29  
   {O,O,O,O, X,O,O,X,O,X, 0,1}, //30 
   {O,O,O,O, X,O,X,X,O,X, 0,1}, //31  
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //32  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //33  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //34  
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //35
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //36
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //37
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //38
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //39
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //40
   
   {O,O,O,O, O,O,O,O,O,O, 40,1},//1  //PATTERN 8(7)-----------------V7  OFFSET  242
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //2  
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //3  
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //4  
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //5
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //6
   {O,O,O,O, X,X,O,O,X,X, 0,1}, //7
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //8
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //9
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //10
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //11 
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //12
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //13  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //14  
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //15  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //16
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //17  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //18  
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //19
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //20
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //21
   {O,O,O,O, X,X,O,O,O,O, 0,1}, //22
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //23
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //24
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //25
   {O,O,O,O, O,O,O,O,X,X, 0,1}, //26
   {O,O,O,O, O,O,X,X,O,O, 0,1}, //27  
   {O,O,O,O, O,X,O,O,X,X, 0,1}, //28  
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //29  
   {O,O,O,O, O,O,O,O,O,X, 0,1}, //30 
   {O,O,O,O, O,O,O,X,O,O, 0,1}, //31  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //32  
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //33  
   {O,O,O,O, O,O,O,O,X,O, 0,1}, //34  
   {O,O,O,O, O,O,X,O,O,O, 0,1}, //35
   {O,O,O,O, O,O,O,O,O,X, 0,1}, //36
   {O,O,O,O, O,O,X,O,O,O, 0,1}, //37
   {O,O,O,O, X,O,O,O,X,X, 0,1}, //38
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //39
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //40
   
   {O,O,O,O, X,X,X,X,X,X, 40,1},//1  //PATTERN 9(8)-----------------V8  OFFSET  282
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //2  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //3  
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //4  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //5
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //6
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //7
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //8
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //9
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //10
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //11 
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //12
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //13  
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //14  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //15  
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //16
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //17  
   {O,O,O,O, O,X,O,O,O,O, 0,1}, //18  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //19
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //20
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //21
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //22
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //23
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //24
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //25
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //26
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //27  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //28  
   {O,O,O,O, X,X,X,X,X,O, 0,1}, //29  
   {O,O,O,O, X,X,X,X,O,O, 0,1}, //30 
   {O,O,O,O, X,X,X,O,O,O, 0,1}, //31  
   {O,O,O,O, X,X,O,O,O,O, 0,1}, //32  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //33  
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //34  
   {O,O,O,O, X,O,O,O,X,X, 0,1}, //35
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //36
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //37
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //38
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //39
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //40
   
   {O,O,O,O, X,X,X,X,X,X, 40,1},//1  //PATTERN 10(9)-----------------V9  OFFSET  322
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //2  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //3  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //4  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //5
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //6
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //7
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //8
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //9
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //10
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //11 
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //12
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //13  
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //14  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //15  
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //16
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //17  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //18  
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //19
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //20
   {O,O,O,O, O,O,X,X,X,X, 0,1}, //21
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //22
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //23
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //24
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //25
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //26
   {O,O,O,O, X,O,O,O,X,X, 0,1}, //27  
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //28  
   {O,O,O,O, X,O,X,X,X,X, 0,1}, //29  
   {O,O,O,O, O,X,O,O,O,O, 0,1}, //30 
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //31  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //32  
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //33  
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //34  
   {O,O,O,O, O,O,O,O,O,O, 0,1}, //35
   {O,O,O,O, X,O,O,O,O,O, 0,1}, //36
   {O,O,O,O, O,X,X,X,X,X, 0,1}, //37
   {O,O,O,O, X,O,X,X,O,O, 0,1}, //38
   {O,O,O,O, X,O,O,O,X,X, 0,1}, //39
   {O,O,O,O, X,X,X,X,X,X, 0,1}, //40
   
   {O,O,O,O, O,O,O,O,O,O, 1,1}, // PATTERN 11(10)--------------DUMMY PLACEHOLDER OFFSET 362
   
   {O,O,O,O, O,O,O,O,O,O, 1,1}, // PATTERN 12(11)--------------DUMMY PLACEHOLDER OFFSET 363
  
   {O,O,O,O, O,O,O,O,O,O, 1,1}, // PATTERN 13(12)--------------DUMMY PLACEHOLDER OFFSET 364
   
   {O,O,O,O, O,O,O,O,O,O, 1,1}, // PATTERN 14(13)--------------DUMMY PLACEHOLDER OFFSET 365
   
   {O,O,O,O, O,O,O,O,O,O, 1,1}, // PATTERN 15(14)--------------DUMMY PLACEHOLDER OFFSET 366
   
   {O,O,O,O, O,O,O,O,O,O, 1,1}//1  //PATTERN 16(15)-----------DUMMY PLACEHOLDER OFFSET 367    
};


