#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	char ch = 'a';
//	ch=toupper((int)ch);
//
//	printf("%c\n", ch);
//	return 0;
//}
// 
//memcpy 内存拷贝
//void* memcpy(void* destination, const void* source, size_t num)


//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		//*(char*)dest =*(char*)src;
//		//dest = (char*)dest + 1;
//		//src = (char*)src + 1;
//
//		*((char*)dest)++ = *((char*)src)++;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[10] = { 0 };
//	//memcpy(arr2, arr1, 20);
//	int* p = my_memcpy(arr2, arr1, 20);
//	//my_memcpy(arr1 + 2, arr1, 20);//不能实现
//
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p++));
//	}
//	
//	return 0;
//}
//void my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*((char*)dest)++ = *((char*)src)++;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	//memmove(arr + 3, arr, 20);
//	my_memmove(arr, arr + 3, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 1,3,2 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hello net";
//	memset(arr1+1, 'x', 5);
//	
//	int arr2[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		memset(arr2 + i, 1, 1);
//	}
//	printf("%s\n", arr1);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	if ((char)a)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

