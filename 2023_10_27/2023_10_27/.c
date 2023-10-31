#include <stdio.h>

//1*2*3*4*5*6*n
// 
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int n = 0;
//	scanf_s("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
////1*3*5*7
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int n = 0;
//	scanf_s("%d", &n);////  数组不需要取地址 如arr[]
//	/*for (i = 1; i <= n; i += 2)*/
//	for (i = 1; i <= n; i=i+2)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//1!+2!+3!+4!
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int n = 0;
//	int sum = 0;
//	scanf_s("%d", &n);
//	/*for (a = 1; a <= n; a++)
//	{
//		b = b * a;
//		c = c + b;
//	}*/
//	for (b = 1; b <= n; b++)
//	{
//		c = 1;
//		for (a = 1; a <= b; a++)
//		{
//			c = c * a;
//		}
//		sum = sum + c;
//	}
//	printf("%d\n%d\n",sum,c );
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,11 };
//	int k = 10;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("抓住了，！1\n");
//			break;
//		}
//	}
//	printf("%d\n", i);
//	if (i == sz)
//	{
//		printf("找不到！1\n");
//	}
//	return 0;
//}
//鞋 不超过300，你才；//
//二分
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了下标为:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}