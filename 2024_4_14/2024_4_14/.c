//#include "List.h"
//
////�����ڵ�
//LTNode* LTBuyNode(LTDataType n)
//{
//	LTNode* node = malloc(sizeof(LTNode));
//	if (node == NULL)
//	{
//		perror("malloc");
//		exit(1);
//	}
//	node->data = n;
//	node->next = node->prev = node;
//
//	return node;
//}
//
////��ʼ��1
//void LTInit(LTNode** pphead)
//{
//	*pphead = LTBuyNode(-1);
//}
////��ʼ��2
////LTNode* LTInit()
////{
////	LTNode*phead = LTBuyNode(-1);
////	return phead;
////}
//
////ͷ��
//void LTPushFront(LTNode* phead, LTDataType x)
//{
//	assert(phead);
//	LTNode* newnode = LTBuyNode(x);
//	//phead phead->next newnode
//	newnode->prev = phead;
//	newnode->next = phead->next;
//
//	phead->next->prev = newnode;
//	phead->next = newnode;
//}
////β��
//void LTPushBack(LTNode* phead,LTDataType x)
//{
//	assert(phead);
//	LTNode* newnode = LTBuyNode(x);
//
//	newnode->prev = phead->prev;
//	newnode->next = phead;
//
//	phead->prev->next = newnode;
//	phead->prev = newnode;
//}
//
////��ӡ
//void LTPrint(LTNode* phead)
//{
//	assert(phead && phead->next != phead);
//	LTNode* pur = phead->next;
//	while (pur != phead)
//	{
//		printf("%d->", pur->data);
//		pur = pur->next;
//	}
//	printf("\n");
//}
//
////βɾ
//void LTPopBack(LTNode* phead)
//{
//	assert(phead && phead->next != phead);
//
//	LTNode* del = phead->prev;
//	//del del->prev phead
//	del->prev->next = phead;
//	phead->prev = del->prev;
//
//	free(del);
//	del = NULL;
//}
////ͷɾ
//void LTPopFront(LTNode* phead)
//{
//	assert(phead && phead->next != phead);
//	LTNode* del = phead->next;
//	//phead del del->next
//	phead->next = del->next;
//	del->next->prev = phead;
//
//	free(del);
//	del = NULL;
//}
//
////����
//LTNode* LTFind(LTNode* phead,LTDataType x)
//{
//	assert(phead);
//	LTNode* pur = phead->next;
//	while (pur != phead)
//	{
//		if (pur->data == x)
//			return pur;
//		pur = pur->next;
//	}
//	return NULL;
//}
//
////ɾ��
//void LTErase(LTNode* pos)
//{
//	assert(pos);
//	pos->prev->next = pos->next;
//	pos->next->prev = pos->prev;
//
//	free(pos);
//	pos = NULL;
//}
////����
//void LTInsert(LTNode* pos,LTDataType x)
//{
//	assert(pos);
//	LTNode* newnode = LTBuyNode(x);
//
//	newnode->prev = pos;
//	newnode->next = pos->next;
//
//	pos->next->prev = newnode;
//	pos->next = newnode;
//
//}
////����
//void LTDestroy(LTNode* phead)
//{
//	assert(phead);
//	LTNode* pur = phead->next;
//	while (pur != phead)
//	{
//		LTNode* next = pur->next;
//		free(pur);
//		pur = next;
//	}
//	free(phead);
//	phead = NULL;
//}