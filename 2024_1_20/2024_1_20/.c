#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void Getm(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void test(void)
//{
//	char* str = NULL;
//	Getm(&str, 100);
//	strcpy(str, "abcdf");
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

//柔性数组
//typedef struct str
//{
//	int n;
//	int arr[0];//int arr[];
//}type_a;
//
//int main()
//{
//	//printf("%d\n", sizeof(type_a));//4
//
//	//柔性数组使用
//	type_a* s =(type_a*)malloc(sizeof(type_a) + 40);
//	if (s==NULL)
//		return 1;
//
//	s->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		s->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", s->arr[i]);
//	}
//	printf("\n");
//
//	type_a* ptr = (type_a*)realloc(s, 50);
//	if (ptr != NULL)
//	{
//		s = ptr;
//		ptr = NULL;
//	}
//
//	free(s);
//	s = NULL;
//
//	return 0;
//}

//#include <errno.h>
//
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);
//	if (ps->arr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//use
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//expand
//	int* str = (int*)realloc(ps->arr, 80);
//	if (str != NULL)
//	{
//		ps->arr = str;
//	}
//	//free
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}