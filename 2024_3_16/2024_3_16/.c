#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <windows.h>//Sleep

//int myAtoi(const char* p)
//{
//	assert(p);
//	int ret = 0;
//	while (*p)
//	{
//		ret *= 10;
//		ret += *p - 48;
//		p++;
//	}
//	
//	return ret;
//}
//
//int main()
//{
//	char a[] = "1235545";
//	int i =myAtoi(a);
//
//	printf("%d\n", i);
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <=n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%dx%d=%2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int bin_search(int arr[], int left, int right, int key)
//{
//	int ret = 0;
//	while (left <= right)
//	{
//		ret = left + (right - left) / 2;
//		if (arr[ret] < key)
//		{
//			left = ret + 1;
//		}
//		else if (arr[ret] > key)
//		{
//			right = ret - 1;
//		}
//		else
//			return ret;
//	}
//
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,6,7,8,9 };
//	int ret=bin_search(arr, 0, 8, 4);
//	if (ret >= 0)
//		printf("%d\n", arr[ret]);
//	else
//		printf("zhaobudao");
//
//	return 0;
//}

//1是 0不是
//int is_leap(int n)
//{
//	int flag = 0;
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		flag = 1;
//
//	return flag;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (is_leap(n))
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}

//#include <math.h>
////1是 0不是
//int is_prime(int n)
//{
//	int flag = 1;
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//			
//	}
//
//	return flag;
//}
//
//int main()
//{
//	for (int i = 100; i < 200; i++)
//	{
//		if (is_prime(i))
//			printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}

//gs 元素个数
void Init(int* p, int gs)
{
	for (int i = 0; i < gs; i++)
	{
		*(p + i) = 0;
	}
}

void print(int* p, int gs)
{
	for (int i = 0; i < gs; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}

void reverse(int* p, int left, int right)
{
	while (left < right)
	{
		int tmp = *(p + left);
		*(p + left) = *(p + right);
		*(p + right) = tmp;
		left++;
		right++;
	}
}