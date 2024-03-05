#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	double arr[5] = { 0 };
	int i = 0;
	double sum = 0;
	scanf("%lf,%lf,%lf,%lf,%lf", &arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}

	printf("%.2lf\n", (double)sum / 5.0);

	return 0;
}