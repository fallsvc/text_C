#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����
//int main()
//{
//	int a = -1;
//	int b = ~a;
//	printf("%d \n", b);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdfg";
//	return 0;
//}
// 
//1!+2!+3!+...+n!
//int main()
//{
//	int n = 0; 
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	             //0~9
//	for (i = 0; i <= 12; i++)//��ѭ��
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
#include <string.h>
//
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		*dest++;
//		*src++;
//	}
//	*dest = *src;
//}
//en 
//const ���β��ܱ��޸ĵ�ֵ
//assert ����
//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)//if *src='\0' ,\0 ASCII is 0  ; while end;
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "abcdyg!!";//'\0'Ҳ������ȥ
//	//strcpy(arr2, arr1);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//const 
//int main()
//{
//	int a = 10;
//	int n = 20;
//	//1.
//	//const int* p = &a;
//	//*p = 20;//err
//	//p = &n;//ok
//	//2.
//	//int* const p = &a;
//	//*p = 20;//ok
//	//p = &n;//err
//	//3.
//	const int* const p = &a;
//	//���ֶ�����
//	printf("%d\n", *p);
//	return 0;
//}

#include <assert.h>
//strcpy ���� char*// Ŀ�ĵ�ַ

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*dest++ = *src++)//if *src='\0' ,\0 ASCII is 0  ; while end;
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "xxxxxxxxxxx";
	char arr2[] = "abcdyg!!";//'\0'Ҳ������ȥ
	//strcpy(arr2, arr1);
	
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}