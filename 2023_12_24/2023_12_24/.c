#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//一列一列输出元素

//int main()
//{
//	int r = 0;
//	int c = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &r, &c);
//	//Input
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//Print
//	for (i = 0; i < c; i++)
//	{
//		for (j = 0; j < r; j++)
//		{
//			printf("%d", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j])
//				flag = 0;
//			goto end;
//		}
//	}
//end:
//	if (flag)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int f1 = 1;
//	int f2 = 1;
//	for (i = 0; i < n-1; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			f1 = 0;
//			break;
//		}
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			f2 = 0;
//			break;
//		}
//	}
//	if (f1 + f2)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}

//结构体自定义
//// struct tag 
//{
//
//};
//匿名结构体只能创建时创建变量
//struct
//{
//	char name[];
//}x;

//struct Node
//{
//	char name;
//	struct Node* next;
//};

//struct Node
//{
//	int x;
//	int y;
//}p1={1,2};
//struct stu
//{
//	int a;
//	int b;
//	struct Node r;
//};
//int main()
//{
//	struct stu p = { 1,2,{3,4} };
//	printf("%d\n", p.r.x);
//	return 0;
//}

//#include <stddef.h>
//struct st
//{
//	char a;
//	int b;
//	double c;
//};
//struct s
//{
//	char a;
//	struct st s;
//	double c;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct st));
//	printf("%d\n", offsetof(struct s, a));//偏移位
//	printf("%d\n", offsetof(struct s, s));
//	printf("%d\n", offsetof(struct s, c));
//	return 0;
//}

//#pragma pack(4)
//struct s
//{
//	int i;
//	double d;
//};
//#pragma pack(4)
//
//int main()
//{
//	printf("%d\n", sizeof(struct s));//12//不修改是16
//	return 0;
//}

//struct stu 
//{
//	int data[10];
//	char a;
//};
//
//void print1(const struct stu* p)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", p->data[i]);
//	}
//	printf("%c\n", p->a);
//}
//
//void print2(struct stu s)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", s.data[i]);
//	}
//	printf("%c\n", s.a);
//}
//
//int main()
//{
//	struct stu s = { {1,2,3},'a' };
//	print1(&s);
//	print2(s);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	char num[10];
//};
//
//int main()
//{
//	struct stu s[2] = { {"abcfd","23330"},{"wangwu","12556"} }, * p = s;
//	//swap
//	struct stu a = *p;
//	*p = *(p + 1);
//	*(p + 1) = a;
//	printf("%s %s", p->name, p->num);
//
//	return 0;
//}

