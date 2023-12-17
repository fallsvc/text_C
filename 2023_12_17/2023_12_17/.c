#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char* a[] = { "abc","ndf","jun" };
//	char** p = a;
//	printf("%s\n", *(p+1));
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *--*++cpp+3);//ER
//	printf("%s\n", *cpp[-2]+3);//ST
//	printf("%s\n", cpp[-1][-1]+1);//EW
//	return 0;
//}

///string
//#include <string.h>

//int main()
//{
//	char arr[] = "abcdfg";
//	char arr2[] = { 'a','b','c' };
//	// 到'\0'
//	printf("%s\n", arr);
//	printf("%s\n", arr2);
//	//size_t strlen()
//	int len = strlen(arr2);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcd") > 0)
//		//(strlen"abc">strlen("abcd")
//		printf(">");
//	else
//		printf("<");
//	return 0;
//}
#include <assert.h>
//计算机
//size_t my_strlen(char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//指针-指针
//size_t my_strlen(char* str)
//{
//	assert(str);
//	char* p = str;
//	while (*p != '\0')
//		p++;
//	return (size_t)(p - str);
//}

//int main()
//{
//	char arr[] = "abcdf";
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}
/////char* strcpy(char*destination,char*source)
#include <string.h>

//int main()
//{
//	char name[20] = { 0 };
//	//name= "zhangsanaa";//err
//	//strcpy(name, "zhangsan");//or strcpy(&name,"zhangsan");
//	//printf("%s\n", name);
//	char arr[] = { 'a','b','c','\0' };
//	strcpy(name, arr);
//	printf("%s\n", name);
//
//	return 0;
//}

//常量字符串不能被修改
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	/*while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}*/
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdfg";
//	char arr2[20] = { 0 };
//	char*p=my_strcpy(arr2, arr1);
//
//	printf("%s\n", p);
//
//	return 0;
//}
// 
//strcat 字符串追加
char* my_strcat(char* dest, char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest != '\0')
		dest++;
	while (*dest++ = *src++);

	return ret;
}
int main()
{
	char arr1[20] = "Hello ";//空间必须足够的且可修改
	//strcat(arr1, "world!");
	char*p=my_strcat(arr1, "World!");
	printf("%s\n", p);

	return 0;
}