#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <wchar.h>
#include<string.h>
#include <locale.h>
#include <time.h> 
#include<math.h>
#include<Windows.h>

#define MAX_IT_LEN 10
#define MAXNAME 128

#define BLACK_SQUARE L'█'    
#define WHITE_SQUARE L' '          

#define TOP_LEFT L'┌'        
#define TOP_RIGHT L'┐'       
#define HORIZONTAL_L L'─'    
#define VERTICAL_L L'│'      
#define BOTTOM_LEFT L'└'     
#define BOTTOM_RIGHT L'┘'    

#define ARROW_NORTH_WHITE L'△'
#define ARROW_NORTH_BLACK L'▲'
#define ARROW_EAST_WHITE L'▷'
#define ARROW_EAST_BLACK L'▶'
#define ARROW_SOUTH_WHITE L'▽'
#define ARROW_SOUTH_BLACK L'▼'
#define ARROW_WEST_WHITE L'◁'
#define ARROW_WEST_BLACK L'◀'
   