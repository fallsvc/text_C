#include "ln.h"

//��ʼ��ͨѶ¼
void InitContact(contact** con)
{
	con = NULL;
}

contact* Buycontact()
{
	contact* ret = malloc(sizeof(contact));
	if (ret == NULL)
		exit(1);
	printf("������������֣�");
	scanf("%s", ret->x.name);
	printf("����������Ա�");
	scanf("%s", ret->x.sex);
	printf("������������䣺");
	scanf("%d", &(ret->x.age));
	printf("��������ӵ绰��");
	scanf("%s", ret->x.tel);
	printf("��������ӵ�ַ��");
	scanf("%s", ret->x.addr);
	
	return ret;
}
//���ͨѶ¼����β��
void AddContact(contact** con)
{
	assert(con);
	contact* ret = Buycontact();
	
	if (*con == NULL)
		*con = ret;
	else
	{
		contact* pur = *con;
		while (pur->next)
		{
			pur = pur->next;
		}
		pur->next = ret;
	}	
}
contact* FindByName(contact* con)
{
	char name[NAME_MAX];
	scanf("%s", name);
	//����
	contact* pur = con;
	while (pur && strcmp(pur->x.name, name))
	{
		pur = pur->next;
	}
	return pur;
}
//ɾ��ͨѶ¼����
void DelContact(contact** con)
{
	assert(con && *con);
	
	printf("��������Ҫɾ�������֣�");
	contact* ret = FindByName(*con);
	if (!ret)
		return;
	if (ret == *con)
	{
		*con = (*con)->next;
		free(ret);
		ret = NULL;
		return;
	}
	contact* prev = *con;
	while (prev->next != ret)
	{
		prev = prev->next;
	}
	prev->next = ret->next;
	free(ret);
	ret = NULL;

}

//չʾͨѶ¼����
void ShowContact(contact* con)
{
	assert(con);
	contact* pur = con;
	printf("%15s %15s %15s %15s %15s\n", "name", "sex", "age", "tel", "addr");
	while (pur)
	{
		printf("%15s %15s %15d %15s %15s\n", pur->x.name, pur->x.sex, pur->x.age, pur->x.tel, pur->x.addr);
		pur = pur->next;
	}
}
//����ͨѶ¼����
void FindContact(contact* con)
{
	assert(con);
	printf("��������Ҫ���ҵ����֣�");
	contact* pur = FindByName(con);
	if ( pur== NULL)
		printf("û���ҵ�\n");
	else
	{
		printf("%15s %15s %15s %15s %15s\n", "name", "sex", "age", "tel", "addr");
		printf("%15s %15s %15d %15s %15s\n", pur->x.name, pur->x.sex, pur->x.age, pur->x.tel, pur->x.addr);
	}
}
//�޸�ͨѶ¼����
void ModifyContact(contact** con)
{
	assert(*con && con);
	printf("��������Ҫ�޸ĵ����֣�");
	contact* ret = FindByName(*con);
	if (!ret)
	{
		printf("û���ҵ�\n");
		return;
	}
	printf("�������޸����֣�");
	scanf("%s", ret->x.name);
	printf("�������޸��Ա�");
	scanf("%s", ret->x.sex);
	printf("�������޸����䣺");
	scanf("%d", &(ret->x.age));
	printf("�������޸ĵ绰��");
	scanf("%s", ret->x.tel);
	printf("�������޸ĵ�ַ��");
	scanf("%s", ret->x.addr);
	
	printf("�޸ĳɹ�\n");
}
//����ͨѶ¼����
void DestroyContact(contact** con)
{
	assert(con && *con);
	contact* prev = *con;
	contact* pur = prev->next;
	while (pur)
	{
		free(prev);
		prev = pur;
		pur = pur->next;
	}
	free(prev);
	prev = *con = NULL;
}