#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	unsigned int c = rand() % 10;
//	printf("%u\n", c);
//	return 0;
//}

//��ӡ����������ż��λ������λ�Ͷ���������

//10
//000000000000000000000000000001010
//
//int main()
//{
//	int i = 0;
//	int num =0 ;
//	scanf("%d", &num);
//	//����λ����
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//ż��
//	for (i = 31; i > 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}
///ȫ�ֱ��� ��̬�������ھ�̬�� δ��ʼ��Ϊ0  
// �ֲ����� ����ջ��          δ��ʼ��Ϊ���ֵ
//int i;
//int main()
//{
//	i--;
//	//sizeof()���� size_t���� �޷�������
//	//�з��ŵ��޷���
//	if (i > sizeof(i))//-1ת��Ϊ�޷�����
//	{				  //11111111111111111111111111111110
//					  //01111111111111111111111111111111ת��Ϊ
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if ((i + j) ==( n - 1))
//					printf("*");
//				else
//					printf(" ");
//
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int is_leap(int y)
//{
//	/*if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else 
//		return 0;*/
//
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));// return 1 or 0;
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d%d", &y, &m))
//	{
//		int d = day[m];
//		if ((is_leap(y)==1)&&(m==2))
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//	return 0;
//}
//#include <string.h>
//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[50] = { 0 };
//	scanf("%s", arr);
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
