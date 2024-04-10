#include "SeqList.h"
#include "Contact.h"

//��ʼ��ͨѶ¼

void InitContact(contact* con)
{
	SLInit(con);
}

//���ͨѶ¼����

void AddContact(contact* con)
{
	PeoInfo info;
	printf("���������֣�\n");
	scanf("%s", info.name);
	printf("�������Ա�\n");
	scanf("%s", info.sex);
	printf("������tel��\n");
	scanf("%s", info.tel);
	printf("������addr��\n");
	scanf("%s", info.addr);

	SLPushBack(con, info);
}

int FindByName(contact* con,char name[])
{
	
	for (int i = 0; i < con->size; i++)
	{
		if (strcmp(con->arr[i].name, name)==0)
		{
			return i;
		}
	}
	
	return -1;
}
//ɾ��ͨѶ¼����

void DelContact(contact* con)
{
	assert(con);
	char Name[NAME_MAX];
	printf("��������Ҫɾ�������֣�");
	scanf("%s", Name);

	int ret = FindByName(con,Name);
	if (ret < 0)
	{
		printf("δ�ҵ�\n");
		return;
	}
		
	SLErase(con, ret);
	printf("ɾ���ɹ�\n");
}

//չʾͨѶ¼����

void ShowContact(contact* con)
{
	assert(con);
	printf("%-15s %-15s %-15s %-15s\n", "name", "gender", "tel", "addr");

	for (int i = 0; i < con->size; i++)
	{
		printf("%-15s %-15s %-15s %-15s\n", con->arr[i].name,
			con->arr[i].sex, con->arr[i].tel,
			con->arr[i].addr
		);
	}
}

//����ͨѶ¼����

void FindContact(contact* con)
{
	assert(con);
	char name[NAME_MAX];
	printf("����Ҫ�ҵ����֣�");
	scanf("%s", name);

	int ret = FindByName(con, name);
	if (ret < 0)
	{
		printf("δ�ҵ�\n");
		return;
	}
	
	printf("%-15s %-15s %-15s %-15s\n", "name", "gender", "tel", "addr");

	printf("%-15s %-15s %-15s %-15s\n",
		con->arr[ret].name,
		con->arr[ret].sex,
		con->arr[ret].tel,
		con->arr[ret].addr);


}

//�޸�ͨѶ¼����

void ModifyContact(contact* con)
{
	assert(con);
	char name[NAME_MAX];
	printf("������Ҫ�޸ĵ�����\n");
	scanf("%s", name);

	int ret = FindByName(con, name);
	if (ret < 0)
	{
		printf("δ�ҵ�\n");
		return;
	}

	printf("���������֣�\n");
	scanf("%s", con->arr[ret].name);
	printf("�������Ա�\n");
	scanf("%s", con->arr[ret].sex);
	printf("���������䣺\n");
	scanf("%s", con->arr[ret].tel);
	printf("������addr��\n");
	scanf("%s", con->arr[ret].addr);

	printf("�޸ĳɹ�����\n");

}

//����ͨѶ¼����



void SaveC(contact* con)
{
	assert(con);
	FILE* pf = fopen("text", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	for (int i = 0; i < con->size; i++)
	{
		fwrite(con->arr + i, sizeof(PeoInfo), 1, pf);
	}
	printf("����ɹ�\n");
	fclose(pf);
	pf = NULL;
 }

void DestroyContact(contact* con)
{
	SaveC(con);
	SLDestroy(con);
}