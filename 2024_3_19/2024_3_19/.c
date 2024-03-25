#include<stdio.h>
#include <math.h>

//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}

//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}

int check_s()
{
	union un
	{
		char a;
		int b;
	}u;
	u.b = 1;

	return u.a;
}
int main()
{
	
	if (check_s())
		printf("小端\n");
	else
		printf("大端\n");

	return 0;
}

//struct st
//{
//	//成员;
//};//变量;

//eg.
//struct student
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	//成员顺序初始化
//	struct student p1 = { "zhang",20 };
//	//指定顺序初始化
//	struct student p2 = { .age=21,.name="zhang"};
//
//	return 0;
//}

//struct
//{
//	int age;
//	int cd;
//}x;
//struct
//{
//	int age;
//	int cd;
//}*p1;
//
//int main()
//{
//	p1 = &x;
//	return 0;
//}

//struct ST
//{
//	int age;
//	struct ST* next;
//};

//struct ST
//{
//	char b;
//	int c;
//	char a[5];
//};