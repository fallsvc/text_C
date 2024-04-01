#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//静态
//#define N 100
//
//struct Seqlist
//{
//	int arr[N];
//	int size;//有效数据个数
//};

typedef int SLDataType;
//动态顺序表
typedef struct SeqList
{
	SLDataType* arr;
	int size;
	int capacity;
}SL;

void SLInit(SL* ps);

void SLDestroy(SL* ps);

void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);

void SLPopBack(SL* ps);
void SLPopFront(SL* ps);

void SLPrint(SL s);

void SLInsert(SL* ps, int pos, SLDataType x);

void SLErase(SL * ps, int pos);

int SLFind(SL* ps, SLDataType x);