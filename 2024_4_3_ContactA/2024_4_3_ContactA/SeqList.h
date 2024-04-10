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

//初始化顺序表
void SLInit(SL* s);
//顺序表的销毁
void SLDestroy(SL* s);
//插入数据
void SLPushBack(SL* s,DataType x);
//删除数据
void SLPopBack(SL* s);

void SLErase(SL*s,int pos);
