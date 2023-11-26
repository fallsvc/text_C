#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
///打印 方块型 *
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i * 2 + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (n - i - 1) * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	a.b = 100;
//	printf("%d\n", (*p).a);//ok p->a//ok a.a//ok
//		//if printf("%d\n",*p.a)//err对a解引用
//	printf("%d\n", p->b);
//	return 0;
//}
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] =
//	{
//		{9801,"zhang",20},
//		{9802,"wang",19},
//		{9803,"zhao",18}
//	};
//	fun(students + 1);
//	return 0;
//}
/// drink
// //一瓶汽水1元，2个空瓶换一瓶 ，20￥
//int main()
//{
//	
//	int money = 0;
//	scanf("%d", &money);
//	////(1)
//	/*int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	//printf("%d\n", total);*/
//	/*(2)*/
//	if (money > 0)
//		printf("%d\n", money * 2 - 1);
//	else
//		printf("%d\n", 0);
//	return 0;
//}
