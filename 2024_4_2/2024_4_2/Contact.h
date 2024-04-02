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

//ͨѶ¼��ʼ��
void ContactInit(Contact* con);
//ͨѶ¼����
void ContactDestroy(Contact* con);
//�������
void ContactAdd(Contact* con);
//ɾ������
void ContactDel(Contact* con);
//�޸�
void ContactModify(Contact* con);
//����
int FindByName(Contact* con,char name[]);

void ContactShow(Contact* con);

void ContactFind(Contact* con);

void SaveContact(Contact* con);