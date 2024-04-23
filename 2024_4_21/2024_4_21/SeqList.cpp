//#define _CRT_SECURE_NO_WARNINGS
//#include "SeqList.h"
//
//void SeqList::SLInit()
//{
//	s.arr = NULL;
//	s.size = s.capacity = 0;
//}
////顺序表的销毁
//void SeqList::SLDestroy()
//{
//	if (s.arr)
//	{
//		free(s.arr);
//	}
//	s.arr = NULL;
//	s.size = s.capacity = 0;
//}
//
//void SeqList::CheckCapacity()
//{
//	int newCapacity = s.capacity == 0 ? 4 : 2 * s.capacity;
//	if (s.size == s.capacity)
//	{
//		DataType* ret = (DataType*)realloc(s.arr, newCapacity * sizeof(DataType));
//		if (ret == NULL)
//		{
//			perror("realloc");
//			exit(1);
//		}
//		s.arr = ret;
//		s.capacity = newCapacity;
//	}
//}
//
////顺序表的插入
//void SeqList::SLPushBack(DataType x)
//{
//	CheckCapacity();
//	s.arr[s.size++] = x;
//}
//
//void SeqList::SLPopBack()
//{
//	assert(s.size);
//	s.size--;
//}
//
//void SeqList::SLErase(int pos)
//{
//	
//	assert(pos >= 0 && pos < s.size);
//	for (int i = pos; i < s.size - 1; i++)
//	{
//		s.arr[i] = s.arr[i + 1];
//	}
//	s.size--;
//}