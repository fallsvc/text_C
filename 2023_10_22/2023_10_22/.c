#include <stdio.h>
////typedef //����������
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
//��̬ static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���
// 1.
void test()//�κη��ز���Ҫ
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
//	static int a = 1;//staticʹ�����ظ� ����aΪ������ֵ
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
//extern /�����ⲿ����
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
//register-�Ĵ���
//1.�Ĵ���(������CPU)
//2.���ٻ���(cache)
//3.�ڴ�
//4.Ӳ��
//int main()
//{
// //�Ĵ�������
//	register int num = 3;//����3����ڼĴ�
//	return 0;
//}
//#define num 100//�����ʶ������
//int main()
//{
//	printf("num=%d\n", num);
//	int n = num;
//	printf("n=%d", n);
//	int arr[num] = { 0 };
//	return 0;
//}
//#define add(x,y) ((x*y))//�����
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
