#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�����������壺
	//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
	//2. & ���������������������ʾ�������飬ȡ��������������ĵ�ַ��
	//3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��
//reveiw pointers
//int main()
//{
//	int a = 0;
//	int* pi = &a;
//	char b = 'd';
//	char* pc = &b;
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int(*pa)[10] = &arr;
//
//  int a[3][5] = { 0 };
//  int(*p)[5] = a;
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	//int(*pf)(int, int) = &Add;
//
//	////int sum = Add(2, 3);
//	//int sum = pf(2, 3);//(*pf)(2,3)//(***pf)(2,3);
//	//printf("%d \n", sum);
//	// 
//	//����ָ������
//	int (*pfArr[4])(int, int) = { Add,Sub};
//
//	return 0;
//}

//qsort( , , ,)
//
//int main()
//{
//	//��ַ��4 or 8���ֽ� x64 8��//ָ��//long
//	//x64:
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//8
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//8
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));//8
//	printf("%d\n", sizeof(&a[0]));//8
//	printf("%d\n", sizeof(&a[0] + 1));//8
//	return 0;
//}
// 
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//8
//	//printf("%d\n", sizeof(&arr + 1));//8
//	//printf("%d\n", sizeof(&arr[0] + 1));//8
//	// 
//	//size_t strlen(const char* str);
//
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr + 0));//���ֵ
//	//printf("%d\n", strlen(*arr));//��
//	//printf("%d\n", strlen(arr[1]));//��
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//	
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//a b c d e f \0
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//?
//	//printf("%d\n", strlen(arr[1]));//?
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}
//(c)�����ַ->�����ַ
// 
int main()
{
	char* p = "abcdef";
	//��ַ�Ĵ�С��4/8���ֽ�
	printf("%d\n", sizeof(p));//4/8
	printf("%d\n", sizeof(p + 1));//4/8
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4/8
	printf("%d\n", sizeof(&p + 1));//4/8
	printf("%d\n", sizeof(&p[0] + 1));//4/8

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//��
	//printf("%d\n", strlen(p[0]));//��
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p + 1));//���ֵ
	printf("%d\n", strlen(&p[0] + 1));//5

	return 0;
}
 