
//vs 2022
//��Ŀ����ʹ�ö��ֽ��ַ���

#include <iostream>
#include <graphics.h>
#include <ctime>
using namespace std;

//����n�����1-8 
void setNumberBoard(int *arr,int r,int c,int n)
{
	static unsigned s = time(0);
	srand(s);
	s = rand();
	initgraph(r*40, c*40, 0);
	setbkcolor(LIGHTBLUE);
	cleardevice();
	
	setlinecolor(BLACK);
	//����
	for (int i = 0; i <= r*40; i += 40)
	{
		line(0, i, c*40, i);
	}
	//����
	for (int i = 0; i <= c * 40; i += 40)
	{
		line(i, 0, i, r*40);
	}
	//���ִ�С
	settextstyle(30,30 , "΢���ź�");
	settextcolor(BLACK);
	
	while (n)
	{
		int i = rand() % r;
		int j = rand() % c;
		if (*(arr+c*i+j) == 0)
		{
			*(arr + c * i + j) = (rand() % 8 + 1);
			char a = *(arr + c * i + j)+48;
			outtextxy(5+40*i, 5+40*j, a);
			n--;
		}
	}
	system("pause");
	closegraph();
}

int main()
{
	int n = 10;
	int arr[10][10] = {0};
	/*cout<<"����Ҫ��ӵ��������:";
	cin >> n;*/
	
	setNumberBoard(*arr,10,10,n);

	system("pause");
	return 0;
}