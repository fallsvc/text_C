#include "Contact.h"
#include "SeqList.h"

//ͨѶ¼��ʼ��
void ContactInit(Contact* con)
{
	SLInit(con);
}
//ͨѶ¼����
void ContactDestroy(Contact* con)
{
	SaveContact(con);
	SLDestroy(con);
}
//ͨѶ¼���

void ContactAdd(Contact* con)
{
	peoInfo info;
	printf("���������֣�\n");
	scanf("%s", info.name);
	printf("�������Ա�\n");
	scanf("%s", info.gender);
	printf("���������䣺\n");
	scanf("%d", &info.age);
	printf("������tel��\n");
	scanf("%s", info.tel);
	printf("������addr��\n");
	scanf("%s", info.addr);

	SLPushFront(con, info);
}

int FindByName(Contact* con,char name[])
{

	for (int i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->arr[i].name, name))
			return i;
	}
	return -1;
}

void ContactDel(Contact* con)
{
	assert(con);
	char name[NAME_MAX];
	printf("ɾ������\n");
	scanf("%s", name);

	int ret=FindByName(con, name);
	if (ret < 0)
		printf("δ�ҵ�\n");

	SLErase(con, ret);
	printf("Delete Success!\n");

}

void ContactShow(Contact* con)
{
	assert(con);
	//��ͷ
	printf("%-15s %-15s %-15s %-15s %-15s\n", "name", "gender", "age", "tel", "addr");

	for (int i = 0; i < con->size; i++)
	{
		printf("%-15s %-15s %-15d %-15s %-15s\n", con->arr[i].name,
			con->arr[i].gender, con->arr[i].age, con->arr[i].tel,
			con->arr[i].addr
		);
	}
}

void ContactModify(Contact* con)
{
	assert(con);
	char name[NAME_MAX];
	printf("�޸ĵ�����\n");
	scanf("%s", name);

	int ret = FindByName(con, name);
	if (ret < 0)
		printf("δ�ҵ�\n");

	printf("���������֣�\n");
	scanf("%s", con->arr[ret].name);
	printf("�������Ա�\n");
	scanf("%s", con->arr[ret].gender);
	printf("���������䣺\n");
	scanf("%d", &con->arr[ret].age);
	printf("������tel��\n");
	scanf("%s", con->arr[ret].tel);
	printf("������addr��\n");
	scanf("%s", con->arr[ret].addr);

	printf("�޸ĳɹ�����\n");
}

void ContactFind(Contact* con)
{
	assert(con);
	char name[NAME_MAX];
	printf("���ҵ�����\n");
	scanf("%s", name);

	int ret = FindByName(con, name);
	if (ret < 0)
		printf("δ�ҵ�\n");

	printf("%-15s %-15s %-15s %-15s %-15s\n", "name", "gender", "age", "tel", "addr");

	printf("%-15s %-15s %-15d %-15s %-15s\n",
		con->arr[ret].name,
		con->arr[ret].gender,
		con->arr[ret].age,
		con->arr[ret].tel,
		con->arr[ret].addr);

}

void SaveContact(Contact* con)
{
	assert(con);
	FILE* pf = fopen("text", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	for (int i = 0; i < con->size; i++)
	{
		fwrite(con->arr + i, sizeof(peoInfo), 1, pf);
	}

	printf("����ɹ�\n");
	fclose(pf);
	pf = NULL;
}