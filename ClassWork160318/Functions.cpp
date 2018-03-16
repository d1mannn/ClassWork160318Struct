#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include "Football.h"
#include "Header.h"
#include <Windows.h>
#define MAX50 50
#define MAX12 12



int TaskNumb()
{
	setlocale(LC_ALL, "Rus");
	printf("¬ведите номер задани€ - ");
	int task;
	scanf_s("%d", &task);
	return task;
}

void footbal(struct football * team, int player)
{	
	struct football best; // создали переменную
	int max = 0;
	for (int i = 0; i < player; i++)
	{
		if (team[i].goalsScore > max)
		{
			max = team[i].goalsScore;
			best = team[i];
		}
	}
	printf("The best one is %s, goals = %d\n", best.name, best.goalsScore);
}