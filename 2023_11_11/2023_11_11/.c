#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//int add(int n)
//{
//	if (n == 100)
//		return 3;
//	else
//		return add(n + 1) + 3;
//}
//int main()
//{
//	int n = 2;
//	int ret = Fun(n);
//	int i = add(n);
//	printf("ret=%d\n", ret);
//	printf("i=%d\n", i);
//	return 0;
//}
//字符串逆序 递归
//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		right--;
//		left++;
//	}
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(my_strlen(str+1)>=2)
//	reverse(str + 1);
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abc2dfg";//[ b c d f g \0]
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if(left<right)
//	reverse(arr, left + 1, right - 1);
//}
//int main()
//{
//	char arr[]="abc3dgf";
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	reverse(arr,left,right);
//
//	printf("%s", arr);
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcbc";
//	//int arr[] = { 1,2,3 };
//	int ret = strlen(arr);
//	int n = sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n%d\n", ret,n);
//
//	return 0;
//}
//int Dig(unsigned int n)
//{
//	if (n > 9)
//	{
//		return Dig(n / 10) + n % 10;
//	}
//	return n;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum = Dig(n);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
////#include <math.h>
//不用 pow()
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//
//	return 0;
//}
//int main()
//{
//	//逗号表达式
//	//依次计算，最后一个结果
//	int arr[] = { 1,2,(3,4),5 };//(3,4)=4
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", arr[2]);
//	return 0;
//}
//int arr[10]//array 类型为 int[10]
//int main()
//{
//	char str[] = "abcdgf";
//	//[a b c d g f \0]
//	//sizeof 操作符 求空间大小 单位字节byte
//	//strlen库函数，专门求字符串长度，从参数给定的地址向后找\0
//	//,统计\0前字符个数
//	printf("%d %d", sizeof(str), strlen(str));
//
//	return 0;
//}
//Swap arrry
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//			//error ex
//			/*int tmp[5] = { 0 };
//			tmp = arr1;
//			arr1 = arr2;
//			arr2 = tmp;*/
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr1[%d]=%d\n", i, arr1[i]);
//		printf("arr2[%d]=%d\n", i, arr2[i]);
//	}
//	return 0;
//}

//出始化 init() 数组全为0
//print() 打印每个元素
//reveres() 完成元素逆位
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		arr[i] = 0;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//		while(left < right)
//			{
//				int tmp = arr[left];
//				arr[left] = arr[right];
//				arr[right] = tmp;
//				left++;
//				right--;
//			}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}
int main()
{
	int arr[10] = { 0 };
	int n = 0;
	scanf("%d", &n);

	printf("%d", arr[1]);
	return 0;
}