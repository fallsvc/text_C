#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ~ 按位取反 (二进制）所有位
//int main()
//{
//	int a = 13;
//	int b = ~a;
//	printf("%d\n", b);
//
//	return 0;
//}
//int main()
//{
//	int a = 13;
//	//00000000000000000000000000001101改为
//	//00000000000000000000000000001111
//	// 
//	//00000000000000000000000000000010
//	a |= (1 << 1);
//	int b = a;
//	printf("%d\n", b);
//
//	return 0;
//}
//int main()
//{
//	int a = 29;
//	//00000000000000000000000000011101改为
//	//00000000000000000000000000001101
//
//	//11111111111111111111111111101111
//	a &= (~(1 << 4));
//	printf("%d\n", a);//13
//	return 0;
//}
// 
// ++ --
//int main()
//{
//	//int a = 3;
//	////int b = ++a;
//	//int b = a++;
//	//printf("a=%d\n", a);
//	//printf("b=%d\n", b);
//	//return 0;
//	int a = 10;
//	printf("%d\n", a--);
//	printf("%d", a);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//*p = a
//	*p = 20;
//	printf("%d\n", a);
//
//	return 0;
//}
//int main()
//{
//	//int a = (int)3.14;
//	//printf("%d\n", a);
//
//	int a = 0;
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof int);//err
//	return 0;
//}
// tpic 
//
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n",sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//if ("abc" == "abcsjdjsjk");//err
//应使用strcmp() 
//int main()
//{
//	char s[] = "abcde";
//	char s1[] = "abcdf";
//	printf("%d\n", sizeof(s));
//	printf("%s\n", s1);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%d%%\n", (int)(45.0 / 57 * 100));
//
//	return 0;
//}
//int main()
//{
//	puts("\a\a\aerdw");
//	printf(",,,\a\a\a\a\a\n");
//
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 0;
//	//int c = a && b ;
//	int c = a || b;
//	printf("%d\n", c);
//	if (c)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int is_leap(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	if (is_leap(y))
//	{
//		printf("leap year\n");
//	}
//	else
//	{
//		printf("not\n");
//	}
//	return 0;
//}
// 
// //&& ||  明确了后不算
//int main()
//{
//	/*int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);*/
//
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
//	return 0;
//}
// 三目操作符 ()? :
int main()
{
	int a = 3;
	int b = 5;
	a>b ?( a = b) : (b = a);
	printf("%d\n%d\n", a, b);

	return 0;
}
