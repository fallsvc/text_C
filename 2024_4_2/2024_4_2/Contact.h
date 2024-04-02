#pragma once

#define _CRT_SECURE_NO_WARNINGS

#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 100

typedef struct peoInfo
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}peoInfo;

typedef struct SeqList Contact;

//通讯录初始化
void ContactInit(Contact* con);
//通讯录销毁
void ContactDestroy(Contact* con);
//添加数据
void ContactAdd(Contact* con);
//删除数据
void ContactDel(Contact* con);
//修改
void ContactModify(Contact* con);
//查找
int FindByName(Contact* con,char name[]);

void ContactShow(Contact* con);

void ContactFind(Contact* con);

void SaveContact(Contact* con);