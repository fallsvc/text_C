#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("����������0-100\n");
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
//	while (1)//1�棬����ѭ��
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
//			continue;//����������룬��ѭ��
//
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
// 
// //break ����ֹͣ
// //continue �������κ�����룬������һ��ѭ��
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
	printf("���������룻");
	scanf_s("%d",&password);

	printf("��ȷ�����룻(Y/N)");
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