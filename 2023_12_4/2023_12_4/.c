#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	int b[] = { 2,3,4,5 };
//	int* arr[] = { &a,&b };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void pass(int* p)//err
//{
//	printf("%d ", *(p + 6));
//	printf("%d ", p[6]);
//}
//void pass(int(*p)[5])//right
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", p[i][j]);
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,1,2,3,4,5,6 };
//	pass(arr);
//	return 0;
//}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 6,7,8,9,0 };
	int(*arr[10])[5] ={&a,&b};
	int i = 0;
	int j = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(*(*(arr + i))+j));
		}
		printf("\n");
	}
	return 0;
}