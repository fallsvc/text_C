#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int arr[]="abc";//[a,b,c,\0]
// 
//�������ַ������� ��������ʱ���� �ݹ�
// 
//������ʱ����
//int len(char* str)
//{
//	int count = 0;//��ʱ����
//	while (*str != '/0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//û����ʱ����
//int len(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + len(str + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdfg";
//	int le = len(arr);//arr��ʾ��Ԫ�ص�ַ
//	printf("%d\n", le);
//
//	return 0;
//}
//�׳�

//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
////int fac(int n)
////{
////	if (n <= 1)
////		return 1;
////	else
////		return n * fac(n - 1);
////}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//쳲���������
//1��1��2��3��5��8��13������
//int count = 0;
//int fib(int n)
//{
//	if (n == 3);
//	 count++;
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//		return 1;
//
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", count);
//	printf("%d\n", ret);
//	return 0;
//}
//�ݹ������1�ķǵݹ�2static

