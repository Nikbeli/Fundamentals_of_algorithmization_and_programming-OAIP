#include <stdio.h>
#include <Windows.h>

void aboutMe() {
	printf("Белянин\n");
	printf("Никита\n");
	printf("Николаевич\n");
	printf("\n");
	printf("Группа: ПИбд-11-2022\n");
	printf("Дата: 3.09.2022\n");
	printf("Предмет: Основы программирования\n");
	printf("Лабораторная работа №1\n");
}
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	aboutMe();
}