#include "move.h"

void przejscie(wchar_t **board,int r,int c)
{
    for (int i = 1; i < r-1; i++)
    {
        for (int j = 1; j < c-1; j++)
        {
            if (board[i][j] == ARROW_NORTH_WHITE)
            {
                if (board[i][j + 1] == VERTICAL_L || board[i][j + 1] == HORIZONTAL_L)
                    system("PAUSE");
                board[i][j] = BLACK_SQUARE;
                if (board[i][j+1] ==WHITE_SQUARE)
                    board[i][j+1] = ARROW_EAST_WHITE;
                else
                    board[i][j+1] = ARROW_EAST_BLACK;
                return;
            }
           else if (board[i][j] == ARROW_SOUTH_WHITE)
            {
                if (board[i][j-1] == VERTICAL_L || board[i][j-1] == HORIZONTAL_L)
                    system("PAUSE");
                board[i][j] = BLACK_SQUARE;
                if (board[i][j-1] == WHITE_SQUARE)
                    board[i][j-1] = ARROW_WEST_WHITE;
                else
                    board[i][j-1] = ARROW_WEST_BLACK;
                return;
            }
            else if (board[i][j] == ARROW_WEST_WHITE)
            {
                if (board[i-1][j] == VERTICAL_L || board[i-1][j] == HORIZONTAL_L)
                    system("PAUSE");
                board[i][j] = BLACK_SQUARE;
                if (board[i-1][j] == WHITE_SQUARE)
                    board[i-1][j] = ARROW_NORTH_WHITE;
                else
                    board[i-1][j] = ARROW_NORTH_BLACK;
                return;
            }
            else if (board[i][j] == ARROW_EAST_WHITE)
            {
                if (board[i+1][j] == VERTICAL_L || board[i+1][j] == HORIZONTAL_L)
                    system("PAUSE");
                board[i][j] =BLACK_SQUARE;
                if (board[i+1][j] == WHITE_SQUARE)
                    board[i+1][j] = ARROW_SOUTH_WHITE;
                else
                    board[i+1][j] = ARROW_SOUTH_BLACK;
                return;
            }
            else if (board[i][j] == ARROW_NORTH_BLACK)
            {
                if (board[i][j-1] == VERTICAL_L || board[i][j-1] == HORIZONTAL_L)
                    system("PAUSE");
                board[i][j] = WHITE_SQUARE;
                if (board[i][j-1] == WHITE_SQUARE)
                    board[i][j-1] = ARROW_WEST_WHITE;
                else
                    board[i][j-1] =ARROW_WEST_BLACK;
                return;
            }
            else if (board[i][j] == ARROW_SOUTH_BLACK)
            {
                if (board[i][j+1] == VERTICAL_L || board[i][j+1] == HORIZONTAL_L)
                    system("PAUSE");
                board[i][j] =WHITE_SQUARE;
                if (board[i][j+1] == WHITE_SQUARE)
                    board[i][j+1] = ARROW_EAST_WHITE;
                else
                    board[i][j+1] = ARROW_EAST_BLACK;
                return;
            }
            else if (board[i][j] == ARROW_WEST_BLACK)
            {
                if (board[i+1][j] == VERTICAL_L || board[i+1][j] == HORIZONTAL_L)
                    system("PAUSE");
                board[i][j] = WHITE_SQUARE
                if (board[i+1][j] == WHITE_SQUARE)
                    board[i+1][j] = ARROW_SOUTH_WHITE;
                else
                    board[i+1][j] = ARROW_SOUTH_BLACK;
                return;
            }
            else if (board[i][j] == ARROW_EAST_BLACK)
            {
                if (board[i-1][j] == VERTICAL_L || board[i-1][j] == HORIZONTAL_L)
                    system("PAUSE");
                board[i][j] =WHITE_SQUARE;
                if (board[i-1][j] == WHITE_SQUARE)
                    board[i-1][j] = ARROW_NORTH_WHITE;
                else
                    board[i-1][j] = ARROW_NORTH_BLACK;
                return;
            }
        }
    }
}
