#pragma once
#define MAX50 50
#define MAX12 12

void footbal(struct football * team, int player);

// �������
//������
//�������
//���������� ���
//���������� �����
enum position
{
	Forward, Winger
};
struct football
{
	char name[MAX50];
	position position;
	int age;
	int gamesCount;
	int goalsScore;
};