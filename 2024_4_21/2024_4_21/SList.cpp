#include "SList.h"

void SinList::SLPrint()
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
SLTNode* SinList::SLBuy(SLTDataType x)
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
void SinList::SLTPushBack(SLTDataType x)
{
	assert(&phead);
	SLTNode* newnode = SLBuy(x);
	if (phead == NULL)
	{
		phead = newnode;
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
void SinList::SLTPushFront(SLTDataType x)
{
	assert(&phead);
	SLTNode* newnode = SLBuy(x);
	newnode->next = phead;
	phead = newnode;
}

//头删
void SinList::SLTPopFront()
{
	assert(&phead && phead);
	SLTNode* Prev = phead;
	phead = (phead)->next;
	free(Prev);
	Prev = NULL;
}
//尾删
void SinList::SLTPopBack()
{
	assert(&phead && phead);

	if ((phead)->next == NULL)
	{
		free(phead);
		phead = NULL;
	}
	else
	{
		SLTNode* ptail = phead;
		SLTNode* pFront = phead;
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
SLTNode* SinList::SLTFind(SLTDataType x)
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
void SinList::SLTInsert(SLTNode* pos, SLTDataType x)
{
	assert(&phead && phead);
	assert(pos);
	SLTNode* newnode = SLBuy(x);
	if (phead == pos)
	{
		SLTPushFront(x);
	}
	else
	{
		SLTNode* prev = phead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
}

//删除pos节点
void SinList::SLTErase(SLTNode* pos)
{
	assert(&phead && phead && pos);
	if (pos == phead)
	{
		SLTPopFront();
	}
	else
	{
		SLTNode* prev = phead;
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
void SinList::SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = SLBuy(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
//删除pos之后的节点
void SinList::SLTEraseAfter(SLTNode* pos)
{
	assert(pos && pos->next);
	SLTNode* next = pos->next;
	pos->next = pos->next->next;
	free(next);
	next = NULL;
}
//销毁链表
void SinList::SListDesTroy()
{
	assert(&phead&&phead);
	SLTNode* pur = phead;
	while (pur)
	{
		SLTNode* next = pur->next;
		free(pur);
		pur = next;
	}
	phead = NULL;
}