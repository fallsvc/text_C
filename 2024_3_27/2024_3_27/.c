#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Fab(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fab(n - 1) + Fab(n - 2);
//}

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	//printf("%d\n", Fab(5));
	print(1234);

	return 0;
}
