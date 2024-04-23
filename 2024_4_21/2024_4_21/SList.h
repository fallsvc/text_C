#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLTDataType;

typedef struct SList
{
	SLTDataType x;
	struct SList* next;

}SLTNode;

class SinList
{
public:
	SinList():phead(NULL) {};
	~SinList()
	{
		SListDesTroy();
	}
	void SLPrint();
	//增加
	SLTNode* SLBuy(SLTDataType x);
	//尾插
	void SLTPushBack(SLTDataType x);
	//头插
	void SLTPushFront(SLTDataType x);
	//头删
	void SLTPopFront();
	//尾删
	void SLTPopBack();
	//查找
	SLTNode* SLTFind(SLTDataType x);
	//在指定位置之前插⼊数据
	void SLTInsert(SLTNode* pos, SLTDataType x);

	//删除pos节点
	void SLTErase(SLTNode* pos);
	//在指定位置之后插⼊数据
	void SLTInsertAfter(SLTNode* pos, SLTDataType x);
	//删除pos之后的节点
	void SLTEraseAfter(SLTNode* pos);
	//销毁链表
	void SListDesTroy();

private:
	SLTNode* phead;

};
