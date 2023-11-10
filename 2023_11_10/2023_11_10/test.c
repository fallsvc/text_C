#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 void menu()
{
	printf("###########################\n");
	printf("###### 1.play 0.exit ######\n");
	printf("###########################\n");
}
 void game()
 {
	 char board[3][3] = { 0 };

}
int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋 启动！！！\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}

	} while (input);

	return 0;
}