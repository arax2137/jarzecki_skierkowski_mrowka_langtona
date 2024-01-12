#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <wchar.h>
#include "macro.h"
#include<string.h>
#include<math.h>
#include<Windows.h>
#define MAX_IT_LEN 10

/*
zwraca nazwe pliku po podaniu przedrostka i iteracji
*/
char* fileName(char* name, int it);

/*
wyswietla/wpisuje do pliku plansze o wymiarach r x c 
*/
void printBoard(wchar_t** board, int r, int c, char* fname);




