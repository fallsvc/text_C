//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <assert.h>
//#include <math.h>
//
//int Dexob(size_t x, int cd, char* a)
//{
//	assert(a);
//	*(a + cd) = '\0';
//
//	while (cd--)
//	{
//		*(a + cd) = (x % 2) + '0';
//		x /= 2;
//	}
//	return x;
//}
//
//void ex_d(int cd, char* a,char*o)
//{
//	assert(a&&o);
//
//	int n = cd/3;
//	int flag = cd % 3;
//	//第一个数
//	int i = 0;
//	while (flag--)
//	{
//		*o = (*(a +i)-48) * pow(2, flag)+48;
//		i++;
//	}
//	o++;
//	//
//	flag = cd % 3;
//	a = a + flag - 1;
//
//	while (n--)
//	{
//		*(o++) = (*(a + 1) - 48) * pow(2, 2) + (*(a + 2) - 48) * pow(2, 1) + (*(a + 3) - 48) + 48;
//		a += 3;
//	}
//	*o = 0;
//	return ;
//}
//
//int main()
//{
//	int n = 0;
//	int cd = 32;
//	char a[10000];
//	char o[1000];
//	scanf("%d", &n);
//
//	int ret = Dexob(n, cd, a);
//	if (ret)
//	{
//		printf("位数不够\n");
//		return 1;
//	}
//
//	printf("%s\n", a);
//
//	ex_d(cd, a,o);
//	printf("%s\n", o);
//
//	return 0;
//}
//
//
