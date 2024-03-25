#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>

//int main()
//{
//	FILE* p = fopen("text.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fprintf(p, "%d %c %s\n", 10, 'a', "abcddf");
//	fputc('p', p);
//	fputs("abcfd", p);
//	fclose(p);
//	p = NULL;
//
//	p = fopen("text.txt", "r");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int n;
//	char a, b[10];
//
//	fscanf(p, "%d %c %s",&n,&a,b);
//	printf("%d %c %s\n", n, a, b);
//	a=fgetc(p);
//	fgets(b,8,p);
//	printf("%c %s\n",a,b);
//	fclose(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* p2 = fopen("data_copy.txt", "w");
//	if (p2 == NULL)
//	{
//		perror("fopen1");
//		return 1;
//	}
//	//Ð´
//	FILE* p = fopen("data.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopen2");
//		fclose(p2);
//		p2 = NULL;
//		return 1;
//	}
//
//	fprintf(p, "hhh %d %s",20,"abcdfd");
//	fclose(p);
//	p = NULL;
//	//¶Á
//	int n;
//	char a[10], b[10];
//	p = fopen("data.txt", "r");
//	if (p == NULL)
//	{
//		perror("fopen3");
//		fclose(p2);
//		p2 = NULL;
//		return 1;
//	}
//	fscanf(p, "%s %d %s",a,&n,b);
//
//	//printf("%s %d %s\n", a, n, b);
//	//Ð´
//	fprintf(p2, "%s %d %s",a,n,b);
//
//	fclose(p);
//	fclose(p2);
//	p = NULL;
//	p2 = NULL;
//	return 0;
//}

int myatoi(const char* p)
{
	assert(p);
	if (*p == '\0')
		return 0;
	while (isspace(*p))
		p++;
	int flag = 1;
	if (*p == '+')
		p++;
	if (*p == '-')
	{
		p++;
		flag = -flag;
	}
	long long sum = 0;
	while (*p)
	{
		if (isdigit(*p))
		{
			sum = sum * 10 + (*p - 48) * flag;
			if (sum > INT_MAX)
				return INT_MAX;
			if (sum < INT_MIN)
				return INT_MIN;
		}
		else
			return (int)sum;
		p++;
	}
		
	return (int)sum;
}

int main()
{
	char a[] = "- 1239999";
	int ret=myatoi(a);
	printf("%d\n", ret);
	return 0;
}