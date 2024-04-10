#include "SeqList.h"

//顺序表出始化
void SLInit(SL* s)
{
	assert(s);
	s->arr = NULL;
	s->size = s->capacity = 0;
}
//顺序表的销毁
void SLDestroy(SL* s)
{
	assert(s);
	if (s->arr)
	{
		free(s->arr);
	}
	s->arr = NULL;
	s->size = s->capacity = 0;
}

void CheckCapacity(SL* s)
{
	int newCapacity = s->capacity == 0 ? 4 : 2 * s->capacity;
	if (s->size == s->capacity)
	{
		DataType* ret = realloc(s->arr, newCapacity * sizeof(DataType));
		if (ret == NULL)
		{
			perror("realloc");
			exit(1);
		}
		s->arr = ret;
		s->capacity = newCapacity;
	}
}

//顺序表的插入
void SLPushBack(SL* s,DataType x)
{
	assert(s);
	CheckCapacity(s);
	s->arr[s->size++] = x;
}

void SLPopBack(SL* s)
{
	assert(s);
	assert(s->size);

	s->size--;
}

void SLErase(SL* s, int pos)
{
	assert(s);
	assert(pos >= 0 && pos < s->size);
	for (int i = pos; i < s->size - 1; i++)
	{
		s->arr[i] = s->arr[i + 1];
	}
	s->size--;
}