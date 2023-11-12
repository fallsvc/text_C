#include "game.h"
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void Display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------扫雷游戏------\n");
	printf("0  ");
	for (j = 1; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d  ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------扫雷游戏------");
}
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = Ecount;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int mine_count(char board[ROWS][COLS],int x,int y)
{
	return (board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8 * '0');
}

void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	
	while (win<row*col-Ecount)
	{
		printf("请输入排查坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
				printf("已经排查过不能重复排查");
			else
			{
				if (mine[x][y] == '1')
				{
					printf("\n\n");
					printf("you lose!!!\n");
					Display(mine, ROW, COL);
					printf("\n\n");
					break;
				}
				else
				{
					win++;
					int count = mine_count(mine, x, y);
					show[x][y] = count + '0';
					Display(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("输入错误，请重新输入");
		}
	}
	if (win == row * col - Ecount)
	{
		printf("Win the game!!!");
		Display(mine, ROW, COL);
	}
}