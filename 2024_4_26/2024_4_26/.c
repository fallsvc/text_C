#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "Lym hehe,qqa";
	char arr2[] = "hya";
	int n = strlen(arr1);
	/*int t = sizeof(arr2);
	printf("%d",t);*/
	char* p1 = arr2;
	while (*p1 != '\0')
	{
		int i = 0;
		char* p = arr1;
		while (i < n)
		{
			if (p[i] == *p1)
			{
				p[i] = '\0';
			}
			i++;
		}
		p1++;
	}

	int i = 0;
	while (i < n)
	{
		if (arr1[i] != '\0')
		{
			printf("%c", arr1[i]);
		}
		i++;
	}

	return 0;
}