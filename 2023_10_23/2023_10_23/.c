#include <stdio.h>
//int main()
//{
//	//int a = 10;
//	//printf("%p\n", &a);//&a打印地址
////	int* p = &a;// p指针变量
////	printf("%d\n",p);
////	return 0;
//
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	printf("%zu\n", sizeof(char*));//8
//	return 0;
//}
//int* p, op;
//int *p, *op;
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
////int main()
////{
////	struct stu s = { "zhangsan",20,"nan","124657533" };
////	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
////	return 0;
////}
//void printf(struct stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//}
//int main()
//{
//	struct stu ps = { "zy",20,"nan","34777841" };
//	print(&ps);
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int m = a / b;
	int n = a % b;
	printf("m=%d\tn=%d\n", m, n);
	return 0;
}