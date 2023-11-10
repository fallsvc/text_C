
#include "game.h"
void menu()
{
	printf("###########################\n");
	printf("###### 1.play 0.exit ######\n");
	printf("###########################\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{

		PlayerMove(board, ROW, COL);
		ret=Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		
		ComputerMove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("���Ӯ������");
	}
	else if (ret == '#')
	{
		printf("����Ӯ������");
	}
	else
	{
		printf("ƽ�֣�");
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������ ����������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}

	} while (input);

	return 0;
}