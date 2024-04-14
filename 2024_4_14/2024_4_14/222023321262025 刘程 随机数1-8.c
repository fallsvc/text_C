#define _CRT_SECURE_NO_WARNINGS
//vs2022

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10

void setNumber(int arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 8;
		}
	}
}

void print(int arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[ROWS][COLS] = { 0 };
	srand((unsigned int)time(NULL));
	setNumber(arr);

	print(arr);
	return 0;
}