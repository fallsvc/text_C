
#include "SequenceList.h"

int main()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPrint(s);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPrint(s);
	SLPushFront(&s, 13);
	SLPrint(s);
	/*SLPopFront(&s);
	SLPrint(s);
	SLPopFront(&s);
	SLPrint(s);*/
	SLPopBack(&s);
	SLPrint(s);
	SLPopBack(&s);
	SLPrint(s);
	SLPopBack(&s);
	SLPrint(s);
	SLDestroy(&s);
	SLPopBack(&s);
	SLPrint(s);
	SLPopBack(&s);
	SLPrint(s); 
	SLPopBack(&s);
	SLPrint(s);

	return 0;
}