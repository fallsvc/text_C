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
//        if (slow->val < x)//ͷ��
//        {
//            slow->next = pcur;
//            pcur = slow;
//        }
//        else//β��
//        {
//            ptail->next = slow;
//            ptail = ptail->next;
//        }
//        slow = fast;
//    }
//    if (ptail)
//    {
//        free(newhead);//�ͷŵ���ͷ�ڵ�
//        newhead = NULL;
//        ptail->next = NULL;//�����ִ���ⲽ�������ͻ������ѭ��
//    }
//    return pcur;
//}