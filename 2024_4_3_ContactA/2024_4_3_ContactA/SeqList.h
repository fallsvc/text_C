#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contact.h"

typedef PeoInfo DataType;

typedef struct SeqList
{
	DataType* arr;
	int size;
	int capacity;
}SL;

//��ʼ��˳���
void SLInit(SL* s);
//˳��������
void SLDestroy(SL* s);
//��������
void SLPushBack(SL* s,DataType x);
//ɾ������
void SLPopBack(SL* s);

void SLErase(SL*s,int pos);
