#include "ADB.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == C_MAX)
	{
		printf("FULL\n");
		return;
	}
	//
	getchar();
	printf("Input name:");
	gets(pc->data[pc->count].name);
	printf("Input age:");
	scanf("%d", &(pc->data[pc->count].age));
	getchar();
	printf("Input sex:");
	gets(pc->data[pc->count].sex);
	printf("Input tele:");
	gets(pc->data[pc->count].tele);
	printf("Input address:");
	gets(pc->data[pc->count].addr);

	pc->count++;
	printf("Success!!!\n");
}

void Show(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\n", "name", "age", "sex", "tele", "address");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int FindByTele(Contact* pc,char tele[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0==strcmp(tele,pc->data[i].tele))
			return i;
	}
	return -1;
}

void Del(Contact* pc)
{
	assert(pc);
	char tele[Tele_MAX] = { 0 };
	if (pc->count == 0)
	{
		printf("Empty!!!");
		return;
	}
	printf("Input who do you want to delete tele number(eg.1450220):");
	scanf("%s",tele);
	//1.
	//find
	int pos = FindByTele(pc,tele);
	if (pos == -1)
	{
		printf("Non-Exist\n");
		return;
	}
	//2.
	//delete
	int i = 0;
	for (i = pos; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("Success!!!\n");
}

void Search(Contact* pc)
{
	assert(pc);
	char tele[Tele_MAX] = { 0 };
	if (pc->count == 0)
	{
		printf("Empty!!!");
		return;
	}
	printf("Input who do you want to search tele number(eg.1450220):");
	scanf("%s", tele);
	//1.
	//find
	int pos = FindByTele(pc, tele);
	if (pos == -1)
	{
		printf("Non-Exist\n");
		return;
	}
	//2.print
	printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\n", "name", "age", "sex", "tele", "address");
	printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n",
		pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

void Motify(Contact* pc)
{
	assert(pc);
	char tele[Tele_MAX] = { 0 };
	if (pc->count == 0)
	{
		printf("Empty!!!");
		return;
	}
	printf("Input who do you want to motify tele number(eg. 1450220):");
	scanf("%s",tele);
	//1.
	//find
	int pos = FindByTele(pc, tele);
	if (pos == -1)
	{
		printf("Non-Exist\n");
		return;
	}
	//2.
	//motify
	getchar();
	printf("Input name:");
	gets(pc->data[pos].name);
	printf("Input age:");
	scanf("%d", &(pc->data[pos].age));
	getchar();
	printf("Input sex:");
	gets(pc->data[pos].sex);
	printf("Input tele:");
	gets(pc->data[pos].tele);
	printf("Input address:");
	gets(pc->data[pos].addr);
	printf("Success!!!\n");
}
//By name
int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void Sort(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	printf("Success!!!\n");
}