#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include "snake.h"

void test()
{
	char ch = 0;
	do
	{
		system("cls");
		//创建
		Snake snake = { 0 };
		//初始化
		//1.打印环境界面
		//2。功能介绍
		//3.绘制地图
		//4.创建射
		//5.创建食物
		//6.设置游戏相关信息

		GameStart(&snake);
		////运行
		GameRun(&snake);

		////结束
		GameEnd(&snake);
		SetPos(20, 15);
		printf("再来一局？(Y/N):");
		ch = getchar();
		while (getchar() != '\n');

	} while (ch == 'y' || ch == 'Y');
}
int main()
{
	//适配本地环境
	setlocale(LC_ALL, "");
	srand(time(NULL));

	test();
	return 0;
}
