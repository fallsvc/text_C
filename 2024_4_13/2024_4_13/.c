//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//
////* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
////*
////*
////* @param n int整型
////* @param m int整型
////* @return int整型
////* /
//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//};
//typedef struct ListNode ListNode;
//
//ListNode* BuyLN(int n)
//{
//    ListNode* new = malloc(sizeof(ListNode));
//    if (new == NULL)
//        exit(1);
//    new->val = n;
//    new->next = NULL;
//
//    return new;
//}
////创建环形链表
//ListNode* createCircle(int n)
//{
//    ListNode* head = BuyLN(1);
//    ListNode* pur = head;
//    for (int i = 2; i <= n; i++)
//    {
//        pur->next = BuyLN(i);
//        pur = pur->next;
//    }
//    pur->next = head;
//
//    return pur;
//}
//int ysf(int n, int m)
//{
//    ListNode* prev = createCircle(n);
//    ListNode* pur = prev->next;
//    int i = 1;
//    while (pur != pur->next)
//    {
//        if (i != m)
//        {
//            prev = pur;
//            pur = pur->next;
//            i++;
//        }
//        else
//        {
//            prev->next = pur->next;
//            free(pur);
//            pur = prev->next;
//            i = 1;
//        }
//    }
//    i = pur->val;
//    free(pur);
//    pur = prev = NULL;
//    return i;
//}