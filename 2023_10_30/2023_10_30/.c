#define _CRT_SECURE_NO_WARNINGS 1
#define RAND_MAX 0x7fff
#include <stdio.h>

//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "Mr.liu is your father !!!";
//	char arr2[] = "#########################";
//	int left = 0;
//	//int right = strlen(arr2) - 1;
//	while (left <25)
//	{
//		arr2[left] = arr1[left];
//		//arr2[right] = arr1[right];
//		printf("\t%s\n", arr2);
//		//�����Ļ
//		Sleep(500);
//		system("cls");
//		left++;
//		//right--;
//		
//	}
//	printf("\t�հ��� sons ����!\n");
//	return 0;
//}
//���Բ���

#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("**********************\n");
	printf("******  1.play  ******\n");
	printf("******  0.exit  ******\n");
	printf("**********************\n");
}
//0~RAND_MAX(32767)//ʱ���
void game()
{

	//���������
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	int guess;
	while (1)
	{
		printf("\n");
		scanf("%d", &guess);
		if (guess < ret)
			printf("small\t");
		else if (guess > ret)
			printf("big\t");
		else
		{
			printf("you win the game!!!\n");
			break;
		}
	}
}
int main()
{	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��(1/0)\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("Game starting������\n");
			printf("Guass numbers 1--100\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������\n"); 
			break;
		}
	} while (input);
	return 0;
}