#define _CRT_SECURE_NO_WARNINGS

#include "snake.h"

void SetPos(short x, short y)
{
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);

	//��λ���λ��
	COORD pos = { x,y };
	SetConsoleCursorPosition(houtput, pos);
}

void WelcomeToGame()
{
	SetPos(40, 14);
	wprintf(L"��ӭ����̰����С��Ϸ\n");
	SetPos(42, 20);
	system("pause");
	system("cls");
	SetPos(25, 14);
	wprintf(L"�á��������������������ߵ��ƶ�����F3���١�F4����\n");
	SetPos(40, 15);
	wprintf(L"�����ܵõ����߷���\n");

	SetPos(42,20);
	system("pause");
	system("cls");//����ص���ͷ
}

void CreateMap()
{
	//��
	int i = 0;
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc",WALL);
	}
	//��
	SetPos(0, 26);
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc",WALL);
	}
	//��
	for (i = 1; i <=25; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", WALL);
	}
	//��
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

		//ͷ��
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
		//��ӡ
	while (pcur)
	{
		SetPos(pcur->x, pcur->y);
		wprintf(L"%lc", _snake);
		pcur = pcur->next;
	}
	//�����ߵ�����

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

	//����x�Ƕ��ı���
again:
	do
	{
		x = rand() % 53 + 2;
		y = rand() % 25 + 1;
	} while (x % 2 != 0);

	//��ֹ����λ�ó�ͻ
	pSnakeNode pcur = ps->_pSnake;
	while (pcur)
	{
		if (pcur->x == x && y == pcur->y)
		{
			goto again;
		}
		pcur = pcur->next;
	}
	//����ʳ��ڵ�
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
	//���ô��ڴ�С���ع��
	system("mode con cols=100 lines=30");
	system("title ̰����");

	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(houtput, &CursorInfo);//��ȡ�����Ϣ
	CursorInfo.bVisible = false;//���ؿ���̨���
	SetConsoleCursorInfo(houtput, &CursorInfo);//���ÿ���̨���

	//1.��ӡ��������
	//2.���ܽ���
	WelcomeToGame();
	//3.���Ƶ�ͼ
	CreateMap();
	//4.������
	InitSnack(ps);
	//5������ʳ��
	CreateFood(ps);
}

void PrintHelpInfo()
{
	SetPos(60, 10);
	wprintf(L"%ls", L"���ܴ�ǽ������Ҫ���Լ�");
	SetPos(60, 11);
	wprintf(L"%ls", L"�á��������������������ߵ��ƶ�����F3����");
	SetPos(60, 12);
	wprintf(L"%ls", L"��F4����,�����ܵõ����߷���");
	SetPos(60, 13);
	wprintf(L"%ls", L"ESC�˳����ո���ͣ");
	
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
	//ͷ��
	ps->_pFood->next = ps->_pSnake;
	ps->_pSnake = ps->_pFood;
	//
	free(pn);
	//��ӡ��
	pSnakeNode pcur = ps->_pSnake;
	while (pcur)
	{
		SetPos(pcur->x, pcur->y);
		wprintf(L"%lc", _snake);
		pcur = pcur->next;
	}

	ps->_score += ps->_food_weight;
	//������ʳ��
	CreateFood(ps);
}
void NoFood(pSnakeNode pn, pSnake ps)
{
	//ͷ��
	pn->next = ps->_pSnake;
	ps->_pSnake = pn;
	//��ӡ��
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
	//�����߽������һ���ڵ�
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
		printf("�ܷ�����%2d\n", ps->_score);
		SetPos(60, 8);
		printf("��ǰʳ��ķ�����%2d\n", ps->_food_weight);
		
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
			//��ͣ
			Pause();
		}
		else if(KEY_PRESS(VK_ESCAPE))
		{
			//�˳�
			ps->_status = END_NORMAL;
		}
		else if(KEY_PRESS(VK_F3))
		{
			//����
			if (ps->_sleep_time > 20)
			{
				ps->_sleep_time -= 60;
				ps->_food_weight += 4;
			}
		}
		else if(KEY_PRESS(VK_F4))
		{
			//����
			if (ps->_food_weight > 2)
			{
				ps->_sleep_time += 60;
				ps->_food_weight -= 4;
			}
		}
		SnakeMove(ps);//����һ��
		Sleep(ps->_sleep_time);

	}while(ps->_status == OK);
}

void GameEnd(pSnake ps)
{
	SetPos(24, 12);
	switch (ps->_status)
	{
	case END_NORMAL:
		printf("��Ϸ����\n");
		break;
	case KILL_BY_WALL:
		printf("KILL_BY_WALL\n");
		break;
	case KILL_BY_SELF:
		printf("KILL_BY_SELF\n");
		break;
	}
	SetPos(0, 28);
	//��������
	pSnakeNode pcur = ps->_pSnake;
	while (pcur)
	{
		pSnakeNode del = pcur;
		pcur = pcur->next;
		free(del);
	}
}