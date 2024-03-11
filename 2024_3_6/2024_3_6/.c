#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int fac(int x)
{
	if (x == 0)
		return 1;
	else
		return x*fab(x - 1);
}

int fab(int x)
{
	if (x <= 2)
		return 1;
	else
		return fab(x-1) + fab(x-2);
}

int main()
{
	int n = 5;

	int ret = fac(n);
	int r = fab(n);

	printf("%d\n", ret);
	printf("%d\n", r);

	return 0;
}