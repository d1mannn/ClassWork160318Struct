#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include "Football.h"
#include "Header.h"
#include "student.h"
#include <Windows.h>
#include <iostream>
using namespace std;
#define MAX50 50
#define MAX12 12

//enum position
//{
//	Forward, Winger
//};

void main()
{	
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int task;
	do
	{
		task = TaskNumb();
		switch (task)
		{
			case 1:
			{
				//Определить лучшего форварда, и вывести сведения о футболистах, сыгравших менее 5 - ти игр.

				/*strcpy(footballs[0].position, "Forward");*/

				struct football footballs[2]; // создали массив из двух футболистов
				strcpy(footballs[0].name, "Alex");
				//strcpy_s(footballs[0].name, strlen("Alex"), "Alex");
				footballs[0].position = Forward;
				footballs[0].age = 22;
				footballs[0].goalsScore = 10 + rand() % 20;
				footballs[0].gamesCount = 15 + rand() % 60;


			//	struct football footballs[2];
				strcpy(footballs[1].name, "Promt");
				//strcpy_s(footballs[0].name, strlen("Promt"), "Promt");
				footballs[1].position = Winger;
				footballs[1].age = 22;
				footballs[1].goalsScore = 10 + rand() % 20;
				footballs[1].gamesCount = 15 + rand() % 60;

				footbal(footballs, 2);
			} break;

			case 2:
			{
				//Фамилия
				//Группа
				//Физика
				//Информ
				//История	Определить средний бал оценок по всем предметам, и вывести сведения о студентах, средний балл которых больше 4.
				struct student students[3];
				for (int i = 0; i < 3; i++)
				{
					printf("Введите имя студента - ");
					cin.get();
					gets_s(students[i].name);
					printf("Введите номер группы - ");
					scanf_s("%d", &students[i].group);
					students[i].physics = 1 + rand() % 10;
					students[i].history = 1 + rand() % 10;
					students[i].inform = 1 + rand() % 10;
					/*printf("Введите оценки - ");
					scanf_s("%d", &students[i].physics);
					scanf_s("%d", &students[i].history);
					scanf_s("%d", &students[i].inform);*/
				}

				for (int i = 0; i < 3; i++)
				{
					students[i].middle = ((students[i].history + students[i].inform + students[i].physics)) / 3;
				}

				for (int i = 0; i < 3; i++)
				{
					printf("Средний балл %s = %d\n", students[i].name, students[i].middle);
				}
			}
		}
	} while (task > 0);
}