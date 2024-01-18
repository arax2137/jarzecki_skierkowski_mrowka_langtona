#include "macro.h"
#include"board.h"
#include "fhandling.h"
#include "getopt.h"
#include "move.h"


int main(int argc, char **argv) {
    
    setlocale(LC_ALL, "");

    //parametry i ich domyslne wartosci
    int r = 50; //liczba rzedow
    int c = 50; //liczba kolumn
    int randP = 0; // procent czarnych pol - <0%, 100%> def = 0
    char dir = 'u'; //kierunek u/d/r/l
    char* nameOut = malloc(MAXNAME); //nazwa pliku wyjsciowy
    int outFlag = 0; //okresla czy podano nazwe pliku wyjsciowego
    char* nameIn = malloc(MAXNAME); //nazwa pliku wejsciowego
    int inFlag = 0;//okresla czy podano nazwe pliku wejsciowego
    int it = 20; //liczba iteracji

    opterr = 0;
    
    int option;
    while ((option = getopt_a(argc, argv, "m:n:i:f:d:l:r:")) != -1)
    {
        switch (option)
        {
        case 'm':
            r = atoi(optarg_a);
            break;
        case 'n':
            c = atoi(optarg_a);
            break;
        case 'i':
            it = atoi(optarg_a);
            break;
        case 'f':
            strcpy(nameOut, optarg_a);
            outFlag = 1;
            break;
        case 'd':
            dir = optarg_a[0];
            break;
        case 'l':
            strcpy(nameIn, optarg_a);
            inFlag = 1;
            break;
        case 'r':
            randP = atoi(optarg_a);
            break;
        }
    }
    

    //walidacja danych
    {
        if (dir != 'u' && dir != 'd' && dir != 'l' && dir != 'r')
        {
            fprintf(stderr, "Wprowadz prawidlowy kierunek mrowki");
            return 1;
        }
        if (r < 1 || c < 1)
        {
            fprintf(stderr, "Wprowadz prawidlowe rozmiary planszy");
            return 1;
        }
        if (it < 1)
        {
            fprintf(stderr, "Wprowadz prawidlowa liczbe iteracji");
            return 1;
        }
        if (randP < 0)
        {
            fprintf(stderr, "Wprowadz prawidlowy procent losowych czarnych pol");
            return 1;
        }
    }
    //printf("r = %d, c = %d, it = %d, randP = %d\n, dir = %c, nameOut = %s, nameIn = %s", r, c, it, randP, dir, nameOut, nameIn)


    if (!outFlag)
        strcpy(nameOut, "stdout");
    wchar_t** board;
    if(inFlag)
        board = boardLoad(r, c, nameIn);
    else
        board = boardGen(r, c, dir, randP);

    for (int i = 0; i < it; i++)
    {
        printBoard(board, r, c, fileName(nameOut, i));
        przejscie(board, r + 2, c + 2);
        if (!outFlag)
            Sleep(500);

    }
    
    return 0;
}