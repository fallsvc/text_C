#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ต๗สิ Debug
// / / F5  F9 F10 F11 
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//void test(int a[])
//{
//	a[1] = 10;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	printf("%d\n", arr[1]);
//	return 0;
//}
//void extract(int* p, int n, char arr[])
//{
//
//	arr[*p - 2] = (n % 10) + '0';
//	if(*p-3>0)
//		arr[*p - 3] = '-';
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
//void extract(int* p, int n, char arr[])
//{
//	// 
//	arr[*p - 1] = (n % 10) + '0';
//	if ((*p - 2) >= 0)
//		arr[*p - 2] = '-';
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
//
//	//Number of characters
//	if (n < 0)
//		n = -n;
//	else
//		i -= 1;
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
void pow_s(int n, int arr[])
{
	if (n % 10 != 0)
	{
		int num = n % 10;
		arr[i] = n % 10;
		i++;
		sum += num * num;
		pow_s(n / 10, arr);
	}
}
int main()
{
	int n = 0;
	int arr[50] = { 0 };
	printf("Input an integer :");
	scanf("%d", &n);
	pow_s(n,arr);
	printf("The output result is: ");
	while (i > 0)
	{
		i--;
		printf("%d*%d", arr[i], arr[i]);
		if (i != 0)
			printf("+");

	}
	printf("=%d\n", sum);
	return 0;
}
