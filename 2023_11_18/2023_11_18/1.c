#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//  ָ��  
//  *p ����
//   p ��ַ
//int main()
//{
//	char ch[2] = { 0 };
//	scanf("%s", &ch);
//	char a=getchar();
//
//	printf("%c\n", a);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

// x86  -32λ  ָ�����4���ֽ�
// x64  -64     8
//int main()
//{
//	char* pc = NULL;
//	//sizeof �����޷�������
//	printf("%zu\n", sizeof(pc));
//	return 0;
//}
//int main()
//{
//	int* a = 1;
//	a = 2;
//	printf("%d\n", a);
//
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	//
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int ix = -4, iy;
//	long lx = -41567, ly;
//	double dx = -3.141592, dy;
//	iy = abs(ix);
//	ly = labs(lx);
//	dy = fabs(dx);
//	printf("%d\n%ld\n%f\n",iy,ly,dy);
//
//	return 0;
//}
/* strcpy example */
//#include <string.h>
//
//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;
//}
//int main()
//{
//	/*int a = 0x11223344;
//	int* p = &a;
//	*p = 0;*/
//
//	char* pc = (char*)&a;
//	*pc = 0;
//	//ָ�����;��� �����÷��ʼ����ֽ�
//	//int*  4byte
//	//char* 1
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* p = (char*) & a;
//	printf("pa=%p\n", pa);
//	printf("pa+1=%p\n", pa + 1);
//	printf("P=%p\n", p);
//	printf("p+1=%p\n", p + 1);
//
//	return 0;
//}
//int main()
//{
//	int*a;
//	a = 10;
//	printf("%d\n", a);
//
//	return 0;
//}
// Ұָ��  
// 
//int main()
//{
//	int*p;//δ��ʼ��p ���ֵ
//	*p = 10;//�Ƿ����� p Ұָ��
//
//	printf("%d\n", p);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//p ������ Ұָ��
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	return &a;
//}
//int main()
//{
//	int* p = test();//pҰָ��
//	printf("%p\n", p);
//	*p = 20;
//	printf("%d\n", *p);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p= &a;
//	if (*p != NULL)
//	{
//		printf("%p\n", p);
//		*p = 10;
//		printf("%d\n",*p);
//	}
//	
//
//	return 0;
//}
//#define N_V 5
//
//int main()
//{
//	float val[N_V];
//	float* vp;
//	for (vp = &val[0]; vp < &val[N_V];)
//	{
//		*vp++ = 0;//= { *vp=0;
//			      //     vp++;
//	}			  //   }
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�����±�д��
//	/*for (i = 0; i < sz; i++)
//	{
//		arr[i] = 1;
//	}*/
//
//	/*int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*p = 1;
//		p++;
//	}*/
//
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}
//ָ�����  (Ԫ�ظ���)
//��������ָ�������
//��ָ��ָ��ͬһ�ռ� ��array
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);/9
//
//	return 0;
//}
//#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abdsdsd");
//	printf("%d\n", len);
//	return 0;
//}
////////zz
//int my_strlen(char* str)
//{
//	char* ch = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - ch);
//}
//int main()
//{
//	int ch = my_strlen("abcd");
//	printf("%d\n", ch);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + 1));
//	}
//	return 0;
//}
void pri(int* str, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *(str + i));
	}
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	pri(arr, 10);

	return 0;
}