#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

//int main()
//{
//	double x = -120.0;
//	x = fabs(x);
//	size_t y = 120;
//
//	printf("%lf\n", x);
//	printf("%u\n", y);
//
//	return 0;
//}

//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//			return 0;
//		p1++;
//		p2++;
//	}
//	return *p1 - *p2;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1!='\0' &&*s2!='\0'&& * s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)p;
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char a1[] = "Tdhjfjdhj hd  jdbb";
//	char a2[] = "jj hd";
//
//	char* p = my_strstr(a1, a2);
//	if (p)
//		printf("haodaol\n");
//	else
//		printf("nofind it\n");
//
//	return 0;
//}

//int main()
//{
//	char a[] = "thidjknvn.fk,;d;ak";
//	char b[30] = { 0 };
//	strcpy(b, a);
//
//	const char* sep = ".,;;";
//	char* ret = NULL;
//	for (ret = strtok(b, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s ", ret);
//	}
//
//	return 0;
//}

int main()
{
	char ch = 'a';
	ch = toupper(ch);
	if (isupper(ch))
		printf("%c\n", ch);

	return 0;
}