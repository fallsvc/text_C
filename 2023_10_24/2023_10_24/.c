#include <stdio.h>
//int main()
//{
//	int a = 10;
//	printf("a=%d",a);
//	return 0;
//}
//int test()
//{
//	int a = 4;
//	if (a == 3)
//		return 1;
//	return 0;//else更好
//
//}
//int main()
//{
//	int r = test();
//	printf("%d\n",r);
//	return 0;
//}
//int main()
//{
//	int sum = 3;
//	if (5 == sum)//if(sum==5)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}
//int main()
//{
//	int sum = 0;
//	scanf_s("%d", &sum);
//	if (sum % 2 == 1)
//		printf("odd");
//	else
//		printf("even");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
// switch 分支
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	else if (3 == day)
//		printf("星期三\n");
//	//.....
//	return 0;
//}		
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("mon");
//		break;
//	case 2:
//		printf("tus");
//		break;
//	case 3:
//		printf("wens");
//	case 4:
//		printf("thus");
//		break;
//	case 5:
//		printf("fri");
//		break;
//	case 6:
//		printf("sat");
//		break;
//	case 7:
//		printf("sun");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d\nn=%d\n", m, n);
//	return 0;
//}
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{
		case 1:n++;
		case 2:m++; n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m=%d\nn=%d\n", m, n);
	return 0;
}