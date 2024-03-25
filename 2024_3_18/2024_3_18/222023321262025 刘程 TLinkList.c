#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct ST
{
	int x;
	struct ST* head;
	struct ST* next;
}ST;

//第一个只接地址

void Init(ST* p)
{
	p->head = NULL;
	p->next = NULL;
}


//NULL失败 成功返回最后一个结构体的地址

ST* Add_linklist(ST* p, int pos, int n)
{
	ST* s = (ST*)malloc(sizeof(ST));
	if (s == NULL)
		return NULL;
	s->x = n;
	s->head = 0;
	s->next = 0;
	

	ST* a = p, * b = 0;
	while (pos--)
	{
		b = a;
		a = a->next;
	}
	if (b->next != NULL)//后面还有一个结构体
		a->head = s;
	s->head = b;
	

	s->next = b->next;
	b->next = s;


	while (b->next)
	{
		b = b->next;
	}
	return b;
}

//1失败 0成功
int Delete_linklist(ST* p, int pos)
{
	ST* a = p, * b = 0, * c = 0;

	while (pos--)
	{
		b = a;
		a = a->next;
		if (b->next == NULL)
			return 1;
	}

	c = a->next;
	c->head = b;
	free(b->next);
	b->next = 0;
	b->next = c;

	return 0;
}

int show_linklist1(ST* p)
{
	if (p->next == NULL)
		return 1;
	ST* a = p;
	while (a->next)
	{
		a = a->next;
		printf("%d ", a->x);
	}
	printf("\n");

	return 0;
}

int show_linklist2(ST* p)
{
	if (p->head == NULL)
		return 1;
	ST* a = p;
	while (a->head)
	{
		printf("%d ", a->x);
		a = a->head;
	}
	printf("\n");

	return 0;
}

int Destory_linklist(ST* p)
{
	if (p->next == NULL)
		return 1;
	ST* a = p->next, * b = 0;
	while (a->next)
	{
		b = a;
		a = a->next;
		free(b);
		b = 0;
	}
	free(a);
	a = 0;

	return 0;
}

int Check_linklist(ST* p, int pos)
{
	if (p->next == NULL)
		return 1;
	ST* a = p, * b = 0;
	while (pos--)
	{
		b = a;
		a = a->next;
		if (a == NULL)
			return 1;
	}
	printf("%d\n", a->x);


	return 0;
}

int main()
{
	ST s, * p = &s;
	Init(p);
	Add_linklist(p, 1, 2);
	ST* e=Add_linklist(p, 1, 3);

	show_linklist1(p);
	show_linklist2(e);

	Check_linklist(p, 1);

	Delete_linklist(p, 1);

	show_linklist1(p);
	show_linklist2(e);

	Destory_linklist(p);

	return 0;
}