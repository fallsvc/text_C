#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d   ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	table(n);
//
//	return 0;
//}
//数组当形参是直接传地址，实参改变
//int test(int arr[])//=int* arr
//{
//	arr[0] = 3;//=*(arr+0)
//	arr[1] = 4;//=*(arr+1)
//}
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	printf("%d\n%d", arr[0], arr[1]);
//
//	return 0;
//}
//int a = 0;
//int b = 0;
//int test()
//{
//	a = 4;
//	b = 3;
//}
//int main()
//{
//	test();
//	printf(" % d % d", a, b);
//	return 0;
//}
//数组
// 创建
//int main()
//{
//	int arr[10];
//	char ch[5];
//	double data1[15 + 5];
//
//	int n = 10;
//	int arr[n];//vs中 arr[]中不能用变量
//}
//int main()
//{
//	//不完全初始化，剩余默认为0
//	int arr[10] = { 1,2,3 };
//	char ch[10] = { 'a','b','c' };
//	//a b c 0 0 0 0 0 0 0
//	char ch2[10] = "abc";
//	//a b c \0 0 0 0 0 0 0
//	printf("%d", ch2[5]);
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//下标          0 1 2 3 4 5 6 7 8 9
//	//[]下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d\n", arr[i]);
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
////%p 打印地址
//int main()
//{
//	char arr[10] = "abcd";
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c\n", arr[i]);
//	}
//	return 0;
//}
//二维
//int main()
//{
	//1,2,3,2
	//3,4,5,2
	//4,4,3,4
	//int arr[3][4] = { 1,2,3,2,3,4,5,2,4,4,3,4};//三行四列
	//int ch[3][4] = { {1,2},{3,4},{5,6} };
 /*int ch1[2][4]={{1,2,},{1,2}};
	int i = 0;*/
	//int arr[3][4];
//	for (i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//			scanf("%d", &arr[i][j]);
//	}
	/*for ( i = 0; i < 3; i++)
	{
		for(int j=0;j<4;j++)
		printf("%d\n", ch1[i][j]);
	}
	return 0;
}*/
//int main()
//{
//	int i;
//	int f[20] = { 1,1 };
//	for (i = 2; i < 20; i++)
//	{
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 5 == 0)printf("\n");
//		printf("%-12d", f[i]);
//	}
//	return 0;
//}
//int main()
//{
//	//1,2,3,2
//	//3,4,5,2
//	//4,4,3,4
//	int arr[3][4] = { 1,2,3,2,3,4,5,2,4,4,3,4};//三行四列
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for(int j=0;j<4;j++)
//		printf("&arr[%d][%d]=%p\n",i,j,& arr[i][j]);
//	}
//	return 0;
//}
