#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量，一级指针
//	int** ppa = &pa;//ppa是二级指针变量
//	**ppa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

// 指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int arr[10];
//
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//
//	int* parr[10] = { &a,&b,&c };
//	int i = 0;
//		for (i = 0; i < 3; i++)
//		{
//			printf("%d\n", *(parr[i]));
//		}
//	return 0;
//}
//int main()
//{
//	/*int arr[3][4] = { 1,2,3,4,4,3,2,1,5,6,7,8 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d\n", arr[i][j]);
//		}
//	}*/
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 4,3,2,5 };
//	int arr3[4] = { 5,6,7,8 };
//
//	int* parr[3] = {arr1,arr2,arr3};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//struct peo
//{
//	char name[20];
//	char tale[12];
//	char sex[5];
//	int high;
//}ss;

//struct peo
//{
//	
//	char name[20];
//	char tale[12];
//	char sex[5];
//	int high;
//};
//struct st
//{
//	struct peo ss;
//	int mun;
//	float f;
//};
//void print2(struct peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tale, sp->sex, sp->high);
//}
//void print1(struct peo ss)
//{
//	printf("%s %s %s %d\n", ss.name, ss.tale, ss.sex, ss.high);
//}
//int main()
//{
//	struct peo ss = { "zs","1731773","men",181};//结构体变量的创建
//	struct st s = { {"lisa","1356788","mam",137},100,3.14f };
//
//	printf("%s %s %s %d\n", ss.name, ss.tale, ss.sex, ss.high);
//	printf("%s %s %s %d %d %f\n", s.ss.name, s.ss.tale, s.ss.sex, s.ss.high, s.mun, s.f);
//	print1(ss);
//	print2(&ss);
//
//	return 0;
//}
/// struct 传参
//  传地址  （节约）
//int main()
//{
//	int a ,b,c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a=%d\nb=%d\nc=%d\n", a, b, c);
//	//9 23 8
//	return 0;
//}
//  //b补码1的个数
// 
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int count_num_of_1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> 1) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}
 ///判断一个数是不是2的次方
// 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if ((n & (n - 1)) == 0)//except 1 ;
//		printf("is \n");
//	return 0;
//}

// 两个数在二进制有几位不同

//int is_d(int m,int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count;
//		}
//	}
//	return count;
//}
int is_d(int m, int n)
{
	int count = 0;
	// ^异或操作符
	//同0异1
	int ret = m ^ n;
	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &m, &n);
	int ret = is_d(m, n);
	printf("%d\n", ret);
	return 0;
}