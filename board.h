#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <wchar.h>
#include "macro.h"

/*
generuje plansze o wymiarach r x c
kierunek mrówki okresla dir {u,d,l,r}
*/
wchar_t** genBoard(int r, int c, char dir);


/*
wczytuje plansze o wymiarach r x c
z pliku o nazwie name
*/
wchar_t** loadBoard(int r, int c, char* name);
