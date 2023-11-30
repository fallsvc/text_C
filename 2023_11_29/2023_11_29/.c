#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//判断字节序存储 大小端
//int main()
//{
//	int a = 1;
//	if (*(char*)&a)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}
// plus 
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	if (check_sys())
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//int main()
//{
//	int a[] = { 1,2,3 };//第四位存任意值，not 0;
//	int b[] = { 1,2,3,4 };
//	int c = 10;
//	int* arr[] = { a,b ,&c};
//	printf("%d\n", arr[0][3]);
//	printf("%d\n", arr[2][0]);
//
//	return 0;
//}
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	char b[] = "abcdf";
//	int* arr[] = {a};
//	char* arr2[] = { b };
//	printf("%d\n", **arr);
//	printf("%s\n", *arr2);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int* arr[2] = { &a };
//	printf("%d\n", *(arr+1));
//	return 0;
//}
//void ti(char* p)
//{
//	*p = 'H';
//}
//int main()
//{
//	char arr[]= "Cxjj";
//	char* p = arr;
//	ti(p);
//	printf("%s", p);
//	return 0;
//}
//void ti(int* p)
//{
//	*p = 123;
//}
//int main()
//{
//	int a = 1;
//	int* arr[3] = { NULL };
//	*arr = &a;
//	ti(*arr);
//	printf("%d\n", **arr);
//	return 0;
//}

//int main()
//{
//	char* arr[] = { "andnsn" };
//	
//	//ti(arr);
//	printf("%s\n", *arr);
//	return 0;
//}
//int main()
//{
//	char arr[50] = {"hsjhjhjd"};
//	printf("%s\n", arr);
//	return 0;
//}
//指针定义函数
//void is()
//{
//	printf("hehhe\n");
//}
//int main()
//{
//	void(* p)();
//	p= &is;
//	(*p)();
//	return 0;
//}
// 
// 指针调函数
//int add(int x, int y)
//{
//	return x + y;
//}
//int ply(int x, int y)
//{
//	return x * y;
//}
//void fun(int x, int y, int(*p)())
//{
//	printf("%d\n", (*p)(x,y));
//}
//int main()
//{
//	fun(2, 3, add);
//	fun(2, 3, ply);
//	return 0;
//}
// //方块型
// 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//
//	return 0;
//}

