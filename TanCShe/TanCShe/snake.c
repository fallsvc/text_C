#define _CRT_SECURE_NO_WARNINGS

#include "snake.h"

void SetPos(short x, short y)
{
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);

	//定位光标位置
	COORD pos = { x,y };
	SetConsoleCursorPosition(houtput, pos);
}

void WelcomeToGame()
{
	SetPos(40, 14);
	wprintf(L"欢迎来到贪吃蛇小游戏\n");
	SetPos(42, 20);
	system("pause");
	system("cls");
	SetPos(25, 14);
	wprintf(L"用↑、↓、←、→来控制蛇的移动，按F3加速、F4减速\n");
	SetPos(40, 15);
	wprintf(L"加速能得到更高分数\n");

	SetPos(42,20);
	system("pause");
	system("cls");//光标会回到开头
}

void CreateMap()
{
	//上
	int i = 0;
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc",WALL);
	}
	//下
	SetPos(0, 26);
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc",WALL);
	}
	//左
	for (i = 1; i <=25; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", WALL);
	}
	//右
	for (i = 1; i <= 25; i++)
	{
		SetPos(56, i);
		wprintf(L"%lc", WALL);
	}
}
void InitSnack(pSnake ps)
{
	int i = 0;
	pSnakeNode pcur;
	for (i = 0; i < 5; i++)
	{
		pcur = malloc(sizeof(SnakeNode));
		if (pcur == NULL)
		{
			perror("pcur::malloc");
			return;
		}
		pcur->next = NULL;
		pcur->x = POS_X + i * 2;
		pcur->y = POS_Y;

		//头插
		if (ps->_pSnake == NULL)
		{
			ps->_pSnake = pcur;
		}
		else
		{
			pcur->next = ps->_pSnake;
			ps->_pSnake = pcur;
		}

	}
		//打印
	while (pcur)
	{
		SetPos(pcur->x, pcur->y);
		wprintf(L"%lc", _snake);
		pcur = pcur->next;
	}
	//设置蛇的属性

	ps->_dir = RIGHT;
	ps->_food_weight = 10;
	ps->_score = 0;
	ps->_sleep_time = 200;
	ps->_status = OK;

}

void CreateFood(pSnake ps)
{
	int x = 0;
	int y = 0;

	//生成x是二的倍数
again:
	do
	{
		x = rand() % 53 + 2;
		y = rand() % 25 + 1;
	} while (x % 2 != 0);

	//防止与蛇位置冲突
	pSnakeNode pcur = ps->_pSnake;
	while (pcur)
	{
		if (pcur->x == x && y == pcur->y)
		{
			goto again;
		}
		pcur = pcur->next;
	}
	//创建食物节点
	pSnakeNode pFood = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (pFood == NULL)
	{
		perror("pFood::malloc");
		return;
	}
	pFood->x = x;
	pFood->y = y;
	pFood->next = NULL;
	ps->_pFood = pFood;

	SetPos(x, y);
	wprintf(L"%lc", _food);
}

void GameStart(pSnake ps)
{
	//设置窗口大小隐藏光标
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇");

	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(houtput, &CursorInfo);//获取光标信息
	CursorInfo.bVisible = false;//隐藏控制台光标
	SetConsoleCursorInfo(houtput, &CursorInfo);//设置控制台光标

	//1.打印环境界面
	//2.功能介绍
	WelcomeToGame();
	//3.绘制地图
	CreateMap();
	//4.创建蛇
	InitSnack(ps);
	//5。创建食物
	CreateFood(ps);
}

void PrintHelpInfo()
{
	SetPos(60, 10);
	wprintf(L"%ls", L"不能穿墙，不能要到自己");
	SetPos(60, 11);
	wprintf(L"%ls", L"用↑、↓、←、→来控制蛇的移动，按F3加速");
	SetPos(60, 12);
	wprintf(L"%ls", L"、F4减速,加速能得到更高分数");
	SetPos(60, 13);
	wprintf(L"%ls", L"ESC退出，空格暂停");
	
	SetPos(60, 15);
	wprintf(L"%ls", L"fallvc");
}

void Pause()
{
	while (1)
	{
		Sleep(200);
		if (KEY_PRESS(VK_SPACE))
		{
			break;
		}
	}
}

int NextIsFood(pSnakeNode pn,pSnake ps)
{
	return pn->x == ps->_pFood->x && pn->y == ps->_pFood->y;
}
void EatFood(pSnakeNode pn, pSnake ps)
{
	//头插
	ps->_pFood->next = ps->_pSnake;
	ps->_pSnake = ps->_pFood;
	//
	free(pn);
	//打印蛇
	pSnakeNode pcur = ps->_pSnake;
	while (pcur)
	{
		SetPos(pcur->x, pcur->y);
		wprintf(L"%lc", _snake);
		pcur = pcur->next;
	}

	ps->_score += ps->_food_weight;
	//创建新食物
	CreateFood(ps);
}
void NoFood(pSnakeNode pn, pSnake ps)
{
	//头插
	pn->next = ps->_pSnake;
	ps->_pSnake = pn;
	//打印蛇
	while (pn->next->next)
	{
		SetPos(pn->x, pn->y);
		wprintf(L"%lc", _snake);
		pn = pn->next;
	}
	SetPos(pn->next->x, pn->next->y);
	printf("  ");

	free(pn->next);
	pn->next = NULL;
}

void KillByWall(pSnake ps)
{
	if (ps->_pSnake->x == 0 || ps->_pSnake->x == 56 ||ps->_pSnake->y == 0 || ps->_pSnake->y == 26)
		ps->_status = KILL_BY_WALL;
}
void KillBySelf(pSnake ps)
{
	pSnakeNode pcur = ps->_pSnake->next;
	while (pcur)
	{
		if (pcur->x == ps->_pSnake->x && pcur->y == ps->_pSnake->y)
			ps->_status = KILL_BY_SELF;
		pcur = pcur->next;
	}
}

void SnakeMove(pSnake ps)
{
	//创建蛇将达的下一个节点
	pSnakeNode pNextNode = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (pNextNode == NULL)
	{
		perror("pNextNode::malloc");
		return;
	}
	switch (ps->_dir)
	{
	case UP:
		pNextNode->x=ps->_pSnake->x;
		pNextNode->y = ps->_pSnake->y-1;
		break;
	case DOWN:
		pNextNode->x = ps->_pSnake->x;
		pNextNode->y = ps->_pSnake->y + 1;
		break;
	case LEFT:
		pNextNode->x = ps->_pSnake->x-2;
		pNextNode->y = ps->_pSnake->y;
		break;
	case RIGHT:
		pNextNode->x = ps->_pSnake->x+2;
		pNextNode->y = ps->_pSnake->y;
		break;
	}
	if (NextIsFood(pNextNode, ps))
	{
		EatFood(pNextNode, ps);
	}
	else
	{
		NoFood(pNextNode, ps);
	}
	KillByWall(ps);
	KillBySelf(ps);
}

void GameRun(pSnake ps)
{
	PrintHelpInfo();
	do
	{
		SetPos(60, 7);
		printf("总分数：%2d\n", ps->_score);
		SetPos(60, 8);
		printf("当前食物的分数：%2d\n", ps->_food_weight);
		
		if((KEY_PRESS(VK_UP) && ps->_dir != DOWN)|| (KEY_PRESS(87) && ps->_dir != DOWN))
		{
			ps->_dir = UP;
		}
		else if((KEY_PRESS(VK_DOWN) && ps->_dir != UP)||(KEY_PRESS(83) && ps->_dir != UP))
		{
			ps->_dir = DOWN;
		}
		else if((KEY_PRESS(VK_LEFT) && ps->_dir != RIGHT)||(KEY_PRESS(65) && ps->_dir != RIGHT))
		{
			ps->_dir = LEFT;
		}
		else if((KEY_PRESS(VK_RIGHT) && ps->_dir != LEFT)||(KEY_PRESS(68) && ps->_dir != LEFT))
		{
			ps->_dir = RIGHT;
		}
		else if(KEY_PRESS(VK_SPACE))
		{
			//暂停
			Pause();
		}
		else if(KEY_PRESS(VK_ESCAPE))
		{
			//退出
			ps->_status = END_NORMAL;
		}
		else if(KEY_PRESS(VK_F3))
		{
			//加速
			if (ps->_sleep_time > 20)
			{
				ps->_sleep_time -= 60;
				ps->_food_weight += 4;
			}
		}
		else if(KEY_PRESS(VK_F4))
		{
			//减速
			if (ps->_food_weight > 2)
			{
				ps->_sleep_time += 60;
				ps->_food_weight -= 4;
			}
		}
		SnakeMove(ps);//蛇走一步
		Sleep(ps->_sleep_time);

	}while(ps->_status == OK);
}

void GameEnd(pSnake ps)
{
	SetPos(24, 12);
	switch (ps->_status)
	{
	case END_NORMAL:
		printf("游戏结束\n");
		break;
	case KILL_BY_WALL:
		printf("KILL_BY_WALL\n");
		break;
	case KILL_BY_SELF:
		printf("KILL_BY_SELF\n");
		break;
	}
	SetPos(0, 28);
	//销毁链表
	pSnakeNode pcur = ps->_pSnake;
	while (pcur)
	{
		pSnakeNode del = pcur;
		pcur = pcur->next;
		free(del);
	}
}