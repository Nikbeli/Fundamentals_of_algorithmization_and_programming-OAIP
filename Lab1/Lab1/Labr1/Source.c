#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#include "Header.h"

void dop() {
	printf("Hello world!\n");
	printf("\n");
	printf("������������ ������ �1\n");
	printf("�������: ������ ����������������\n");
	printf("����: 3.09.2022\n");
	printf("������: ����-11-2022\n");
	printf("\n");
	printf("�������\n");
	printf("������\n");
	printf("����������\n");
	printf("\n");
	printf("����������\n");
	printf("������\n");
	printf("�������\n");
	printf("\n");
	printf("������: ����-11-2022\n");
	printf("����: 3.09.2022\n");
	printf("�������: ������ ����������������\n");
	printf("������������ ������ �1\n");

	printf("                          \n");
	printf("      |           |    \n");
	printf("    - * -       - * -   \n");
	printf("      |           |     \n");
	printf("                         \n");
	printf("    ------      -----       \n");
	printf("      ||         |||   \n");
	printf("      ||         |||     \n");
	printf("    ------      -----    \n");
}


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("������������ ������ �1\n");
	printf("�������: ������ ����������������\n");
	printf("����: 3.09.2022\n");
	printf("������: ����-11-2022\n");
	printf("\n");
	printf("����������\n");
	printf("������\n");
	printf("�������\n");


	int x = 10, y = 20;

	if ((x == 10 && y < 7) || y == 20)
		printf("\n\nYes\n");
	else
		printf("No\n");

	printf("\n");
	fus();

	int g;
	scanf_s("%d", &g);
	switch (g) {
	case 1:
		dop();
	}
}