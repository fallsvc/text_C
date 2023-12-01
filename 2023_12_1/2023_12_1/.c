#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//		//-1;
//		//11111111111111111111111111111111-补码
//		//i=od11111111111111111111111111111111
//	}
//	return 0;
//}
//int main()
//{
//	int a = 011;
//	printf("%o\n", a);
//	printf("%x\n", a);//x大小写定义16进制数输出大小写
//	printf("%X\n", a);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 ... -128 127 .... 1 0 -1
//	//while a[i]=0; a[i]='\0';
//	printf("%d\n", strlen(a));
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	scanf("%d", &arr[0]);//other =0;
//	int i = 0;
//	for (i = 0; i< 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//unsigned char i = 0;
////i  0-255
//int main()
//{
//	for (i = 0; i<=255; i++)
//	{
//		printf("hello world!!!\n");
//	}
//	return 0;
//}
//无符号加减有符号  先有符号转化为无符号
//#include <string.h>
//
//int main()
//{
//	//size_t -> unsigned int 
//	//
//	if (strlen("abc") - strlen("abcdfg") >= 0)//
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	float* p = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *p);
//	//printf("%f\n", n);
//	*p = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *p);
//	return 0;
//}
//int main()
//{
//	float a = 1.0f;	
//	printf("%p\n", &a);
//	return 0;
//}