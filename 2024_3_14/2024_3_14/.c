#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <stdlib.h>
#include <assert.h>
//#include <string.h>

//memcpy 
//memmove
//memset
//memcmp


//int main()
//{
//	int a = 1;
//	if(*(char*)&a == 1)
//		printf("xiaoduan\n");
//	else
//		printf("daduan\n");
//
//	return 0;
//}


//char* myStrncpy(char* d, const char* s,size_t n)
//{
//	assert(d && s);
//	char* ret = d;
//	while (n--)
//	{
//		*d++ = *s++;
//	}
//	return ret;
//}

//char* myStrncat(char* d, char* s, int n)
//{
//	assert(d && s);
//	char* ret = d;
//	//d指向'\0'
//	while (*d != 0)
//		d++;
//	//追加
//	while (n--)
//		*d++ = *s++;
//	//结尾'\0'
//	*d = 0;
//
//	return ret;
//}

//void* myMemcpy(void* d,const void* s, size_t n)
//{
//	assert(d && s);
//	void* ret = d;
//	while (n--)
//	{
//		*(char*)d = *(char* )s;
//		d = (char*)d + 1;
//		s = (char*)s + 1;
//	}
//	return ret;
//}

//void* myMemmove(void* d, void* s, size_t n)
//{
//	assert(d && s);
//	void* ret = d;
//	//left->right
//	if (d < s)
//	{
//		while (n--)
//		{
//			*(char*)d = *(char*)s;
//			d = (char*)d + 1;
//			s = (char*)s + 1;
//		}
//		
//	}
//	//right->left
//	else
//	{
//		d = (char*)d + n - 1;
//		s = (char*)s + n - 1;
//		while (n--)
//		{
//			*(char*)d = *(char*)s;
//			d = (char*)d - 1;
//			s = (char*)s - 1;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	char a[10] = "abcdegfh";
//	char b[] = "fff";
//	myMemmove(a+1, a+3, 3);
//
//	printf("%s\n", a);
//	return 0;
//}

//int main()
//{
//	char a[10] = "abc";
//	char b[] = "ffffff";
//	char*ret=myStrncat(a, b, 2);
//
//	printf("%s\n", a);
//	return 0;
//}

//int Dxd()
//{
//	int a = 1;
//	int flag = 0;
//	if (*(char*)&a)
//		flag = 1;
//
//	return flag;
//}
//
//int main()
//{
//	
//	if (Dxd())
//		printf("小端\n");
//	else
//		printf("大端\n");
//	
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
//	int min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
//	int zho = 0;
//	if (a <= max && a >= min)
//		zho = a;
//	if (b <= max && b >= min)
//		zho = b;
//	if (c <= max && c >= min)
//		zho = c;
//
//	printf("%d %d %d\n", max, zho, min);
//
//	return 0;
//}

//int main()
//{
//	double sum = 0;
//	double flag = 1.0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i*flag;
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	for (int i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			n++;
//		}
//	}
//	//99
//	n++;
//	printf("%d\n", n);
//
//	return 0;
//}

//int main()
//{
//	for (int i = 1000; i < 2000; i = i + 4)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}

void e_sort(int* a)
{
	
	for (int j = 0; j < 9; j++)
	{
		if (a[j] > a[j + 1])
		{	
			int tmp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = tmp;
		}
	}
	return ;
}
int main()
{
	int a[10] = { 1,20,31,4,5,6,7,8,9,0 };
	e_sort(a);

	printf("%d\n", a[9]);

	return 0;
}