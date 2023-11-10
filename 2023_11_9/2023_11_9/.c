#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int arr[] = { 0 };
	scanf("%d", &n);
	printf("输入数字用空格隔开:");
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 1; i <= n; i++)
	{
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
}