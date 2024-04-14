//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//
//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//};
//
//typedef struct ListNode ListNode;
//struct ListNode* partition(struct ListNode* head, int x) {
//    ListNode* slow = head;
//    ListNode* newhead = (ListNode*)malloc(sizeof(ListNode));
//    ListNode* pcur, * ptail;
//    pcur = ptail = newhead;
//    if (slow)
//    {
//        ptail->next = slow;
//        ptail = ptail->next;
//        pcur = ptail;
//        slow = slow->next;
//    }
//    else
//        return NULL;
//    while (slow)
//    {
//        ListNode* fast = slow->next;//
//        if (slow->val < x)//头插
//        {
//            slow->next = pcur;
//            pcur = slow;
//        }
//        else//尾插
//        {
//            ptail->next = slow;
//            ptail = ptail->next;
//        }
//        slow = fast;
//    }
//    if (ptail)
//    {
//        free(newhead);//释放掉带头节点
//        newhead = NULL;
//        ptail->next = NULL;//如果不执行这步操作，就会造成死循环
//    }
//    return pcur;
//}