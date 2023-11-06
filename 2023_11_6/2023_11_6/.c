#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		if (i == 5)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)//可以调语句顺序
//	{
//	default:
//		printf("hehe\n");
//		break;
//	case 1:    //case后必须是整型
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 1:
//			printf("first");
//			break;
//		case 2:
//			printf("second");
//			break;
//		default:
//			printf("hello");
//			break;
//		}
//	case 2:
//		printf("third\n");
//	}
//	return 0;
//}
//数三个数 输出max-min
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (a < c)
//	{
//		tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//		tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d\n%d\n%d\n", a, b, c);
//
//	return 0;
//}
//void Swap(int* x, int* y)
//{
//	int w = *y;
//	*y = *x;
//	*x = w;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//		Swap(&a,&b);
//	if (a < c)
//		Swap(&a,&c);
//	if (b < c)
//		Swap(&b,&c);
//	printf("%d\n%d\n%d\n",a,b,c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i+=3)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
// g两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//	return 0;
//}
//辗转相除法

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	
//	while (c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 0; int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			//break;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//1-100出现多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
// 
//	return 0;
//}
// 
//计算1/1-1/2+1/3-1/4...
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = -1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//找一个最大的

//int main()
//{
//	int arr[10] = {0};//元素数10不能省略
//	int i = 0;
//	while(i<10)
//	{ 
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	
//	int max = arr[0];
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
//乘法口诀表

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j, i * j);// 2右对齐 -2左对齐
//		printf("\n");
//	}
//
//	return;
//}

void pr_table(int n)
{
	int i = 0;
		for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
			printf("%d*%d=%-2d ", i, j, i * j);// 2右对齐 -2左对齐
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	pr_table(n);

	return 0;
}