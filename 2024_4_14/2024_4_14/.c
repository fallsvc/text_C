//#include "List.h"
//
////创建节点
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
////出始化1
//void LTInit(LTNode** pphead)
//{
//	*pphead = LTBuyNode(-1);
//}
////出始化2
////LTNode* LTInit()
////{
////	LTNode*phead = LTBuyNode(-1);
////	return phead;
////}
//
////头插
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
////尾插
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
////打印
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
////尾删
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
////头删
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
////查找
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
////删除
//void LTErase(LTNode* pos)
//{
//	assert(pos);
//	pos->prev->next = pos->next;
//	pos->next->prev = pos->prev;
//
//	free(pos);
//	pos = NULL;
//}
////插入
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
////销毁
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