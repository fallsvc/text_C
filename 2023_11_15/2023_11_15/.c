#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

// (  ,  �� )// ,�ű��ʽ
//int main()
//{
//	int a = 0;
//	while (a = get_val(), count(), a > 0)
//	{
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;//[]�±����ò�����
//	//arr[7]=*(arr+7)			//������ arr 7
//	7[arr] = 9;
//	printf("%d\n", 7[arr]);
//	return 0;
//}
//�������ò�����

//int add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int c = add(a, b);//������add a b
//	printf("%d\n", c);
//
//	return 0;
//}
//#include <string.h>
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//void set_stu(struct stu *ps)
//{		//(*ps).name
//	/*strcpy((*ps).name, "zhangsan");
//	(*ps).age = 20;
//	(*ps).score = 100.0;*/
//		//ps->name
//	//strcpy(ps->name, "zangsan");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//void print_stu(struct stu ss)
//{
//	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
//}
//int main()
//{
//	struct stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//
//	return 0;
//}
////int main()
////{
////	char arr[10] = { 0 };
////	strcpy(arr, "abxsdssdws");
////	printf("%s\n", arr);
////	return 0;
////}
//��������ת��
//int main()
//{
//	char c = -1;
//	//1000000000000000000000000000000001
//	//1111111111111111111111111111111110
//	//1111111111111111111111111111111111����
//	//11111111-c
//	//char c ��1 =1111111111111111111111111111111
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//char ��8λ������
//	char a = 5;
//	//000000000000000000000000000000000101
//	//00000101
//	char b = 126;
//	//000000000000000000000000000001111110
//	//01111110
//	char c = a + b;
//	//000000000000000000000000000000000101
//	//000000000000000000000000000001111110
//	//10000011-c
//	printf("%d\n", c);
//	return 0;
//}