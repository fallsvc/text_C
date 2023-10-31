//#include <stdio.h>
//二分
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//int mid=left+(right-left)/2;防止加值溢出
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("zhuadao\n");
//			break;
//		}
//		
//	}
//	if (left > right)
//			printf("zhaobdao\n");
//	return 0;
//}
//多个字符向两边移动，中间汇聚
// 
//char buf[] = "abc";
//[a b c \0]
//int main()
//{
//	char arr1[] = "welcome to here!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr2) - 1;//int right=sizeof(arr2)/sizeof(arr2[0])-2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);// ms
//		left++;
//		right--;
//
//	}
//	return 0;
////}
//system //清空屏幕库函数 system("cls")

//输入密码三次，均错误则退出
#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

int main()
{
	int i = 0;
	char pass[20] = { 0 };
	//假设密码是字符串
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", pass);//字符串名本身是地址不需要&
		if (strcmp(pass, "abcdf") == 0)//strcmp(,) 相等后为0
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码均输入失败，退出程序\n");
	return 0;
 
}