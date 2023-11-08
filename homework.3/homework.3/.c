
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int arr[5] = { 0 };
//	printf("请输入一个五位数\n");
//	scanf("%d", &n);
//	for (i = 0; i < 5; i++)
//	{
//		        arr[i] = n % 10;
//		        n = n / 10;
//	}
//		
//	for (i = 4; i > 0; i--)
//	{
//		printf("%d-", arr[i]);
//	}
//	printf("%d", arr[0]);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.
int main() {
    int i = 0;
    int n = 0;
    int arr[5] = { 0 };

    printf("请输入一个五位数: ");
    scanf("%d", &n);

    if (n < 10000 || n > 99999) {
        printf("输入不是五位数。\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        arr[i] = n % 10;
        n = n / 10;
    }

    for (i = 4; i > 0; i--) {
        printf("%d-", arr[i]);
    }
    printf("%d\n", arr[0]);

    return 0;
}
//2.
//int main()
//{
//	int n = 0;
//	for (n = 14;; n+=7)
//	{
//		if (n % 2 == 1 && n % 3 == 2 && n % 5 == 4 && n % 6 == 5 && n % 7 == 0)
//			break;
//	}
//	printf("%d\n", n);
// 
//	return 0;
//}
// 
//3,
//#include <ctype.h>
//int main()
//{
//	char c ;
//	int letters = 0;
//	int spaces = 0;
//	int digitals = 0;
//	int others = 0;
//	printf("请输入字符串：");
//	while ((c=getchar()) != '\n')
//	{
//		if (isalpha(c))
//		{
//			letters++;
//		}
//		else if (isspace(c))
//		{
//			spaces++;
//		}
//		else if (isdigit(c))
//		{
//			digitals++;
//		}
//		else
//		{
//			others++;
//		}
//	}
//	printf("字母数：%d\n空格数：%d\n数字数：%d\n其他：%d\n", letters, spaces, digitals, others);
//
//	return 0;
//}
//
////4.
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int a = 0;
//	int n = 1;
//	int sum = 0;
//	printf("请输入a,n的值：");
//	scanf("%d %d", &a, &n);
//	for (i = 1; i <= n; n--) 
//	{	int t = 0;
//		int j = 0;
//		t = a;
//		for (j = 1; j <= n; j++)
//		{
//			max += t;
//			t = t * 10;
//		}
//		sum =sum+max;
//		max = 0;
//	}
//	printf("Sn=%d\n", sum);
//
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int a, n;
//	int sum = 0;
//	int i = 0;
//	scanf("%d %d", &a, &n);
//	while (n != 0)
//	{
//		sum = sum + n * pow(10, i) * a;//a+aa+aaa;拆分相加
//		n--; i++;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//5.
// （1）
//#include <math.h>
//int main()
//{
//	
//	int i;
//	for (i = 100; i <= 999; i++)
//	{   int n;
//		n = pow(i% 10, 3) + pow(i /10 % 10, 3) + pow(i / 100, 3);
//		if (i == n)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//（2）
//#include <math.h>
//int main()
//{
//	int sum=0;
//	int i=100;
//	while (i < 1000)
//	{
//		int n = i;
//		int j = 0;
//		while (j < 3)
//		{
//			sum += pow(n % 10, 3);
//			n = n / 10;
//			j++;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//		sum = 0;
//		i++;
//	}
//	return 0;
//}
//#include <math.h>
//int is(int n)
//{
//	int j;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 6; i <= 1000; i++)
//	{
//		if (is(i))
//		{
//			printf("%d:its factors are 1", i);
//			int j = 0;
//			for (j = 2; j <i; j++)
//			{
//				if (i % j == 0)
//					printf(",%d", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
// 7.
//#include <math.h>
// 判断非素数
//int is(int n)
//{
//	int j;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 1;
//	}
//	return 0;
//}
// 判断完数
// 
//int re(int x)
//{
//	if (is(x))
//	{
//		int ret = 0;
//		int j = 0;
//		for (j = 1; j < x; j++)
//		{
//			if (x % j == 0)
//				ret += j;
//		}
//		if (ret == x)
//			return 1;
//		return 0;
//	}
//}
//int main()
//{
//	int i;
//	for (i = 6; i <= 1000; i++)
//	{
//		if (re(i))
//		{
//			printf("%d:its factors are 1", i);
//			int j = 0;
//			for (j = 2; j < i; j++)
//			{
//				if (i % j == 0)
//					printf(",%d", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}