//char �ַ����� �ַ������� \0
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
//ת���ַ�
//{
//	//printf("you ok\?\?)");
//	/*printf("%c\n", '\'');*/
//	/*printf("\"''\"");*/
//
//		return 0;
//}
//%d����
//%c�ַ�
//%s�ַ���
//%f float
//%lf double
//%zu sizeof����ֵ

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
//	printf("%d\n",strlen("c;\test\638\test.c"));//zifu length �ո�Ϊ1 ת���ַ�Ϊ1
//
//	return 0;
//}
//ע�� 1.//  2./* */

//ѡ�����//
#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("Ҫ�ú�ѧϰ��(1/0)��");
//	scanf_s("%d",&input);
//	if (input == 1)
//	{
//		printf("offer\n");
//	}
//	else
//	{
//		printf("����˿\n");
//	}
//	return 0;
//}
//ѭ��
int main()
{
	int line = 0;
	printf("�������\n");

	while (line < 2000);
	{
		printf("д���룺%d\n", line);
		line++;
	}
	if (line >= 20000)
	{
		printf("��ͺͷ\n");
	}
	else
	{
		printf("��������");
	}

	return 0;
}