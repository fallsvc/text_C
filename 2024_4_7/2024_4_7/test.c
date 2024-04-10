#include "SList.h"

void test1()
{
	SLTNode* p=NULL;
	SLTPushBack(&p, 1);
	SLTPushFront(&p, 3);
	SLPrint(p);
	SLTNode*ret=SLTFind(p, 1);
	SLTInsert(&p, ret, 2);
	SLPrint(p);
	SLTFind(p, 1);
	SLPrint(p);
	SLTPopFront(&p);
	SLPrint(p);
	SLTPopBack(&p);
	SLPrint(p);
	
}

int main()
{
	test1();
	return 0;
}