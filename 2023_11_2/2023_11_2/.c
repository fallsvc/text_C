#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//review
//void Swap(int *px,int *py)//传址调用
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int add(int x,int y)//
//{
//	return x+y;
//}
//int main()
//{
//	int a, b;
//	int c = 0;
//	printf("input the value of a and b\n");
//	scanf("%d %d", &a, &b);
//	printf("before a=%d\tb=%d\n", a, b);
//	Swap(&a, &b);
//	c = add(a, b);
//	printf("end a=%d\tb=%d\n",a,b);
//	printf("a+b=%d\n", c);
//	return 0;
//}
//函数: 形参：函数范围内有效，对形参的改变不会改变实参(临时拷贝)
// int add(intx,inty)
// {
//		int z=x;
//		x=y;
//		y=z;
// }
// int main()
// {
// int a=10;int b=20;
// printf("%d %d",a,b);//a=10,b=20
// return 0;
// }
//		实参；
//判断一个数是不是素数

//打印100-200的素数
#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j ;
//		int flag = 1;//sqrt()开平方double
//		for(j = 2; j <= sqrt(i);j++)//for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//判断素数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 2; i < 200; i += 1)//ban i+1
//	{
//			if (is_prime(i))
//			{
//				printf("%d\n", i);
//				count++;
//			}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//_打印1000-2000的闰年
//1.能被4整除，并且不能被100整除
//2.能被400整除
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//				printf("%d\n", year);
//		}
//		if (year % 400 == 0)
//			printf("%d\n", year);
//	}
//	return 0;
//}
// int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//			printf("%d\n", year);
//	}
//	return 0;
//}
//int leap(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (leap(i))
//			printf("%d\n", i);
//	}
//	return 0;
//}
//写一个函数，二分查找
int binary_search(int arr[],int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 10;
	int sz = sizeof(arr) / sizeof(arr[1]);
	//找到了返回下标
	//找不到返回-1
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了下标是%d\n",ret);
	}
	return 0;
}