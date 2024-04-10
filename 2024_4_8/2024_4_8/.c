#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h><
#include <assert.h>
#include <stdlib.h>

//
//void PrintZ(int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i < j)
//				printf("* ");
//			else if (i == j)
//				printf("# ");
//			else
//				printf("@ ");
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 10;
//	PrintZ(n);
//	return 0;
//}

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType x;
	struct SListNode* next;

}SLTNode;


void SLTPrint(SLTNode* phead)
{
	assert(phead);
	SLTNode* pur = phead;
	while (pur)
	{
		printf("%d->", pur->x);
		pur = pur->next;
	}
	printf("NULL\n");
}

SLTNode* SLTBuyNode(SLTDataType x)
{
	SLTNode* ret = (SLTNode*)malloc(sizeof(SLTNode));
	if (ret == NULL)
	{
		perror("malloc");
		exit(1);
	}
	ret->x = x;
	ret->next = NULL;

	return ret;
}
//ͷ������ɾ��/β������ɾ��
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//��β
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}

}
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead && *pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* ptail = *pphead;
		SLTNode* prev = *pphead;
		while (ptail->next)
		{
			prev = ptail;
			ptail = ptail->next;
		}
		free(ptail);
		ptail = NULL;
		prev->next = NULL;
	}
	
}
void SLTPopFront(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* f = *pphead;
	*pphead = (*pphead)->next;
	free(f);
	f = NULL;
}

//����
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
//��ָ��λ��֮ǰ��������
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead && *pphead && pos);

	
	if (*pphead==pos)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* newnode = SLTBuyNode(x);
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
}
//ɾ��pos�ڵ�
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
			prev = prev->next;
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}
//��ָ��λ��֮���������
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos && pos->next);
	SLTNode* del = pos->next;
	pos->next = pos->next->next;
	free(del);
	del = NULL;
}
//��������
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
