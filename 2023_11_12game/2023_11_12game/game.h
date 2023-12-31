#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define Ecount 40

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);

void Display(char board[ROWS][COLS], int row, int col);

void Setmine(char board[ROWS][COLS], int row, int col);

void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);