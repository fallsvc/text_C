#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#if 0
//#define General_Add(type)\
//					type type##_Add(type x,type y)\
//					{	\
//						return x + y;\
//					}
//General_Add(int);
//
//int main()
//{
//	int ret=int_Add(3, 4);
//	printf("%d\n", ret);
//	return 0;
//}
//
//#endif

//int main()
//{
//	//fprintf(stdout, "%d %s\n", 20, "abcdf");
//	char arr[50];
//	
//	sprintf(arr, "%s %d", "bcdf", 20);
//	char arr2[20];
//	int ret;
//	sscanf(arr, "%s %d", arr2,&ret);
//	fprintf(stdout, "%s %d\n", arr2, ret);
//
//	return 0;
//}

int main()
{
	int ret = (int)(-123.123);
	printf("%d\n", ret);
	return 0;
}