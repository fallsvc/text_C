#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//first ��������  
//second ����Ҫ���� 
//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	return 0;
//}
//void* p=&  ;ָ������
/// ����洢 
/// 0x display
//int main()
//{
//	int a = 1;
//	int b = -1;
//	return 0;
//}
//100000-999999 ����4����
//int check(int n)
//{
//	while (n)
//	{
//		if (n % 10 == 0)
//			return 0;
//		n /= 10;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	for (n = 100000; n < 1000000; n++)
//	{
//		if (check(n))
//			sum++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int* p = arr;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", (p+i));
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", *(p+i));
//	}
//	return 0;
//}
//reverse string
int main()
{
	char arr[50] = { 0 };
	gets(arr);
	char* p = arr;
	while (*(p++) != '\0');
	while ((p--) != arr)
	{
		printf("%c", *p);
	}
	return 0;
}