#include "board.h"
#include "encoding.h"



wchar_t **genBoard(int r, int c, char dir)
{
    int y_ant = r / 2;
    int x_ant = c / 2;

    r += 2;
    c += 2;

    wchar_t** board = malloc(r * sizeof(wchar_t*));
    for (int i = 0; i < r; i++)
        board[i] = malloc(c * sizeof(wchar_t));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            board[i][j] = WHITE_SQUARE;

    for (int i = 0; i < c; i++)
    {
        board[0][i] = HORIZONTAL_L;
        board[r-1][i] = HORIZONTAL_L;
    }

    for (int i = 0; i < r; i++)
    {
        board[i][0] = VERTICAL_L;
        board[i][c-1] = VERTICAL_L;
    }

    board[0][0] = TOP_LEFT;
    board[0][c-1] = TOP_RIGHT;
    board[r-1][0] = BOTTOM_LEFT;
    board[r-1][c-1] = BOTTOM_RIGHT;

    switch (dir)
    {
    case 'u':
        board[y_ant][x_ant] = ARROW_NORTH_WHITE;
        break;
    case 'd':
        board[y_ant][x_ant] = ARROW_SOUTH_WHITE;
        break;
    case 'r':
        board[y_ant][x_ant] = ARROW_EAST_WHITE;
        break;
    case 'l':
        board[y_ant][x_ant] = ARROW_WEST_WHITE;
        break;
    }
    




    return board;

}

void printBoard(wchar_t** board, int r, int c)
{
    r += 2;
    c += 2;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%lc", board[i][j]);
        }
        printf("\n");
    }
}