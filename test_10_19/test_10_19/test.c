//#include <stdio.h>
////int main()
////{
//	int flag = 0;
//	scanf_s("%d", &flag);
//	if (flag < 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("wdf");
//	}
//	return 0;
//}
//int main()
//// //sizeof是单目操作符
//{
////	int a = 10;
////	printf("%d\n", sizeof(a));
////	printf("%d\n", sizeof(int));
////	printf("%d\n", sizeof a);
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//
//	return 0;
//}
// ++,-- 
//int main()
//{
//	int a = 10;
//	int b = a++;//back++;advanced ues and ++
//	//int b=a;a=a+1;
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//强制转换()
//	printf("%d\n", a);
//	return 0;
//}
//3.14默认double型
// 
// 1 正确 0错误
//int main()
//{
//	int r1 = (3 < 5);
//	int r2 = (3 >= 5);
//	printf("r1=%d\n,r2=%d\n", r1, r2);
//	return 0;
//}
//int main()
//{
//	int a = 0, b1, b2, b3, b4;
//	b1 = (a++, a++, a++);//结果是最后一个a值
//	printf("b1=%d\ta=%d\n", b1, a);
//	a = 0;
//	b2 = (++a, ++a, ++a);
//	printf("b2=%d\ta=%d\n", b2, a);
//	a = 0;
//	b3 = a++, a++, a++;
//	printf("b3=%d\ta=%d\n", b3, a);
//	a = 0;
//	b4 = ++a, ++a, ++a;
//	printf("b4=%d\ta=%d\n", b4, a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	i += 5;
//	printf("i=%d\n", i);
//	i ^= 5;
//	printf("i=%d\n", i);
//	i |= 5;
//	printf("i=%d\n", i);
//	i *= 5;
//	printf("i=%d\n", i);
//	return 0;
//}