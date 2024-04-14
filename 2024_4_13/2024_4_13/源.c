#include "ln.h"

//初始化通讯录
void InitContact(contact** con)
{
	con = NULL;
}

contact* Buycontact()
{
	contact* ret = malloc(sizeof(contact));
	if (ret == NULL)
		exit(1);
	printf("请输入添加名字：");
	scanf("%s", ret->x.name);
	printf("请输入添加性别：");
	scanf("%s", ret->x.sex);
	printf("请输入添加年龄：");
	scanf("%d", &(ret->x.age));
	printf("请输入添加电话：");
	scanf("%s", ret->x.tel);
	printf("请输入添加地址：");
	scanf("%s", ret->x.addr);
	
	return ret;
}
//添加通讯录数据尾加
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
	//遍历
	contact* pur = con;
	while (pur && strcmp(pur->x.name, name))
	{
		pur = pur->next;
	}
	return pur;
}
//删除通讯录数据
void DelContact(contact** con)
{
	assert(con && *con);
	
	printf("请输入你要删除的名字：");
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

//展示通讯录数据
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
//查找通讯录数据
void FindContact(contact* con)
{
	assert(con);
	printf("请输入你要查找的名字：");
	contact* pur = FindByName(con);
	if ( pur== NULL)
		printf("没有找到\n");
	else
	{
		printf("%15s %15s %15s %15s %15s\n", "name", "sex", "age", "tel", "addr");
		printf("%15s %15s %15d %15s %15s\n", pur->x.name, pur->x.sex, pur->x.age, pur->x.tel, pur->x.addr);
	}
}
//修改通讯录数据
void ModifyContact(contact** con)
{
	assert(*con && con);
	printf("请输入你要修改的名字：");
	contact* ret = FindByName(*con);
	if (!ret)
	{
		printf("没有找到\n");
		return;
	}
	printf("请输入修改名字：");
	scanf("%s", ret->x.name);
	printf("请输入修改性别：");
	scanf("%s", ret->x.sex);
	printf("请输入修改年龄：");
	scanf("%d", &(ret->x.age));
	printf("请输入修改电话：");
	scanf("%s", ret->x.tel);
	printf("请输入修改地址：");
	scanf("%s", ret->x.addr);
	
	printf("修改成功\n");
}
//销毁通讯录数据
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