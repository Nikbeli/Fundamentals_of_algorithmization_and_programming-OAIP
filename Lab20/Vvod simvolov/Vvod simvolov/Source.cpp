#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char f[30], i[30], o[30];
	printf("Фамилия:");
	scanf_s("%s", f, 30);
	printf("Имя:");
	scanf_s("%s", i, 30);

	printf("Отчество:");
	scanf_s("%s", o, 30);
	printf("%s %s %s", f, i, o);

	printf("\n\n\n");

	char f1[30], i1[30], o1[30];
	printf("Фамилия:");
	fgets(f1, 30, stdin);

	printf("Имя:");
	fgets(i1, 30, stdin);

	printf("Отчество:");
	fgets(o1, 30, stdin)
		;
	printf("%s %s %s", f1, i1, o1);



}