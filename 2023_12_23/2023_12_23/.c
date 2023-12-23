#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//实现一个函数，左旋转k个字符
//(1)
//void left_rotate(char arr[], int k)
//{
//	int i = 0;
//	
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		//1
//		char tmp = arr[0];
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//3
//		arr[len - 1] = tmp;
//	}
//}
// 
//(2)
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int k = 0;
//	scanf("%d", &k);
//
//	left_rotate(arr, k);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//杨氏矩阵
//#define row 5
//#define col 5
//struct posi
//{
//	int x;
//	int y;
//};
//struct posi find_num(int arr[][col],int r,int c,int k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct posi p = { -1,-1 };
//	while (x <= r - 1 && y >= 0)
//	{
//		if (k > arr[x][y])
//		{
//			x++;
//		}
//		else if (k < arr[x][y])
//		{
//			y--;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}	
//	}
//	return p;
//}
//int main()
//{
//	int arr[row][col] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	int k = 0;
//	scanf("%d", &k);
//
//	struct posi p=find_num(arr, row, col, k);
//
//	printf("%d %d\n", p.x, p.y);
//	return 0;
//}

//#define row 5
//#define col 5
//
//int find_num(int arr[][col],int*px ,int *py,int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (k > arr[x][y])
//		{
//			x++;
//		}
//		else if (k < arr[x][y])
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}	
//	}
//	return 0;
//}
//int main()
//{
//	int arr[row][col] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int x = row;
//	int y = col;
//	int ret=find_num(arr, &x, &y, k);
//	if (ret)
//		printf("%d %d\n", x, y);
//	else
//		printf("can't find it\n");
//	return 0;
//}

//判断字符串是不是旋转得到

//int is_left_rotate(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int n = len;
//	if (strlen(arr1) != strlen(arr2))
//		return 0;
//	/*while (n)
//	{
//		int i = 0;
//		char tmp = arr2[0];
//		for (i = 0; i < len-1; i++)
//		{
//			arr2[i] = arr2[i + 1];
//		}
//		arr2[len - 1] = tmp;
//		if (!strcmp(arr1, arr2))
//		{
//			return 1;
//		}
//		n--;
//	}*/
//
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		int j = 0;
//		char tmp = arr2[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr2[j] = arr2[j + 1];
//		}
//		arr2[len - 1] = tmp;
//
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
// 		}
//	}
//	return 0;
//}


//int is_left_rotate(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//
//	strncat(arr1, arr1,len1);//尽量不使用strcat 末尾'\0'
//	char* p=strstr(arr1, arr2);
//	if (p != NULL)
//		return 1;
//
//	return 0;
//}
//
//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[] = "cdefgab";
//	int ret=is_left_rotate(arr1, arr2);
//	if (ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

int main()
{
	int arr[10][10] = { 0 };
	//arr 数组第一行地址
	//arr[0] 第一行第一个元素的地址

	return 0;
}