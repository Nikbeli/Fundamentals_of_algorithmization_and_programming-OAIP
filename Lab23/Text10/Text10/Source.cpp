#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define N 5000


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("������� ������\n");
	printf("��23\n");


	FILE* file;
	char shelf1[4000], shelf2[3000];
	int n, m;

	// ������� ����
	FILE* fin;
	fin = fopen("C:\\Users\\������\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\texta10.txt", "rb");
	n = fread(shelf1, sizeof(char), 1700, fin);
	fclose(fin);

	// ������� ����
	fin = fopen("C:\\Users\\������\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\textb10.txt", "rb");
	m = fread(shelf2, sizeof(char), 1000, fin);
	fclose(fin);

	shelf1[n] = '\0';
	shelf2[m] = '\n';
	shelf2[m + 1] = '\0';

	// �������� ����
	FILE* fout;
	fout = fopen("C:\\Users\\������\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\out10.txt", "wb");
	fwrite(strcat(shelf2, shelf1),
		sizeof(char), n + m, fout);
	fclose(fout);

	printf("Program FINISH");
}