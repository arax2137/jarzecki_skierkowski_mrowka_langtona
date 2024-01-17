#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <wchar.h>
#include "macro.h"
#include <time.h> 



/*
inicjuje plansze
*/
wchar_t** boardInit(int r, int c);





/*
generuje plansze o wymiarach r x c
kierunek mrówki okresla dir {u,d,l,r}
randP okresla % losowo pokolorowanych pol
*/
wchar_t** boardGen(int r, int c, char dir, int randP);


/*
nie działa
wczytuje plansze o wymiarach r x c
z pliku o nazwie name
*/
wchar_t** boardLoad(int r, int c, char* name);
