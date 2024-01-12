#include "fhandling.h"

char* fileName(char* name, int it)
{

    if (strcmp(name, "stdout") == 0)
        return "stdout";


    char *fname = malloc(sizeof(name)+1+10);

    sprintf(fname, "%s_%d.txt", name, it);

    return fname;

}

void printBoard(wchar_t** board, int r, int c, char *fname) 
{

    
    FILE* out;
    if (strcmp(fname, "stdout") == 0)
    {
        out = stdout;
        system("cls");
    }

    else
    {
        out = fopen(fname, "w");
    }

    if (out == NULL)
    {
        printf("NIE MOGE STWORZYC PLIKU\n");
        return 1;
    }   

    r += 2;
    c += 2;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            fprintf(out, "%lc", board[i][j]);
        }
        fprintf(out, "\n");
    }
}
