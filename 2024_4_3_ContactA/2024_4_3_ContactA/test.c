#include "SeqList.h"
#include "Contact.h"

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
	contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("Select :");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			ModifyContact(&con);
			break;
		case 4:
			FindContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (op != 0);

	DestroyContact(&con);
	return 0;
}