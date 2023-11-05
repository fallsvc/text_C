#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//交换
//int main()
//{
//	int  a, b, c, d;
//	scanf("%d %d", &a, &b);
//	c = a;
//	d = b;
//	printf("%d\n%d", c, d);
//	return 0;
//}
#include <string.h>
#include <stdlib.h>
int main()
{

	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在一分钟内关机请输入：我是猪\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//<string.h> strcmp比较相等时为0
	{
		system("shutdown -a");//<process.h> or <stdlib.h> system
	}
	else
	{
		goto again;
	}
	return 0;
}
//int main()
//{
//
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("你的电脑将在一分钟内关机请输入：我是猪\n");
//	while (1)
//	{
//		
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)//<string.h> strcmp
//		{
//			system("shutdown -a");//<process.h> or <stdlib.h> system
//			break;
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello boys";
//
//	strcpy(arr1, arr2);//strcpy(目的地，复制地）<string.h>
//	printf("%s\n", arr1);
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello boys";
//	memset(arr, 'x', 5);//arr前5位存x
//	memset(arr+6, 'x', 3);
//	printf("%s\n", arr);
//	return 0;
//}
//函数定义
//int get_max(int x,int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//函数调用
//	int i=get_max(a,b);
//	printf("%d\n", i);
//
//	return 0;
//}
//void test()//void不需要返回
//{
//	printf("hhhh");
//}
//形参x,y
//void Swap(int x,int y)//error
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n%d\n", a, b);
//	Swap(a, b);
//	//a,b实参
//	printf("%d\n%d\n", a, b);
//		
//	return 0;
//}
//void swap(int*px,int*py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前a=%d\nb=%d\n", a, b);
//	swap(&a,&b);
//	printf("交换后a=%d\nb=%d\n", a, b);
//	return 0;
//}