#include "macro.h"

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
