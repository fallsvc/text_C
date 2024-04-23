//#define _CRT_SECURE_NO_WARNINGS
//
//#include "标头.h"
//#include <iostream>
//#include <cassert>
//
//using namespace std;
//
//// Constructor
//SeqList::SeqList()
//{
//}
//
//// Destructor
//SeqList::~SeqList()
//{
//    SLDestroy();
//}
//
//// Initialize the sequence list
//void SeqList::SLInit()
//{
//    s.arr = new DataType[10];
//    if (s.arr == NULL)
//    {
//        cout << "动态内存分配失败" << endl;
//        exit(-1);
//    }
//    s.size = 0;
//    s.capacity = 10;
//}
//
//// Destroy the sequence list
//void SeqList::SLDestroy()
//{
//    delete[] s.arr;
//    s.arr = NULL;
//    s.size = 0;
//    s.capacity = 0;
//}
//
//// Insert data at the end
//void SeqList::SLPushBack(DataType x)
//{
//    if (s.size == s.capacity)
//    {
//        s.capacity *= 2;
//        DataType* newArr = new DataType[s.capacity];
//        if (newArr == NULL)
//        {
//            cout << "动态内存分配失败" << endl;
//            exit(-1);
//        }
//        for (int i = 0; i < s.size; ++i)
//        {
//            newArr[i] = s.arr[i];
//        }
//        delete[] s.arr;
//        s.arr = newArr;
//    }
//    s.arr[s.size++] = x;
//}
//
//// Delete data from the end
//void SeqList::SLPopBack()
//{
//    if (s.size == 0)
//        return;
//    s.size--;
//}
//
//// Delete data at the specified position
//void SeqList::SLErase(int pos)
//{
//    if (pos < 0 || pos >= s.size)
//        return;
//    for (int i = pos; i < s.size - 1; ++i)
//    {
//        s.arr[i] = s.arr[i + 1];
//    }
//    s.size--;
//}
