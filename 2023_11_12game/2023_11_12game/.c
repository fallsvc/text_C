#include "game.h"

void menu()
{
	printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
	printf("&&&&&&&&&& 1. play &&&&&&&&&&&&\n");
	printf("&&&&&&&&&& 0. exit &&&&&&&&&&&&\n");
	printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好雷的位置
	char show[ROWS][COLS] = { 0 };//存放排查出雷的信息
	//初始化 array
	//mine 没有布置雷的全为 '0'
	InitBoard(mine, ROWS, COLS,'0');
	//show 没有排雷是 都是 ’*‘
	InitBoard(show, ROWS, COLS,'*');

	
	// //设置雷
	Setmine(mine, ROW, COL);
	//Display(mine, ROW, COL);
	Display(show, ROW, COL);
	Findmine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));

	do
	{
		menu();
		printf("Please select:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("Start! \n");
			game();
			break;
		case 0:
			printf("Exit!");
			break;
		default:
			printf("Input error!Again");
			break;
		}
	} while (input);

	return 0;
}