#include <stdio.h>
#include<stdlib.h>
#include <wchar.h>
#include<string.h>
#include <locale.h>
#include"board.h"
#include "macro.h"
#include "fhandling.h"



int main() {

    setlocale(LC_ALL, "");

    //parametry
    int it = 1;
    int r = 35;
    int c = 70;
    int randP = 50; // <0%, 100%>
    char dir = 'u';
    char* nameOut = "los_test";
     //char* nameIn = "aaa_0.txt";
     
     
     
    //wchar_t** board = boardLoad(x, y, nameIn);

    wchar_t** board = boardGen(r, c, dir, randP);

    for (int i = 0; i < it; i++)
    {
        printBoard(board, r, c, fileName(nameOut, i));
    }
    
    

    
    
    return 0;
}