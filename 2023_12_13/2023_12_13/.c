#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4/8
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4/8
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//
//	return 0;
//}
//宏定义
//简单形式
// 
//#define S1(x) (x+1)*(x+2)
//int main()
//{
//	int n = 1;
//	int ret=S1(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d", *(a + 1), *(ptr - 1));
//
//	return 0;
//}
// 
////x86：
//struct Test
//{
//	int Num;
//	char* pcName;
//	short S;
//	char cha[2];
//	short sba[4];
//}*p=(struct Test*)0x100000;
////假设p为0x100000
////已知Test类型20字节
//int main()
//{
//	printf("%p\n", p + 0x1);
//	//0x100000+20-->0x100014
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}
// 
//x86
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x ", ptr1[-1], *ptr2);
//
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5)};
//	int* p;
//	p = a[0];
//	printf("%d ", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//常数的地址是补码
//	return 0;
//}
//int main()
//{
//	int a[] = { -4,4 };
//	printf("%p\n", a);
//	printf("%p\n", a+1);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = (int*)(&aa + 1);
//	int* p2 = (int*)(*(aa + 1));
//	printf("%d %d\n", *(p1 - 1), *(p2 - 1));
//	printf("%p\n", aa[0]);
//	printf("%p\n", 1);
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","ailbak" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
