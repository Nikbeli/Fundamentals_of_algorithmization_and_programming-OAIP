#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdbool.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("������: � �������� ��������� �����: �������, �������, ��������. \n");
	char d[10];
	char l[10];
	char s[10];


	printf("\n\n");
	printf("\t\t����� ��������?");
	if (scanf("%s", d) & d == "dub") {
	printf("\t\t������!\n\n");
	}
	if (scanf("%s", l)) {
		printf("\t\t������!\n\n");
	}
	if (scanf("%s", s)) {
		printf("\t\t������!\n\n");
	}
	if (scanf("%s", d)) {
		printf("\t\t������!\n\n");
	}
	
}