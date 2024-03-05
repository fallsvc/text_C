#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//int Dexob(int x,int cd,char*a)
//{
//	assert(a);
//	char* p = a;
//	int right = cd - 1;
//	//judge 
//	char flag = '0';
//	if (x < 0)
//	{
//		flag = '1';
//		x = -x;
//	}
//	while (cd--)
//	{
//		*p++=(x % 2) + '0';
//		x /= 2;
//	}
//	*p = '\0';
//	p = a;
//	//reverse
//	int left = 0;
//	while (left < right)
//	{
//		char tmp = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = tmp;
//		left++;
//		right--;
//	}
//	*a = flag;
//	return x;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	char a[33];
//	int ret=Dexob(n, 32, a);
//	
//	printf("%s\n", a);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	int average = sum / 10;
//
//	printf("Æ½¾ùÖµ=%d\n", average);
//	return 0;
//}

void ex_arr(int* p1, int* p2,int n)
{
	while (n--)
	{
		int tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,0 };
	ex_arr(arr1, arr2, 5);
	
	return 0;
}