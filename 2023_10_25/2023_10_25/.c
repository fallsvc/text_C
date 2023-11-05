#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("请输入数字0-100\n");
//
//	scanf_s("%d", &a);
//
//	if (a == 49)
//		printf("WIN !!!");
//	else
//		printf("No");
//
//		return 0;
//
//}
//int main()
//{
//	while (1)//1真，无限循环
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		++i;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			//break;
//			continue;//跳过后面代码，死循环
//
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
// 
// //break 永久停止
// //continue 跳过本次后面代码，进行下一次循环
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//
//	}
//	return 0;
//}
int main()
{
	char password[20] = { 0 };
	printf("请输入密码；");
	scanf_s("%d",&password);

	printf("请确认密码；(Y/N)");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}