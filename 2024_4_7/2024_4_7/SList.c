#include "SList.h"


void SLPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;
	while (pcur)
	{
		printf("%d->", pcur->x);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

//增加
SLTNode* SLBuy(SLTDataType x)
{
	SLTNode* tmp = (SLTNode*)malloc(sizeof(SLTNode));
	if (tmp == NULL)
	{
		perror("malloc");
		exit(1);
	}
	tmp->x = x;
	tmp->next = NULL;

	return tmp;
}
//尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLBuy(x);
	if (*pphead==NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}
}
//头插
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLBuy(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

//头删
void SLTPopFront(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* Prev = *pphead;
	*pphead = (*pphead)->next;
	free(Prev);
	Prev = NULL;
}
//尾删
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead&&*pphead);

	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* ptail = *pphead;
		SLTNode* pFront = *pphead;
		while (ptail->next)
		{
			pFront = ptail;
			ptail = ptail->next;
		}
		pFront->next = NULL;
		free(ptail);
		ptail = NULL;
	}
}
//查找
SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	assert(phead);
	SLTNode* pur = phead;
	while (pur)
	{
		if (pur->x == x)
		{
			return pur;
		}
		pur = pur->next;
	}
	return NULL;
}
//在指定位置之前插⼊数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead && *pphead);
	assert(pos);
	SLTNode* newnode = SLBuy(x);
	if (*pphead == pos)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
}

//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead && *pphead && pos);
	if (pos == *pphead)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}
//在指定位置之后插⼊数据
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = SLBuy(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos&&pos->next);
	SLTNode* next = pos->next;
	pos->next = pos->next->next;
	free(next);
	next = NULL;
}
//销毁链表
void SListDesTroy(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* pur = *pphead;
	while (pur)
	{
		SLTNode* next = pur->next;
		free(pur);
		pur = next;
	}
	*pphead = NULL;
}