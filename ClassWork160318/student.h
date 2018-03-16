#pragma once
#define MAX50 50
#define MAX12 12


//Фамилия
//Группа
//Физика
//Информ
//История	Определить средний бал оценок по всем предметам, и вывести сведения о студентах, средний балл которых больше 4.

struct student
{
	char name[MAX50];
	int group;
	int physics;
	int inform;
	int history;
	int middle;
};