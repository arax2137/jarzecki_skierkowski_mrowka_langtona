#include <stdio.h>
#include<stdlib.h>
#include <wchar.h>
#include<string.h>
#include <locale.h>
#include"board.h"
#include "encoding.h"
#include "fhandling.h"



int main() {

    setlocale(LC_ALL, "");

    char* name = "aaa";

    wchar_t** board = genBoard(10, 10, 'u');

    for (int i = 0; i < 10; i++)
    {
        char* fname = fileName(name, i);
        printBoard(board, 10, 10, fname);
    }

    
    
    return 0;
}