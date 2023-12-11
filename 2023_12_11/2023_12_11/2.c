#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//review pointers
int main()
{
	//指针类型决定加减几个字节
	//解引用访问权限
	int a = 0;
	int* p = &a;

	char b = 'd';
	char* pc = &b;

	return 0;
}