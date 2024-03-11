#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	//x - 0 ¶Ô - 8
//	char a = ' a';
//	int ret = isspace(a);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char a[] = "i,am,a,student !!!";
//	int i = 0;
//	while (a[i])
//	{
//		//if(a[i] >= 'a' && a[i] <= 'z')
//		if (islower(a[i]))
//			//a[i] -= 32;
//			a[i] = toupper(a[i]);
//		i++;
//	}
//
//	printf("%s\n", a);
//
//	return 0;
//}

//size_t my_strlen(const char* p)
//{
//	assert(p);
//	char* tmp = p;
//	while (*tmp)
//		tmp++;
//
//	return (size_t)(tmp - p);
//}

//size_t my_strlen(const char* p)
//{
//	assert(p);
//	int count = 0;
//	while (*p++)
//		count++;
//
//	return (size_t)count;
//}

//size_t my_strlen(char* p)
//{
//	if (*p == 0)
//		return 0;
//	else
//		return 1 + my_strlen(p + 1);
//}
//
//int main()
//{/*
//	if (strlen("abc") - strlen("abcd") > 0)
//		printf(">\n");
//	else
//		printf("<\n");*/
//
//	char a[] = "acdf";
//	size_t ret = my_strlen(a);
//
//	printf("%u\n", ret);
//
//	return 0;
//}

//char* my_strcpy(char* d, char* s)
//{
//	assert(d && s);
//	char* tmp = d;
//	while (*d++ = *s++);
//
//	return tmp;
//}
//
//int main()
//{
//	char a[] = "abcd";
//	char b[10];
//	char*ret=my_strcpy(b, a);
//
//	printf("%s\n", ret);
//
//	return 0;
//}

char* my_strcat(char* d, char* s)
{
	assert(d && s);
	char* tmp = d;
	while (*d)
		d++;
	while (*d++ = *s++);

	return tmp;
}
int main()
{
	char a[20] = "abc";
	char b[] = "defg";

	//char* ret=strcat(a, b);
	char* ret=my_strcat(a, b);

	printf("%s\n", ret);
	printf("%s\n", a);
	return 0;
}