#include <stdio.h>
#include<stdlib.h>
#include <wchar.h>
#include "encoding.h"

/*
generuje plansze o wymiarach r x c
kierunek mrówki okresla dir {u,d,l,r}
*/
wchar_t** genBoard(int r, int c, char dir);
/*
wyswietla plansze o wymiarach r x c
*/
void printBoard(wchar_t** board, int r, int c);

    
