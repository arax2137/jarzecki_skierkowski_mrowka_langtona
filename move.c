#include <stdio.h>
#include<stdlib.h>
#include <wchar.h>
#include<string.h>
#include "macro.h"

void przejscie(wchar_t **board,int r,int c)
{
    for (int i = 1; i < r-1; i++)
    {
        for (int j = 1; j < c-1; j++)
        {
            if (board[i][j] == 'u')
            {
                if (board[i][j + 1] == 's' || board[i][j + 1] == 's')
                    system("PAUSE");
                board[i][j] = 'c';
                if (board[i][j+1] == 'b')
                    board[i][j+1] = 'r';
                else
                    board[i][j+1] = '>';
                return;
            }
           else if (board[i][j] == 'd')
            {
                if (board[i][j-1] == 's' || board[i][j-1] == 's')
                    system("PAUSE");
                board[i][j] = 'c';
                if (board[i][j-1] == 'b')
                    board[i][j-1] = 'l';
                else
                    board[i][j-1] = '<';
                return;
            }
            else if (board[i][j] == 'l')
            {
                if (board[i-1][j] == 's' || board[i-1][j] == 's')
                    system("PAUSE");
                board[i][j] = 'c';
                if (board[i-1][j] == 'b')
                    board[i-1][j] = 'u';
                else
                    board[i-1][j] = '^';
                return;
            }
            else if (board[i][j] == 'r')
            {
                if (board[i+1][j] == 's' || board[i+1][j] == 's')
                    system("PAUSE");
                board[i][j] = 'c';
                if (board[i+1][j] == 'b')
                    board[i+1][j] = 'd';
                else
                    board[i+1][j] = 'v';
                return;
            }
            else if (board[i][j] == '^')
            {
                if (board[i][j-1] == 's' || board[i][j-1] == 's')
                    system("PAUSE");
                board[i][j] = 'b';
                if (board[i][j-1] == 'b')
                    board[i][j-1] = 'l';
                else
                    board[i][j-1] = '<';
                return;
            }
            else if (board[i][j] == 'v')
            {
                if (board[i][j+1] == 's' || board[i][j+1] == 's')
                    system("PAUSE");
                board[i][j] = 'b';
                if (board[i][j+1] == 'b')
                    board[i][j+1] = 'r';
                else
                    board[i][j+1] = '>';
                return;
            }
            else if (board[i][j] == '<')
            {
                if (board[i+1][j] == 's' || board[i+1][j] == 's')
                    system("PAUSE");
                board[i][j] = 'b';
                if (board[i+1][j] == 'b')
                    board[i+1][j] = 'd';
                else
                    board[i+1][j] = 'v';
                return;
            }
            else if (board[i][j] == '>')
            {
                if (board[i-1][j] == 's' || board[i-1][j] == 's')
                    system("PAUSE");
                board[i][j] = 'b';
                if (board[i-1][j] == 'b')
                    board[i-1][j] = 'u';
                else
                    board[i-1][j] = '^';
                return;
            }
        }
    }
}
