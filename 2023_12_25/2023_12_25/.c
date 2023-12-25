#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//struct A
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}

//struct A
//{
//	char a : 2;
//	char b : 5;
//	char c :6;
//	char d : 7;
//};
//int main()
//{
//	struct A s = { 0 };
//	printf("%d\n", sizeof(struct A));
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	//01100010 00000011 00000100 
//	return 0;
//}

//枚举//--一一列举
//enum day
//{
//	Mon,
//	Tuse=2,
//	wed,
//	Thur,
//	fir,
//	sater,
//	Sun
//};
//
//int main()
//{
//	enum day d = fir;
//
//	printf("%d\n",Mon);//0
//	printf("%d\n", Tuse);//2
//	printf("%d\n", Sun);//7
//
//	return 0;
//}

//共用体
//union un
//{
//	int a;
//	char b;
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.b));
//	return 0;
//}

//int check_sys()
//{
//	/*int a = 1;
//	return *(char*)&a;*/
//
//	union un
//	{
//		char a;
//		int b;
//	}u;
//	u.b = 1;
//	return u.a;
//}
//int main()
//{
//	//int a = 1;//00 00 00 01
//	//01 00 00 00 -小端
//	//00 00 00 01 -大端
//	int ret = check_sys();
//	if (ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//union un
//{
//	char arr[5];
//	int a;
//};
//union u
//{
//	short arr2[7];
//	int b;
//};
//int main()
//{
//	printf("%d\n", sizeof(union un));//8
//	printf("%d\n", sizeof(union u));//16
//
//	return 0;
//}

