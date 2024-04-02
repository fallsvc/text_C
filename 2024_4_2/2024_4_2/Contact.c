#include "Contact.h"
#include "SeqList.h"

//通讯录初始化
void ContactInit(Contact* con)
{
	SLInit(con);
}
//通讯录销毁
void ContactDestroy(Contact* con)
{
	SaveContact(con);
	SLDestroy(con);
}
//通讯录添加

void ContactAdd(Contact* con)
{
	peoInfo info;
	printf("请输入名字：\n");
	scanf("%s", info.name);
	printf("请输入性别：\n");
	scanf("%s", info.gender);
	printf("请输入年龄：\n");
	scanf("%d", &info.age);
	printf("请输入tel：\n");
	scanf("%s", info.tel);
	printf("请输入addr：\n");
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
	printf("删除名字\n");
	scanf("%s", name);

	int ret=FindByName(con, name);
	if (ret < 0)
		printf("未找到\n");

	SLErase(con, ret);
	printf("Delete Success!\n");

}

void ContactShow(Contact* con)
{
	assert(con);
	//表头
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
	printf("修改的名字\n");
	scanf("%s", name);

	int ret = FindByName(con, name);
	if (ret < 0)
		printf("未找到\n");

	printf("请输入名字：\n");
	scanf("%s", con->arr[ret].name);
	printf("请输入性别：\n");
	scanf("%s", con->arr[ret].gender);
	printf("请输入年龄：\n");
	scanf("%d", &con->arr[ret].age);
	printf("请输入tel：\n");
	scanf("%s", con->arr[ret].tel);
	printf("请输入addr：\n");
	scanf("%s", con->arr[ret].addr);

	printf("修改成功！！\n");
}

void ContactFind(Contact* con)
{
	assert(con);
	char name[NAME_MAX];
	printf("查找的名字\n");
	scanf("%s", name);

	int ret = FindByName(con, name);
	if (ret < 0)
		printf("未找到\n");

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

	printf("保存成功\n");
	fclose(pf);
	pf = NULL;
}