#include "SeqList.h"

//void test1()
//{
//	SL s;
//	SLInit(&s);
//	SLPushFront(&s, 1);
//	SLPushFront(&s, 2);
//	SLPushFront(&s, 3);
//	SLPushFront(&s, 4);
//	SLPrint(&s);
//	SLPopFront(&s);
//	SLPrint(&s);
//	SLPopBack(&s);
//	SLPopBack(&s);
//	SLPopBack(&s);
//	SLPrint(&s);
//	SLDestroy(&s);
//}
//
//void testC()
//{
//	Contact con;
//	ContactInit(&con);
//
//	ContactDestroy(&con);
//}
//int main()
//{
//	//test1();
//	testC();
//	return 0;
//}

void menu()
{
	printf("******通讯录******\n");
	printf("**1.Add   2.Del**\n");
	printf("**3.Modify4.Find**\n");
	printf("**5.show  0.exit**\n");
	printf("*****************\n");
	printf("*****************\n");
}
void main()
{
	int op = -1;
	Contact con;
	ContactInit(&con);
	do
	{
		menu();
		printf("Select :");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			ContactAdd(&con);
			break;
		case 2:
			ContactDel(&con);
			break;
		case 3:
			ContactModify(&con);
			break;
		case 4:
			ContactFind(&con);
			break;
		case 5:
			ContactShow(&con);
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (op != 0);

	ContactDestroy(&con);
	return 0;
}