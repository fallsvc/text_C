#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	system("shutdown -s -t 0");
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d]=%2d", i, j, arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a >> 1;
//	printf("b=%d\n", b);
//
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int g, s, b;
//	for (b = 1; b < 5; b++)
//	{
//		for (s = 1; s < 5; s++)
//		{
//			for (g = 1; g < 5; g++)
//			{
//				if (g != b && g != s && s != b)
//				{
//					printf("%d,%d,%d\n", b, s, g);
//					count++;
//				}
//			}
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i=0;
//	int j = 0;
//	for (i = 2; i <= 168 / i; i++)
//	{
//		if (168 % i == 0)
//		{
//			j = 168 / i;
//			int n = (i - j) / 2;
//			int x = n * n - 100;
//			printf("%d\n", x);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//
//	scanf("%d %d %d", &a, &b, &c);
//	printf("max=%d\n", c > ((a > b) ? a : b) ? c : ((a > b) ? a : b));
//	printf("min=%d\n", c > ((a > b) ? b : a) ? ((a > b) ? b : a) : c);
//
//	return 0;
//}
// study
// �������ƣ�
// & ��λ��
// | ��λ�� 
// ^ ��λ��� ��ͬΪ0��������1
//int main()
//{
//	int a = 3;
//	int b = -5;
//	//int c = a & b;
//	//int c = a | b;
//	  int c=a^b;
//	//00000000000000000000000000000011  3�Ĳ���
//	//11111111111111111111111111111011   -5�Ĳ���
////a&b 00000000000000000000000000000011 ����
////a|b 11111111111111111111111111111011 ����
//	printf("%d", c);
//
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("q  a=%d b=%d\n", a, b);
//	a = a + b;    ///a�������������
//	b = a - b;
//	a = a - b;
//	printf("h  a=%d b=%d\n", a, b);
//
//	return 0;
//}
// a^a=a
// 0^a=a
// a^b^a=a^a^b  //֧�ֽ�����
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("q  a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("h  a=%d b=%d\n", a, b);
//
//	return 0;
//}

//���� 1�ĸ���
//int bu(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n & 1) == 1)
//		{
//			count++;
//			n = n >> 1;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	count=bu(n);
//	printf("%d����1�ĸ�����%d\n",n, count);
//
//	return 0;
//}
//    ��ֵ������ = //�������� 
// 
// �ж� ==
//int main()
//{
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	y = x = a - 1;
//	printf("%d %d %d\n", a, x, y);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	a = a + 5;
//	a += 5;
//	a = a >> 5;
//	a >>= 5;
//	return 0;
//}
// ��Ŀ������  һ��������
// !  �߼���
//int main()
//{
//	int flag = 3;
//	//flagΪ�����if
//	if (flag)
//	{
//
//	}
//	// flagΪ�ٽ���
//	if (!flag)
//	{
//
//	}
//	return 0;
//}
// + -
//int main()
//{
//	int a = -5;
//	int b = -a;
//	printf("b=%d\n", b);
//
//	return 0;
//}
// &
int main()
{
	int arr[5] = { 0 };
	/*int a = 10;
	printf("%p\n", &a);*/
	int n = 0;
	printf("n=%d\n", sizeof(n));
	printf("  %d\n", sizeof(int));
	printf("  %d\n", sizeof(arr));
	return 0;
}