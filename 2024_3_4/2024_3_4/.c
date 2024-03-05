#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int S(const void* e1, const void* e2)
//{
//	return (*(int*)e1) - (*(int*)e2);
//}
//int main()
//{
//	int arr[] = { 2,3,42,1,3,2,19,5 };
//
//	qsort(arr, 8, 4, S);
//
//	int i = 0;
//	
//	for (i = 0; i < 8; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

int main()
{
	char arr[] = {'a','b'};
	char arr1[] = "abc";

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr1));

	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr1));

	return 0;
}