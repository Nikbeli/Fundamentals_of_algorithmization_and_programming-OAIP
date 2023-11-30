#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#include "Header.h"

void dop() {
	printf("Hello world!\n");
	printf("\n");
	printf("Лабораторная работа №1\n");
	printf("Предмет: Основы программирования\n");
	printf("Дата: 3.09.2022\n");
	printf("Группа: ПИбд-11-2022\n");
	printf("\n");
	printf("Белянин\n");
	printf("Никита\n");
	printf("Николаевич\n");
	printf("\n");
	printf("Николаевич\n");
	printf("Никита\n");
	printf("Белянин\n");
	printf("\n");
	printf("Группа: ПИбд-11-2022\n");
	printf("Дата: 3.09.2022\n");
	printf("Предмет: Основы программирования\n");
	printf("Лабораторная работа №1\n");

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

	printf("Лабораторная работа №1\n");
	printf("Предмет: Основы программирования\n");
	printf("Дата: 3.09.2022\n");
	printf("Группа: ПИбд-11-2022\n");
	printf("\n");
	printf("Николаевич\n");
	printf("Никита\n");
	printf("Белянин\n");


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