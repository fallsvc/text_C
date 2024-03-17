#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <assert.h>
//
//typedef struct STU
//{
//	int a[100];
//	int cd;
//}STU;
//
//void Init(STU* p)
//{
//	assert(p);
//	p->cd = 0;
//}
////-1Ê§°Ü 0³É¹¦
//int Insert(STU* p, int pos, int n)
//{
//	assert(p);
//	if (p->cd > 100)
//		return -1;
//
//	if (pos > p->cd)
//		p->a[p->cd] = n;
//	else
//	{
//		int x = p->cd;
//		while (x >= pos)
//		{
//			p->a[x] = p->a[x - 1];
//			x--;
//		}
//		p->a[pos - 1] = n;
//	}
//	p->cd++;
//	return 0;
//}
//
//int Delete(STU* p, int pos)
//{
//	assert(p);
//	if (pos > p->cd || pos < 1)
//		return -1;
//	while (pos < p->cd)
//	{
//		p->a[pos - 1] = p->a[pos];
//		pos++;
//	}
//	p->a[p->cd] = 0;
//	p->cd--;
//
//	return 0;
//}
//int Show(STU* p)
//{
//	assert(p);
//	if (p->cd == 0)
//		return -1;
//	for (int i = 0; i < p->cd; i++)
//	{
//		printf("%d ", p->a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//
//int CheckPos(STU* p, int pos)
//{
//	assert(p);
//	if (p->cd == 0||pos>p->cd||pos<1)
//		return -1;
//	printf("%d\n", p->a[pos - 1]);
//	return 0;
//}
//
//int main()
//{
//	STU s;
//	Init(&s);
//	Insert(&s, 1, 10);
//	Insert(&s, 1, 12);
//	Show(&s);
//	Delete(&s, 2);
//	Insert(&s, 2, 13);
//	Show(&s);
//
//	CheckPos(&s, 2);
//
//	return 0;
//}