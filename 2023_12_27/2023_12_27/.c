#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	printf("hekk s\n");
//	char* p = "hekk s";
//	printf(p);
//	int arr[5] = { 1,2,3,4,5 };
//
//	return 0;
//}

//char* GET(void)
//{
//	char p[] = "hel;;";//函数调用完销毁地址(空间被重置)
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	str = GET();
//	printf("%s\n", str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//void Get(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void test()
//{
//	char* str = NULL;
//	Get(&str);
//	strcpy(str, "helloa\n");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//辗转相除法
//最小公倍数与嘴大公约数之和

//int main()
//{
//	long n = 0;
//	long m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		long i = n;
//		long j = m;
//		long r = 0;
//		while (r=i % j)
//		{
//			i = j;
//			j = r;
//		}
//		printf("%d\n", n*m/ j + j);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age-((struct stu*)e2)->age;
//}
//
//int main()
//{
//	struct stu data[10] = { {"wangwu",20},{"zhangsan",15},{"apple",10} };
//	qsort(data, 3, sizeof(struct stu), cmp_by_name);
//
//	int i = 0;
//	printf("%-20s %-3s\n", "name", "age");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%-20s %-3d\n", data[i].name, data[i].age);
//	}
//
//	qsort(data, 3, sizeof(struct stu), cmp_by_age);
//
//	printf("%-20s %-3s\n", "name", "age");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%-20s %-3d\n", data[i].name, data[i].age);
//	}
//	return 0;
//}

