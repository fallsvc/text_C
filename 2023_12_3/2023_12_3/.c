#define _CRT_SECUER_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	/*char ch = 'w';
//	char* p = &ch;
//	*p = 'b';
//	printf("%c\n", ch);*/
//
//
//	const char* p = "abcdfg";//pָ��'a'�ĵ�ַ
//	//char arr[] = "abcdfg";
//	//*p = 'q';
//	printf("%s\n", p);
//
//	return 0;
//}
//int main()
//{
//	char* p1 = "abcdfg";//�����ַ���һ���ַ���ͬ���ַ�����ַ��ͬ
//	char* p2 = "abcdfg";//ȫ��ͬ����ͬ
//
//	char arr1[] = "abcdf";//��ͬ�����ַ��ͬ
//	char arr2[] = "abcdf";
//
//	if (p1 == p2)
//		printf("p1=p2\n");
//	else
//		printf("p1!=p2\n");
//	if (arr1 == arr2)
//		printf("arr1=arr2\n");
//	else
//		printf("arr1!=arr2\n");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "I am busy!";
//	char arr2[] = "Thats funny!";
//	char arr3[] = "piss off!";
//
//	char* arr[] = { arr1,arr2,arr3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//*(arr+i)=arr[i];
//		printf("%s\n", *(arr + i));
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//arr=&arr[0]
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int p1 = arr;
//	//����ָ�� 
//	int(*p)[10] = &arr;
//	//int(*)[10]��p������
//	//int(*)[10]//err
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	return 0;
//}
//int main()
//{
//	char* arr[5] = { 0 };
//	char(*pc)[5] = &arr;
//	char** p = &pc;//����ָ���һ��ָ��ĵ�ַ
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//complex 
//	//cann't
//	int(*p)[5] = &arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//	printf("\n");
//
//	return 0;
//}
//
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	//arr Ϊ��һ�еĵ�ַ
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}
//int main()
//{
//	char arr[3][3] = { "abc","def","qew" };
//	char(*p)[3] = &arr;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%c", *((*p + i) + j));//*p��һ��Ԫ�ص�ַ&arr[0][0]
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr[3][3] = { "abc","def","qew" };
//	char(*p)[3] = arr;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%c", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}