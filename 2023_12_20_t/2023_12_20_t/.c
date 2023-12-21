#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//一个整数一位为奇数变为1  偶数变为0
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int m = 1;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (n % 10 % 2)
//		{
//			sum += 1 * m;
//		}
//		m *= 10;
//		n /= 10;
//	}
//	printf("%d\n", sum);
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
//				if (j + i < n - 1)
//					printf("  ");
//				else
//					printf("* ");
//			}
//			printf("\n");
//
//			/*for (j = 0; j < (n - i - 1) * 2; j++)
//			{
//				printf(" ");
//			}
//				
//			for (j = 0; j < i + 1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");*/
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//输入
//	double price = 0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%lf %d %d %d", &price, &m, &d, &flag);
//	//计算
//	if (m == 11 && d == 11)
//	{
//		price = price * 0.7 - flag * 50;
//	}
//	else if (m == 12 && d == 12)
//	{
//		price = price * 0.8 - flag * 50;
//	}
//	//输出
//	if (price)
//		printf("%.2lf\n", price);
//	else
//		printf("%.2lf\n",0);
//
//	return 0;
//}