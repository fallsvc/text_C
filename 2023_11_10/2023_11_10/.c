#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//数组越界

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,8,7,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 4; j++)
//		{
//			printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
//		}
//	}
//	return 0;
//}
//冒泡排序
//void bub_sort(int arr[],int sz)//arr[] = *arr
//{
//	//不能在这求元素个数 int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//
//	}
//
//}
//int main()
//{
//
//	int arr[3] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int y = 0;
//	for (y = 0; y < n; y++)
//	{
//	 scanf("%d", &arr[y]);
//	}
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bub_sort(arr,sz);//传首元素地址
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d]=%d\n", i, arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1};
//	printf("%p\n", arr);//arr 第一个地址
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	printf("%d\n", sizeof(arr));//arr 整个数组
//	return 0;
//}
//int main()
//{
//	int arr[3] = { 0 };
//	scanf("%d", arr);//首元素地址
//	printf("%d", arr[0]);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr+1);
//	printf("%p\n",&arr+1);
//	printf("%p\n", arr);
//	printf("%p\n",arr + 1);
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { 1,2,1,4,5,6,4,3,2,45,5,3 };
// 
//	/*printf("%d",sizeof(arr[0]));*/
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	//printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//	//printf("%d\n", arr);//arr d第一行的地址
//	//printf("%d\n", arr + 1);
//	return 0;
//}
