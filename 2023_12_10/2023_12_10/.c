#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数指针数组
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//int main()
//{
//	int (*arr[])(int, int) = { Add,Sub,Mul,Div };
//	//int ret = (*arr)(10, 20);
//	int ret = arr[0](10, 20);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", arr[i](4, 3));
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	//函数指针数组
//	int (*arr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	//指向函数指针数组的指针
//	int (*(*p)[5])(int, int) = &arr;
//	return 0;
//}
//回调函数
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)(e1);
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}