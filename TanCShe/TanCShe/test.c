#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include "snake.h"

void test()
{
	char ch = 0;
	do
	{
		system("cls");
		//����
		Snake snake = { 0 };
		//��ʼ��
		//1.��ӡ��������
		//2�����ܽ���
		//3.���Ƶ�ͼ
		//4.������
		//5.����ʳ��
		//6.������Ϸ�����Ϣ

		GameStart(&snake);
		////����
		GameRun(&snake);

		////����
		GameEnd(&snake);
		SetPos(20, 15);
		printf("����һ�֣�(Y/N):");
		ch = getchar();
		while (getchar() != '\n');

	} while (ch == 'y' || ch == 'Y');
}
int main()
{
	//���䱾�ػ���
	setlocale(LC_ALL, "");
	srand(time(NULL));

	test();
	return 0;
}
