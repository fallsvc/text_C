#include <stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%d\n", 97);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;//初始化
//	while (i <= 100)//判断
//	{
//		printf("i=%d\n", i);
//		i++;//调整
//	}
//	return 0;
//}
//for(赋值;判断;调整)
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		printf("i=%d\t", i);
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)//i++最后执行
//	{
//		if (i == 50)
//			//break;
//			continue;//for 不跳过i++，而while 会跳过continue后面的i++
//		printf("i=%d\t", i);
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)//for循环判断省略意味着判断会恒成立
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int x, y;
//	/*for (x = 0, y = 0; x < 2&&y < 5; x++, y++)*/
//	for (x = 0, y = 0; x < 2 || y < 5; x++, y++)
//		printf("hehe\n");
//	return 0;
//}
// 1|0=1 //1&0=0

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//循环0次 k=0不是判断
//		k++;
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("i=%d\n", i);
//		i++;
//	} while (i <= 10);
//		return 0;
//}
