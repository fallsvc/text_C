#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//动态内存开辟

//int main()
//{
//	int arr[10] = { 0 };
//	//动态内存开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//use
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d \n", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10,sizeof(int));
//		if (p == NULL)
//		{
//			printf("%s\n", strerror(errno));
//			return 1;
//		}
//		//use
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//
//		free(p);
//		p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	//int*p=(int*)calloc(10,4);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i+1;
//	}
//	//expand
//	int* ptr=(int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//use
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}
////realloc(NULL,40) //=malloc(40)

//error
int main()
{
	int* p = (int*)malloc(40);//int* const p=(int*)malloc(40);
	//1.必须判断
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//2.防止越界
	*(p + 10) = 1;
	//3.对非动态开辟内存使用free释放
	int a = 1;
	int* p = &a;
	free(p);
	p = NULL;
	//4.只free部分开辟
	p++;
	free(p);//必须从头开始
	p = NULL;
	//5.同一空间多次释放
	free(p);
	//...
	free(p);

	//6.忘记释放

	return 0;
}