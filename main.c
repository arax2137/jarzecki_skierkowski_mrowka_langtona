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

    int it = 1;
    int x = 100;
    int y = 50;
    char dir = 'u';
    char* nameOut = "test";
    //char* nameIn = "test.txt";

    wchar_t** board = genBoard(x, y, dir);

    for (int i = 0; i < it; i++)
    {
        printBoard(board, x, y, fileName(nameOut, i));
    }

    
    

    
    
    return 0;
}