#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//void print(int n)
//{
//	if (n / 10)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n-- >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}

//int Frog(int n)
//{
//	/*if (n <= 2)
//		return n;
//	else
//		return Frog(n - 1) + Frog(n - 2);*/
//	if (n <= 2)
//		return n;
//
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	while (n-- >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//
//	return c;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int ret = Fib(n);
//		//print(10034);
//		printf("%d\n", ret);
//		/*printf("%d\n", Frog(4));*/
//		//printf("%d\n", 01111);
//	}
//
//	return 0;
//}

//int Factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Factorial(n - 1);
//}

//int Factorial(int n)
//{
//	int Fact = 1;
//	while (n)
//	{
//		Fact *= n--;
//	}
//
//	return Fact;
//}
//
//double power(double n, int k)
//{
//	
//	if (k == 0)
//		return 1;
//	else
//		return n * power(n, k - 1);
//}

//int main()
//{
//	double n = 0;
//	int k = 0;
//	while (scanf("%lf %d", &n,&k) == 2)
//	{
//		//printf("%d\n", Factorial(n));
//		printf("%lf\n", power(n,k));
//	}
//
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n / 10)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//
//int main()
//{
//	printf("%d\n", DigitSum(1234));
//	return 0;
//}

int main()
{
	int a=1;
	printf("%d\n", a);
	return 0;
}