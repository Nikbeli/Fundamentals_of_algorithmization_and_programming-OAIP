#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int a[1000]; //массив. 1000 - максимально допустимое количество элементов
int n; // Реальное количество элементов в массиве
int* pa; //Указатель на массив.


// Задача 2

void Load1() {
	// Открытие входного файла
	FILE* fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab26\\Txt\\in4.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден\n");
		return;
	}
	// Загрузка массива из входного файла​
	fscanf(fin, "%d", &n);
	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	// Закрытие входного файла
	fclose(fin);
}


void SaveResult1() {
	// Вычисление среднего арифметического​
	float sa = 0;
	int s = 0;
	for (int i = 0; i < n; i++) {
		s =+ a[i];
	}
	sa = s / n;

	// Выяснение, сколько элементов больше ср арифметического
	int m = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < sa && a[i] > 0) {
			m++;
		}
	}

	// Открытие выходного файла
	FILE* fout = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab26\\Txt\\out4.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не найден\n");
		return;
	}
	// Сохранение элементов больших ср арифметического
	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++) {
		if (a[i] > 0 and a[i] < sa) {
			fprintf(fout, "%d ", a[i]);
		}
	}
	// Закрытие файла
	fclose(fout);
}


void Load() {
	// Открытие входного файла
	FILE* fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab26\\Txt\\in4.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден\n");
		return;
	}
	// Загрузка массива из входного файла
	fscanf(fin, "%d", &n);
	// Выделение памяти под динамический массив
	pa = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &pa[i]);
	}
	// Закрытие входного файла
	fclose(fin);
}


void SaveResult() {
	// Вычисление среднего арифметического
	float sa = 0;
	float s = 0;
	for (int i = 0; i < n; i++) {
		s += pa[i];
	}
	//printf("ЛОГИРОВАНИЕ %f",s);
	//printf("ЛОГИРОВАНИЕ %d",n);
	sa = s / n;
	//printf("ЛОГИРОВАНИЕ %.3f",sa);
	// Выяснение, сколько элементов больше ср арифметического
	int m = 0;
	for (int i = 0; i < n; i++) {
		if (pa[i] < sa and pa[i] > 0){
			m++;
		}
	}
	// Открытие выходного файла
	FILE* fout = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab26\\Txt\\out4+.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не найден\n");
		return;
	}
	// Сохранение элементов больших ср арифметического
	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++) {
		if (pa[i] < sa and pa[i] > 0) {
			fprintf(fout, "%d ", pa[i]);
		}
	}
	// Закрытие файла
	fclose(fout);
}


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Hello! It is Task1!\n");

	Load1();
	SaveResult1();

	printf("Hello! It is Task2!\n");
	Load();
	SaveResult();
	free(pa);
}
