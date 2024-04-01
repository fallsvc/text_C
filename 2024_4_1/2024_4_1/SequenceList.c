
#include "SequenceList.h"

void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

//����
void SLDestroy(SL* ps)
{
	if(ps->arr)
	free(ps->arr);

	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

void SLCheckCapacity(SL*ps)
{
	if (ps->capacity == ps->size)
	{
		int NewCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* ret = realloc(ps->arr, NewCapacity * sizeof(SLDataType));
		if (ret == NULL)
		{
			perror("realloc");
			exit(1);//ֱ���˳�����
		}

		ps->arr = ret;
		ps->capacity = NewCapacity;
	}
}
//β����������
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	//ps->arr[ps->size] = x;
	//++ps->size;
	SLCheckCapacity(ps);

	ps->arr[ps->size++] = x;
}

//ͷ����������
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}

void SLPrint(SL s)
{
	assert(s.size);

	for (int i = 0; i < s.size; i++)
	{
		printf("%d ", s.arr[i]);
	}
	printf("\n");
}

void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);
	//˳���Ϊ��
	--ps->size;
}

void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);
	//������ǰ�ƶ�һλ
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	--ps->size;
}