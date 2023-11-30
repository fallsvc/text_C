#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void re(int* p)
{
	printf("%d\n", *p+1);
}

int main()
{
	int arr[10][10] = { 1,2,3,4 };
	re(arr);
	printf("%d\n", **arr);
	printf("%d\n", *arr[0]);

	return 0;
}