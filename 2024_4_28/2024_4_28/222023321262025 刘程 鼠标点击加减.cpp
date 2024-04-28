#define _CRT_SECURE_NO_WARNINGS 1
//项目采用多字符集
#include <iostream>
#include <graphics.h>
#include <ctime>
using namespace std;

#define ROW 10
#define COL 10
#define _SJS 10
#define imageWidth 40

IMAGE image[12];
int arr[ROW][COL] = { 0 };

void loadI()
{
	char str[50] = { 0 };
	for (int i = 0; i < 12; i++)
	{
		sprintf(str,"./images/%d.jpg", i);
		loadimage(&image[i],str, imageWidth, imageWidth);
	}
}
void produceRandom()
{
	static unsigned s = time(0);
	srand(s);
	s = rand();
	
	for (int k = 0; k < _SJS; k++)
	{
		int r = rand() % ROW;
		int c = rand() % COL;
		if (arr[r][c] == 0)
		{
			arr[r][c] = rand() % 8 + 1;
		}
		else
		{
			k--;
		}
	}

}	

void gameDraw()
{
	
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (arr[i][j] == 0)
			{
				putimage(j * imageWidth, i * imageWidth, &image[0]);
			}
			else
			{
				putimage(j * imageWidth, i * imageWidth, &image[arr[i][j]]);
			}
		}
	}
}
//鼠标点击
void mouseEvent()
{
	MOUSEMSG msg = GetMouseMsg();//获取鼠标信息
	//点击坐标转换
	int r = msg.y / imageWidth;
	int c = msg.x / imageWidth;
	//点击左键
	if (msg.uMsg == WM_LBUTTONDOWN)
	{
		if (arr[r][c] < 8)
		{
			arr[r][c] += 1;
		}
		else
		{
			arr[r][c] = 0;
		}
		putimage(c * imageWidth, r * imageWidth, &image[arr[r][c]]);
	}
	//点击右键
	else if (msg.uMsg == WM_RBUTTONDOWN)
	{
		if (arr[r][c] > 0)
		{
			arr[r][c] -= 1;
		}
		else
		{
			arr[r][c] = 8;
		}
		putimage(c * imageWidth, r * imageWidth, &image[arr[r][c]]);
	}
}

void game()
{
	//初始化界面
	initgraph(imageWidth*ROW, imageWidth*COL);
	loadI();//加载图片
	produceRandom();//产生随机数
	//图形打印
	gameDraw();
	//
	while (1)
	{
		mouseEvent();
		if (GetAsyncKeyState(27))//按esc结束
		{
			closegraph();
			break;
		}
	}
}
int main()
{
	game();

	return 0;
}