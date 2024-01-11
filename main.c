#include <stdio.h>
#include<stdlib.h>
#include <wchar.h>
#include <locale.h>
#include"board.h"
#include "encoding.h"




int main() {

    setlocale(LC_ALL, "");

    wchar_t** board = genBoard(10, 10, 'l');

    printBoard(board, 10, 10);
    return 0;
}