#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define Name_MAX 20
#define Sex_MAX 10
#define Tele_MAX 12
#define Addr_MAX 30
#define C_MAX 100
//Informatio
typedef struct PeoInfo
{
	char name[Name_MAX];
	int age;
	char sex[Sex_MAX];
	char tele[Tele_MAX];
	char addr[Addr_MAX];
}PeoInfo;

//ADB

typedef struct contact
{
	PeoInfo data[100];//Information
	int count;//the number of people
}Contact;

//Initialize ADB
void InitContact(Contact* pc);

//Add
void AddContact(Contact* pc);

//Show
void Show(const Contact* pc);

//Delete
void Del(Contact* pc);

//Search
void Search(Contact* pc);

//Motify
void Motify(Contact* pc);

//Sort
void Sort(Contact* pc);
