#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>

char* myfgets(char* string, int n, FILE* stream)
{
	assert(string && stream);
	char* ret = string;
	if (n == 0)
		return NULL;
	int ch;
	int i=0;
	while (--n>0)
	{
		ch = fgetc(stream);
		if (ch == '\n')
		{
			*(string+i) = ch;
			i++;
			break;
		}
		else if (ch == EOF)
		{
			break;
		}
		else
		{
			*(string+i) = ch;
		}
		i++;
	}
	*(string+i) = '\0';
	if (i==0&& ch == EOF)
		return NULL;

	return ret;
}
