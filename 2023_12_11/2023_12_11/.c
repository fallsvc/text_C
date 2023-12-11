#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int* (*arr[10])();
//	int* (*(*p)[10])()=&arr;
//
//	return 0;
//}
//
//int int_sort(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,67,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), int_sort);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
//int main()
//{
//	//空间是最大元素
//	//每次只能使用一个
//	union st
//	{
//		int a;
//		char c;
//	}u1;
//	u1.a = 2;
//	printf("%d\n", u1.a);
//	u1.c = 'd';
//	printf("%c\n", u1.c);
//	return 0;
//}
#include <stdlib.h> //qsort()
#include <string.h>//strcmp()
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int cmp_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}

//void print2()
//{
//	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_name);
	//qsort(s, sz, sizeof(s[0]), cmp_age);
//}
//int main()
//{
//	print2();
//	return 0;
//}

 /*struct Stu
{
	char name[20];
	int age;
};
int cmp_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;
}
void swap(char* p1, char* p2, int w)
{
	int i = 0;
	for (i = 0; i < w; i++)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}

void bubble_sort(void* base, int n, int w, int(*cmp)(const void*,const void*))
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (cmp((char*)base + j * w, (char*)base + (j + 1) * w)>0)
			{
				swap((char*)base + j * w, (char*)base + (j + 1) * w, w);
				flag = 0;
			}
		}
		if (flag)
		{
			break;
		}
	}
}

void print3()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}
void print4()
{
	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_name);
	bubble_sort(s, sz, sizeof(s[0]), cmp_age);
}
int main()
{
	print3();
	print4();
	return 0;
}*/
