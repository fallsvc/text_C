#include "SeqList.h"
#include "Contact.h"

//初始化通讯录

void InitContact(contact* con)
{
	SLInit(con);
}

//添加通讯录数据

void AddContact(contact* con)
{
	PeoInfo info;
	printf("请输入名字：\n");
	scanf("%s", info.name);
	printf("请输入性别：\n");
	scanf("%s", info.sex);
	printf("请输入tel：\n");
	scanf("%s", info.tel);
	printf("请输入addr：\n");
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
//删除通讯录数据

void DelContact(contact* con)
{
	assert(con);
	char Name[NAME_MAX];
	printf("请输入想要删除的名字：");
	scanf("%s", Name);

	int ret = FindByName(con,Name);
	if (ret < 0)
	{
		printf("未找到\n");
		return;
	}
		
	SLErase(con, ret);
	printf("删除成功\n");
}

//展示通讯录数据

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

//查找通讯录数据

void FindContact(contact* con)
{
	assert(con);
	char name[NAME_MAX];
	printf("输入要找的名字：");
	scanf("%s", name);

	int ret = FindByName(con, name);
	if (ret < 0)
	{
		printf("未找到\n");
		return;
	}
	
	printf("%-15s %-15s %-15s %-15s\n", "name", "gender", "tel", "addr");

	printf("%-15s %-15s %-15s %-15s\n",
		con->arr[ret].name,
		con->arr[ret].sex,
		con->arr[ret].tel,
		con->arr[ret].addr);


}

//修改通讯录数据

void ModifyContact(contact* con)
{
	assert(con);
	char name[NAME_MAX];
	printf("输入你要修改的名字\n");
	scanf("%s", name);

	int ret = FindByName(con, name);
	if (ret < 0)
	{
		printf("未找到\n");
		return;
	}

	printf("请输入名字：\n");
	scanf("%s", con->arr[ret].name);
	printf("请输入性别：\n");
	scanf("%s", con->arr[ret].sex);
	printf("请输入年龄：\n");
	scanf("%s", con->arr[ret].tel);
	printf("请输入addr：\n");
	scanf("%s", con->arr[ret].addr);

	printf("修改成功！！\n");

}

//销毁通讯录数据



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
	printf("保存成功\n");
	fclose(pf);
	pf = NULL;
 }

void DestroyContact(contact* con)
{
	SaveC(con);
	SLDestroy(con);
}