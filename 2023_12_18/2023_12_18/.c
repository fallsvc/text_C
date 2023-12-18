#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int strcmp(const char* p1,const char* p2)

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//	
//}
//int main()
//{
//	char arr1[] = "ahabgsa";
//	char arr2[] = "azbsag";
//	//int ret = strcmp(arr1, arr2);
//	int ret = my_strcmp(arr1, arr2);
//	if (ret>0)
//		printf(">\n");
//	else if (ret==0)
//		printf("=\n");
//	else
//		printf("<\n");
//
//	return 0;
//}

//strncpy( , ,size_t)
//strncat
//strncmp

//int main()
//{
//	char arr1[20] = "abcdf";
//	char arr2[] = "abllo bit";
//	//strncpy(arr1, arr2, 4);
//	//strncat(arr1, arr2, 5);///末尾补\0
//	int ret=strncmp(arr1, arr2, 2);
//	printf("%d\n", ret);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strstr 
//查找子串
//const char* strstr(const char* str1, const char* str2);
//找不到return NULL;
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
//		while (*s1!= '\0' && *s2!= '\0' && *s1 == *s2)
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
//	char arr1[] = "I aam good boy!";
//	char arr2[] = "am good";
//	//char*ret=strstr(arr1, arr2);
//	char* ret = my_strstr(arr1, arr2);
//	if (ret)
//		printf("存在\n");
//	else
//		printf("不存在\n");
//
//	return 0;
//}

//strtok
// 到特殊字符停（把特殊字符改为'\0') or '\0'
//切割字符串

//int main()
//{
//	char a[] = "Im nsn-dnfn.djf!bc";
//	char b[30] = { 0 };
//	strcpy(b, a);
//
//	const char* sep = "-.!";
//
//	const char c[] = "-.!";
//	//char*ret=strtok(b, sep);//后 sep++
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);//strtok 有记忆功能
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//	char* ret=NULL;//后 sep++
//	for (ret = strtok(b, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	/*char* ret = strtok(b, c);
//	printf("%s\n", ret);
//	ret = strtok(NULL, c);
//	printf("%s\n", ret);
//	ret = strtok(NULL, c);
//	printf("%s\n", ret);
//	ret = strtok(NULL, c);
//	printf("%s\n", ret);*/
//
//	/*char* ret = strtok(b, c);
//	printf("%s\n", ret);
//
//	int n = strlen(c);
//	while (n-- > 0)
//	{
//		ret = strtok(NULL, c);
//		printf("%s\n", ret);
//	}*/
//
//	return 0;
//}
#include <errno.h>
//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));*/
//
//	/*FILE* pf = fopen("tets.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		break;
//	}*/
//	return 0;
//}

