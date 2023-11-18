#define _CRT_SECURE_NO_WARNINGS 1
//practice
#include <stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c = fib(n);
//	printf("%d\n", c);
//	
//	return 0;
//}
// delete elements
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// //x
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		{
//			if (arr[i] > max)
//				max = arr[i];
//			if (arr[i] < min)
//				min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//	return 0;
//}
//int main()
//{
//	char ch = 0;
// //scanf返回读取成功字符个数
// //scanf读取失败EOF
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();//拿走 '\n'
//	}
//	return 0;
//}
//#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//		else if
//			(isupper(ch))
//		printf("%c\n",tolower(ch));
//	}
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	while (scanf(" %c", &ch) == 1)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			printf("%c is an alphabet.\n", ch);//isalpha
//		else
//			printf("%c is not an alphabet.\n", ch);
//
//		//getchar();
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int score = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);
//			sum += (i / k) * (i % k);
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//
//	while (scanf("%c", &ch) == 1)// '\n'
//	{
//		printf("%c", ch);
//	}
//	return 0;
//}