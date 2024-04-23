#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define POS_X 24
#define POS_Y 5
#define WALL L'□'
#define _snake L'●'
#define _food L'▲'
#define KEY_PRESS(vk) ((GetAsyncKeyState(vk)&1)?1:0)

enum DIRECTION
{
	UP=1,
	DOWN,
	LEFT,
	RIGHT
};
//蛇的状态
enum GAME_STATUS
{
	OK,
	KILL_BY_WALL,
	KILL_BY_SELF,
	END_NORMAL
};
//结构体声明
typedef struct SnakeNode
{
	//坐标
	int x;
	int y;
	//指向下一个节点
	struct SnakeNode* next;
}SnakeNode,*pSnakeNode;

typedef struct Snake
{
	pSnakeNode _pSnake;//指向蛇头指针
	pSnakeNode _pFood;//指向食物节点指针
	enum DIRECTION _dir;//蛇的方向
	enum GAMESTATUS _status;//游戏状态
	int _food_weight;//食物分数
	int _score;//总成绩
	int _sleep_time;//休息时间
}Snake,*pSnake;

//启动
void GameStart(pSnake ps);
//
void WelcomeToGame();
//
void CreateMap();
void InitSnack(pSnake ps);
void CreateFood(pSnake ps);

void GameRun(pSnake ps);
void SnakeMove(pSnake ps);

//判断下个是不是食物
int NextIsFood(pSnakeNode pn,pSnake ps);

void EatFood(pSnakeNode pn, pSnake ps);

void GameEnd(pSnake ps);
//光标位置
void SetPos(short x, short y);
