//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//struct Node
//{
//	int x;
//	struct Node* next;
//};
//
//Node* buynode(int n)
//{
//	Node* newnode = new Node;
//	if (newnode == NULL)
//		exit(1);
//	newnode->x = n;
//	newnode->next = NULL;
//}
//
//Node* Createcircle(Node** phead,int n)
//{
//	Node* ret =buynode(1);
//	*phead = ret;
//	for (int i = 2; i <= n; i++)
//	{
//		Node* next = buynode(i);
//		ret->next = next;
//		ret = next;
//	}
//	ret->next = *phead;
//	return ret;
//}
//
//int main()
//{
//	int n = 10;
//	Node* phead=NULL;
//	Node* prev=Createcircle(&phead,n);
//	Node* pcur = phead;
//
//	while (n--)
//	{
//		cout << pcur->x << endl;
//		pcur = pcur->next;
//	}
//	
//
//	return 0;
//}