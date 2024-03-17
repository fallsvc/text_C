#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == 0)
//			return 0;
//		p1++;
//		p2++;
//	}
//
//	return *p1 - *p2;
//}


//int main()
//{
//	char a[] = "abcf";
//	char b[] = "abcd";
//
//	int ret = my_strcmp(a, b);
//
//	printf("%d\n", ret);
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* c = str1;
//	if (*str2 ==0)
//		return (char*)str1;
//	while (*c)
//	{
//		s1 = c;
//		s2 = str2;
//		while (*s1!=0&&*s2!=0&&*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == 0)
//			return (char*)c;
//		c++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char a[] = "abcfg";
//	char b[] = "bcf";
//	char* ret=my_strstr(a, b);
//
//	printf("%s\n", ret);
//	return 0;
//}

//size_t my_strlen(const char* a)
//{
//	assert(a);
//	const char* p = a;
//	while (*p != 0)
//		p++;
//	return p - a;
//}
////位数不够返回1；够返回0
//
//#define TOJZ 16
//
//int EXTo(char* a, int ws, char* b)
//{
//	assert(a && b);
//	char z[16];
//	for (int i = 1; i < 16; i++)
//	{
//		if (i < 10)
//			z[i] = '0' + i;
//		else
//			z[i] = 'a' + i - 10;
//	}
//
//	b[ws] = 0;
//	int j = ws - 1, he = 0, qz = 1,flag = 0;
//	for (int i = my_strlen(a) - 1; i >= 0; i--)
//	{
//		he += qz * (a[i] - '0');
//		qz *= 2;
//		if (qz == TOJZ || i == 0)
//		{
//			if (j < 0)
//			{
//				flag = 1;
//				break;
//			}
//			b[j--] = z[he];
//			qz = 1;
//			he = 0;
//		}
//	}
//	while (j >= 0)
//		b[j--] = '0';
//	return flag;
//}
//int main()
//{
//	char a[] = "10101010111";
//	char b[100];
//
//	//int len = (int)my_strlen(a);
//
//	EXTo(a, 4, b);
//
//	
//
//	return 0;
//}