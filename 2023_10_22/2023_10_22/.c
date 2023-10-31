#include <stdio.h>
////typedef //类型重命名
//typedef unsigned int uint;
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//////}Node;
//int main()
//{
//	unsigned int sum = 0;
//	uint sum2 = 0;
//	struct Node n;
//	Node n2;
//	return 0;
//}
//静态 static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数
// 1.
void test()//任何返回不需要
{
	int a = 1;//
	int b = a++;
	printf("a=%d\tb=%d\n", a, b);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}

//void test()
//{
//	static int a = 1;//static使程序不重复 保留a为运算后的值
//	int b = a++;
//	printf("a=%d\tb=%d\n", a, b);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//   }
//		return 0;
//}
//2.
//extern /声明外部符号
//extern int si;//add.c test
//int main()
//{
//	printf("%d", si);
//	return 0;
//}
//extern int add(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n",sum);
//	return 0;
//}
//register-寄存器
//1.寄存器(集成在CPU)
//2.高速缓存(cache)
//3.内存
//4.硬盘
//int main()
//{
// //寄存器变量
//	register int num = 3;//建议3存放在寄存
//	return 0;
//}
//#define num 100//定义标识符常量
//int main()
//{
//	printf("num=%d\n", num);
//	int n = num;
//	printf("n=%d", n);
//	int arr[num] = { 0 };
//	return 0;
//}
//#define add(x,y) ((x*y))//定义宏
////==
////int add(int x, int y)
////{
////	return x + y;
////}
//int main()
//{
//	int a = 1;
//	int b = 9;
//	int c = add(a, b);
//	printf("c=%d", c);
//	return 0;
//}
#/*define  f(x,y) (x/y) //faulty
int main()
{
	float a = 5.0;
	int b = 5;
	double an = f(a, b);
	printf("an=%d", an);
	return 0;
}*/
