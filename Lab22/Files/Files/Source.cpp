#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

// ТРЕНИРОВКА

void main() {

	// Чтение из входного файла 
	FILE* fin;
	int a, b, s;

	scanf("%d", &a);
	scanf("%d", &b);
	s = a + b;

	fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\in1.txt", "rt");
	if (fin == NULL) {
		printf("File in1.txt is not found");
		return;
	}
	fscanf(fin, "%d%d", &a, &b);
	fclose(fin);


	// Запись в выходной файл
	FILE* fout;
	fout = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\in1.txt", "wt");
	if (fout == NULL) {
		printf("File out1.txt cannot be created");
		return;
	}
	fprintf(fout, "s = %d", s);
	fclose(fout);

}