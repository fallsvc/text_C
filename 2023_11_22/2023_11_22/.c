#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = -1;
//	int c = a ^ b;
//	printf("%d\n", c);
//
//	return 0;
//}
//void extract(int* p, int n, char arr[])
//{
//
//	arr[*p - 2] = (n % 10) + '0';
//	arr[*p - 3] = '-';
//	*p = *p - 2;
//	if (n > 9)
//	{
//		n = n / 10;
//		extract(p, n, arr);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int c = 0;
//	char arr[50] = { 0 };
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		n = -n;
//		arr[i] = '-';
//		i += 1;
//	}
//	//Number of characters
//	c = n;
//	while ((c % 10) != 0)
//	{
//		i += 2;
//		c = c / 10;
//	}
//	extract(&i, n, arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

int sum = 0;
int i = 0;
void pow_s(int n,int arr[])
{
	if (n % 10 != 0)
	{
		int num = n % 10;
		arr[i] = n % 10;
		i++;
		sum += num * num;
		pow_s(n / 10,arr);
	}
}
int main()
{
	int n= 0;
	int arr[50] = { 0 };
	printf("Input an integer :");
	scanf("%d", &n);
	
	printf("The output result is: ");
	while (i > 0)
	{
		i--;
		printf("%d*%d+", arr[i], arr[i]);
		
	}
	printf("%d*%d=%d\n", arr[i], arr[i], sum);
	return 0;
}