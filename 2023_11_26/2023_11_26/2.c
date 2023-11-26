#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	fib(8);
//	printf("%d", cnt);
//	return 0;
//}
//
//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%d\n", x++);
//	} while (x--);//死循环
//	return 0;
//}
//int main()
//{
//	int i = 2;
//	int j = 2;
//	j *= i + j;//先加
//	printf("%d\n", j);
//	return 0;
//}
//
 //*p++ ={*p；
        //p++；
        //}

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    //最大公倍数
//    //(1)
//   /* int c = a > b ? a : b;
//    while (1)
//    {
//        if (c % a == 0 && c % b == 0)
//        {
//            break;
//        }
//        c++;
//    }*/
//    //(2)
//    int i = 1;
//    while (a * i % b)
//    {
//        i++;
//    }
//    printf("%d\n", i*a);
//    return 0;
//}
///input       I like beijing.
//output        beijing. like I
//#include <assert.h>
//
//void reverse(char* left, char* right)
//{
//    assert(left);
//    assert(right);
//    while (left < right)
//    {
//        char* tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[10000] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    reverse(arr, arr + len - 1);
//    char* start = arr;
//    char* end = start;
//    while (*start != '\0')
//    {
//         while (*end != ' '&&*end!='\0')
//            {
//                end++;
//            }
//            reverse(start, end-1);
//            end++;
//            start = end;
//    }
//    printf("%s\n", arr);
//   
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    printf("%p\n", &arr[10]);
//    printf("%p\n", &arr[9]);
//    printf("%p\n", &i);
//
//    return 0;
//}
