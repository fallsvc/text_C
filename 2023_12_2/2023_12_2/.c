#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//float memory
//int main()
//{
//	float f = 5.5f;
//	//101.1
//	//1.011*2^2
//	//s=0 m=1.011 e=2
//	//0 10000001 01100000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	// 0x40 b0 00 00
//	////2+127=129
//	printf("%f\n", f);
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001
//	//0 00000000 00000000000000000001001
//	//E=-126
//	//M=0.00000000000000000001001
//	//+ 0.00000000000000000001001*2^-126
//
//	float* p = (float*)&n;
//	printf("%d\n", n);//9
//	printf("%f\n", *p);
//	*p = 9.0;
//	//0 10000010 00100000000000000000000
//	//S=0 E=3 
//	printf("%d\n", n);
//	printf("%f\n", *p);
//	
//	return 0;
//}
// 
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//11111111111111111111111110000000
//	//10000000000000000000000010000000
//	printf("%d\n", a);
//	return 0;
//}
//整型数组，把奇数放前半部分
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//(left<right) 防止数组越界
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if(left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}	
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//scanf("%d", &arr[i]);
//		scanf("%d", (arr + i));
//	}
//	//调整
//	move_odd_even(arr, sz);
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// 
//两个升序排列，合并为一个升序
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int arr3[2000] = { 0 };
//	int i = 0;
//	scanf("%d %d", &m, &n);
//	//输入arr1
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", arr1 + i);
//	}
//	//输入arr2
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr2 + i);
//	}
//	//arr3
//	int j = 0;
//	int k = 0;
//	i = 0;
//	while (j < m && k < n)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			arr3[i++] = arr1[j++];
//		}
//		else
//		{
//			arr3[i++] = arr2[k++];
//		}
//	}
//	while(j < m)
//	{
//		arr3[i++] = arr1[j++];
//	}
//	while (k < n)
//	{
//		arr3[i++] = arr2[k++];
//	}
//	//output
//	for (j = 0; j < i; j++)
//	{
//		printf("%d ", arr3[j]);
//	}
//	return 0;
//}
//void calculate(double n, double* p)
//{
//	*p += n;
//	 n /= 2;
//	 if (n)
//	 {
//		 calculate(n, p);
//	 }
//}
//int main()
//{
//	double n = 100;
//	double sum = 0;
//	double* p = &sum;
//	calculate(n, p);
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	if (1.100)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
int main()
{
	int row = 0;
	scanf("%d", &row);
	int i = 0;
	int j = 0;
	if (row % 2 == 0)
	{
		for (i = 0; i < row / 2; i++)
		{
			for (j=0; j < row / 2 - 1-i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < 2 * i + 1; j++)
			{
				if (i % 2 == 0)
					printf("*");
				else
					printf("#");
			}
			printf("\n");
		}
		//下端
		for (i = 0; i < row / 2; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < 2 * (row/2-i)-1; j++)
			{
				if (i % 2 == 1)
					printf("*");
				else
					printf("#");
			}
			printf("\n");
		}
	}
	else
	{
		for (i = 0; i < row / 2+1; i++)
		{
			for (j = 0; j < row / 2- i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < 2 * i + 1; j++)
			{
				if (i % 2 == 0)
					printf("*");
				else
					printf("#");
			}
			printf("\n");
		}
		//下端
		for (i = 0; i < row / 2; i++)
		{
			for (j = 0; j < i+1; j++)
			{
				printf(" ");
			}
			for (j = 0; j < 2 * (row / 2-i) - 1; j++)
			{
				if (i % 2 == 1)
					printf("*");
				else
					printf("#");
			}
			printf("\n");
		}
	}
	return 0;
}