#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int find_n(char* pc, int* pi)
//{
//	int i = 0;
//	char* str = pc;
//
//	while (*str != '\0')
//	{
//		int j = i;
//		//
//		while (*str == '0')
//		{
//			*(pi + i) = 0;
//			i++;
//			str++;
//		}
//
//		int ff = 0;
//		while (*str >= '0' && *str <= '9')
//		{
//			ff = ff * 10 + ((*str)-'0');
//			str++;
//		}
//
//		if (ff)
//		{
//			*(pi + i) = ff;
//			i++;
//		}
//		if (j == i)
//			str++;
//	}
//	return i;
//}
//
//int main()
//{
	/*char arr[100] = { 0 };
	int a[100] = { 0 };

	gets(arr);

	int n = find_n(arr, a);

	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}*/
//
//#include <string.h>
//
//typedef struct strings
//{
//	char ar[100];
//
//}strs;
//
//void bubbleSort(strs* arr, int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (strcmp(arr[j].ar, arr[j + 1].ar) > 0)
//			{
//				strs s = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = s;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int num_str = 0;
//
//	strs arr[100] = { 0 };
//	strs arr2[100] = { 0 };
//
//	scanf("%d", &num_str);
//	getchar();// "\n"
//
//	//input strings
//	int i = 0;
//	for (i = 0; i < num_str; i++)
//	{
//		gets(arr[i].ar);
//	}
//
//	printf("\n");
//	for (i = 0; i < num_str; i++)
//	{
//		arr2[i] = arr[i];
//	}
//
//	bubbleSort(arr2, num_str);
//
//	for (i = 0; i < num_str; i++)
//	{
//		printf("%s\n", arr2[i].ar);
//	}
//	return 0;
//}


//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 15;
//	printf("%d\n", max(a, b));
//
//	return 0;
//}

#include <ctype.h>

int main()
{

	char arr[10] = "abcd";
	arr[0]=toupper(arr[0]);

	printf("%s\n", arr);

	return 0;
}