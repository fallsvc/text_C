#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int ple = pow(a, b);
//	double c= 1e3;
//	printf("ple=%d\nc=%.2lf\n", ple, c);
//
//	return 0;
//}
//void test(int arr)//error �����ڲ��ܼ���������� arr ��һ��ָ�����
//{
//	int sz = sizeof(arr) / sizeof(arr[1]);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	test();
//}
// C99  bool//����<stdbool.h> false true
//#include <stdbool.h>
//int main()
//{
//	printf("%d\n", sizeof(bool));//1
//	return 0;
//}
//дһ������ÿ�ε���num+1
// 
//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int sum = 0;
//	
//	while (sum < 20)
//	{
//		add(&sum);
//		printf("sum=%d\n", sum);
//	}
//	return 0;
//}
//��������Ƕ�׵��ã�����Ƕ�׶���
//int test(int *i)
//{
//	printf("666\n");
//	*i+=1;
//}
//int xun()
//{
//	int i = 0;
//	while (i<20)
//	{
//		test(&i);
//	}
//}
//int main()
//{
//	xun();
//	return 0;
//}
//��ʽ����
//#include <string.h>
//int main()
//{
//	int len = strlen("abcdf");
//	printf("%d\n", len);
//	printf("%d", strlen("abcdf"));
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf()����ֵΪ�ַ���
//	return 0;
//}
//#include <stdlib.h>
//void shut()
//{
//	system("shutdown -s");
//}
//int main()
//{
//	shut();
//	return 0;
//}
//���Ҫ�Ѻ����ź��棬��Ҫ����
//int add(int x, int y);
//
//#include "add.h"
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////int add(int x, int y)
////{
////	return x + y;
////}
//#include "pow.h"
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	c = ci(a, b);
//	printf("%d", c);
//	return 0;
//}

//���뾲̬��#pragma comment(lib,"add.lib")//

//  �����ݹ�
// 1.������
// 2.
// %d��ӡ�з�������������������
// %u��ӡ�޷�������
// 
// //��ӡһ������ÿһλ
//int main()
//{
//	int i = 0;
//	unsigned int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		i = num % 10;
//		printf("%d\n", i);
//		num = num / 10;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int r = 0;
//	int arr[20] = {0};
//	unsigned int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		i = num % 10;
//		arr[r] = i;
//		num = num / 10;
//		r++;
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int m = 0;
//	for (m = sz-1; m>=0; m--)
//	{
//		printf("%d\n", arr[m]);
//	}
//	return 0;
//}
//
//void p(unsigned int n)
//{
//	if (n > 9)
//	{
//		p(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	p(num);
//
//	return 0;
//}
#include <string.h>
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}






















