#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));
//	}*/
//	return 0;
//}
//void print(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p+i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int arr[5] = { 0 };
//	//int(*p)[5] = &arr;//数组指针
//
//	//&Add and Add 都是函数的地址
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	//int (*p)(int, int) = &Add;
//	//int ret = (*p)(5, 4);
//	int (*p)(int, int) = Add;
//	int ret = p(5, 4);
//
//	printf("%d\n", ret);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int cul(int(*p)(int,int))
//{
//	printf("%d \n", p(3, 4));
//}
//int main()
//{
//	cul(Add);
//
//	return 0;
//}

//int main()
//{
//	int* arr[5] = { 0 };
//	int** p = arr;
//	int* (*pa)[5] = &arr;
//	return 0;
//}
//void test(const char* str)
//{
//	printf("tset()\n");
//}
//int main()
//{
//	void(*pf)(const char*) = test;//or &test
//	pf("abc");
//	(*pf)("abc");
//	(******pf)("abc");//与****无关
//	printf("%d \n", sizeof(&test));
//	return 0;
//}
//
//typedef unsigned int unit;
//typedef void(*pf_t)(int);
//
//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//
//	pf_t signal(int, pf_t);
//	return 0;
//}

void menu()
{
	printf("**********************\n");
	printf("****  1.add 2.sub ****\n");
	printf("****  3.mul 4.div ****\n");
	printf("****  0.exit      ****\n");
	printf("**********************\n");
}

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

void cal(int(*p)(int, int))
{
	int a = 0;
	int b = 0;
	printf("请输入两个操作数：");
	scanf("%d %d", &a, &b);

	printf("%d \n", p(a, b));
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			cal(Add);
			break;
		case 2:
			cal(Sub);
			break;
		case 3:
			cal(Mul);
			break;
		case 4:
			cal(Div);
			break;
		default:
			printf("输入错误！！！\n");
			break;
		}
	}while (input);
}