//char 字符类型 字符串结束 \0
//char ch='a';
//#include <stdio.h>
//#include <string.h>
//int main()
////{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f'};
//
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//
//	return 0;
//}
 //strlen()//string length//
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f'};
//	//int len = strlen("abc");
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}
//转义字符
//{
//	//printf("you ok\?\?)");
//	/*printf("%c\n", '\'');*/
//	/*printf("\"''\"");*/
//
//		return 0;
//}
//%d整型
//%c字符
//%s字符串
//%f float
//%lf double
//%zu sizeof返回值

// \
{
	/*printf("abc\0bc");*/
	/*printf("c;\test\test.c");*/// \t=tab \\t output \t
	/*printf("c;\\test\\test.c");*/
	/*printf("\a");*/
//		return 0;
//}
//  \ddd 8
////  \xdd 16
//{
//	/*printf("%c\n", '\130');*/
//	/*printf("%c\n", '\x58');*/
//	printf("%d\n",strlen("c;\test\638\test.c"));//zifu length 空格为1 转义字符为1
//
//	return 0;
//}
//注释 1.//  2./* */

//选择语句//
#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("要好好学习吗(1/0)？");
//	scanf_s("%d",&input);
//	if (input == 1)
//	{
//		printf("offer\n");
//	}
//	else
//	{
//		printf("打螺丝\n");
//	}
//	return 0;
//}
//循环
int main()
{
	int line = 0;
	printf("加入比特\n");

	while (line < 2000);
	{
		printf("写代码：%d\n", line);
		line++;
	}
	if (line >= 20000)
	{
		printf("好秃头\n");
	}
	else
	{
		printf("继续加油");
	}

	return 0;
}