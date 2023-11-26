#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//works 

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//short 2byte 
//						   //*(shout+1) 跳过两个字节
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	printf("%d\n", arr[0]);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 6,7,8,9,10 };
//	int* pul;
//	pul = arr;
//	*(pul + 3) += 3;
//	printf("%d %d \n", *pul, *(pul + 3));
//
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char* p = (char*)&a;
//	*p = 0;
//	printf("%x\n", a);//%x打印16进制
//	return 0;
//}
//打印数组
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//reverse string 
//#include <string.h>
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);//get string(include ' ')
//	//
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	////(1)
//	//for (i = 0; i < n; i++)
//	//{
//	//	k = k * 10 + a;
//	//	sum += k;
//	//}
//	//(2)
//	for (i = 0; i < n; n--)
//	{
//		sum += n * a;
//		a = a * 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
////lily number
//打印1-100000的水仙花树
//n位数 数的每一位的n次方之和等于原数
//#include <math.h>
//int main()
//{
//	
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.calculate 几位数
//		int tmp = i;
//		int n = 1;//至少一个个位数
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2. 每位数的n次方之和
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}
int main()
{
	int i = 0;
	int line = 0;
	scanf("%d", &line);
	int j = 0;
	for (i = 0; i < line; i++)
	{
		//空格
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//star
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//under
	for (i = 0; i < line - 1; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}