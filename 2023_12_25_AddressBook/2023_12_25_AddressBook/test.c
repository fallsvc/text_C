#include "ADB.h"

void menu()
{
	printf("********************************\n");
	printf("***** 1.add      2.delete  *****\n");
	printf("***** 3.search   4.motify  *****\n");
	printf("***** 5.show     6.sort    *****\n");
	printf("***** 0.exit               *****\n");
	printf("********************************\n");
}

enum option
{
	exi,
	add,
	del,
	srh,
	mtf,
	show,
	sort
};

int main()
{
	int input = 0;
	//Initialize ADB
	Contact con;
	InitContact(&con);

	do
	{
		menu();
		printf("Please select:");
	    scanf("%d", &input);
		switch (input)
		{
		case exi:
			printf("Exit\n");
			break;
		case add:
			AddContact(&con);
			break;
		case del:
			Del(&con);
			break;
		case srh:
			Search(&con);
			break;
		case mtf:
			Motify(&con);
			break;
		case show:
			Show(&con);
			break;
		case sort:
			Sort(&con);
			break;
		default:
			printf("Input error//(again):");
		}
	} while (input);
	return 0;
}