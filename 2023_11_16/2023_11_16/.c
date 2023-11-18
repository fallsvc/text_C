#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ASCII  0-127
// char (-128) - (127)
//int main()
//{
//	printf("%d\n", sizeof(char));
//
//	return 0;
//}
//整型提升
// char 存八位（二进制）
// short 16位（二进制）
//int main()
//{
//	//char a = 0xb6;//1byte
//	//short b = 0xb600;//short 2byte
//	//int c = 0xb000000;//4
//
//	unsigned char a = 0xb6;//unsigned 补0
//	//
//	unsigned short b = 0xb600;
//	int c = 0xb000000;
//
//	if (a == 0xb6)
//		printf("a\n");
//	if (b == 0xb600)
//		printf("b\n");
//	if (c == 0xb000000)
//		printf("c\n");
//	return 0;
//}
//%u unsigned decimal
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}
//算术转换
//向大类型转换

//操作符优先级
// N/A 无序
// L->R 左到右

//控制求值循序
//&& || ? :
//  

//问题表达式
//c+ --c;
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i=%d\n", i);
//	return 0;
//}
////int fun()
////{
////	static int count = 1;
////	return ++count;
////}
////int main()
////{
////	int an;
////	an = fun() - fun() * fun();
////	printf("%d\n", an);//-10
////	return 0;
////}
int main()
{
	int a = 1;
	int b = (++a) + (++a) + (++a);
	printf("%d\n", b);

	return 0;
}