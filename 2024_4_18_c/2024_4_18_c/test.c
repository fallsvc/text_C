#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RandomNumber(int n,unsigned*p)
{
	srand(*p);
	*p = rand();
	while (n--)
	{
		printf("%d\n", rand());
	}
}

int main()
{
	unsigned s= time(0);
	RandomNumber(10,&s);
	RandomNumber(10,&s);
	return 0;
}