#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//typedef int LNDataType;
//
//typedef struct ListNode
//{
//	LNDataType x;
//	struct ListNode* next;
//}ListNode;
//
//ListNode* BuyNode(LNDataType x)
//{
//	ListNode* ret = malloc(sizeof(ListNode));
//	if (ret == NULL)
//		exit(1);
//	ret->x = x;
//	ret->next = NULL;
//
//	return ret;
//}
//
//ListNode* createCircle(int n)
//{
//	ListNode* head = BuyNode(1);
//	ListNode* tail = head;
//	for (int i = 2; i <= n; i++)
//	{
//		tail->next = BuyNode(i);
//		tail = tail->next;
//	}
//	tail->next = head;
//
//	return tail;
//}
//
//void Display(ListNode* tail)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", tail->x);
//		tail = tail->next;
//	}
//}
//
//int main()
//{
//	ListNode*p=createCircle(5);
//	Display(p);
//	return 0;
//}

//分割链表大于X的放前面(1)

typedef int LNDataType;

typedef struct ListNode
{
	LNDataType x;
	struct ListNode* next;
}ListNode;

ListNode* select(ListNode* head, int x)
{
	assert(head);
	//创建头节点
	ListNode* newhead, * newtail;
	newhead = newtail = malloc(sizeof(ListNode));
	//遍历链表
	ListNode* pur = head;
	
	while (pur)
	{
		if (pur->x < x)
		{
			ListNode* tmp= pur;
			pur = pur->next;
			tmp->next = newhead->next;
			newhead->next = tmp;
		}
		else
		{
			newtail->next = pur;
			newtail = newtail->next;
			pur = pur->next;
		}
	}

	newtail->next = NULL;

	ListNode* ret = newhead->next;
	free(newhead);
	free(newtail);
	newhead = newtail = NULL;

	return ret;
}

