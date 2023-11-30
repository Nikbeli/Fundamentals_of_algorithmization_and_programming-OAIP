#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define N 10

int a[N];

void zadach1() {

	// Числа, читаемые из входного файла​

	int a, b, c;
	// Произведение, выводимое в выходной файл​

	int p;
	scanf("%d%d%d", &a, &b, &c);
	printf("ввели: %d, %d, %d\n", a, b, c);

	// Обработка​
	p = a * b * c;
	printf("p =  %d\n", p);

}


void zadach2() {
	// Чтение из входного файла​
	// 
	// Числа, читаемые из входного файла​
	int a, b, c;

	// Произведение, выводимое в выходной файл​
	int p;

	// Входной файл​
	FILE* fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\in2.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}
	fscanf(fin, "%d%d%d", &a, &b, &c);
	fclose(fin);


	// логирование ввода​
	printf("ввели: %d, %d, %d\n", a, b, c);

	// Обработка​
	p = a * b * c;

	// логирование вывода​
	printf("p =  %d\n", p);

	// Запись в выходной файл​

	// Выходной файл​
	FILE* fout;
	fout = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\out2.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	fprintf(fout, "%d", p);
	fclose(fout);
}


void zadach3() {
	// Чтение из входного файла. Вводимые числа, которые считываются с файла
	int a, b, c, d, e;

	//Сумма выводимая в файл
	int sum;

	// Входной файл​
	FILE* fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\in3.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не создался");
		return;
	}
	fscanf(fin,"%d%d%d%d%d", &a, &b, &c, &d, &e);
	fclose(fin);


	// логирование ввода​
	printf("Вы ввели: %d, %d, %d, %d, %d \n", a, b, c, d, e);

	// Обработка​
	sum = a + b + c + d + e;

	// логирование вывода​
	printf("p =  %d\n", sum);

	// Запись в выходной файл​

	// Выходной файл​

	FILE* fout=fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\out3.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	fprintf(fout, "%d", sum);
	fclose(fout);
}


void zadach4() {
	// Чтение из входного файла. Вводимые числа, которые считываются с файла
	int a[N];
	int M = 0;

	// Входной файл​
	FILE* fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\in4.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не создан");
		return;
	}
	fscanf(fin, "%d", &M);
	for (int i = 0; i < M; i++) {
		fscanf(fin, "%d ", &a[i]);
	}
	fclose(fin);


	// логирование ввода
	printf("%d\n", M);
	float srznach = 0;
	printf("< ");
	for (int i = 0; i < M; i++) {
		printf("%d ", a[i]);
		srznach += a[i];
	}
	printf(" >");
	printf("\n\nСреднее: %.2f", srznach / M);
	printf("\n\n");

	// Обработка​
	for (int i = 0; i < M; i++) {
		if (a[i] > (srznach / M)) {
			a[i] *= 10;
		}
	}
	printf("\n");

	// логирование вывода​

	printf("%d\n", M);
	printf("< ");
	for (int i = 0; i < M; i++) {
		printf("%d ", a[i]);
	}
	printf(" >");

	// Запись в выходной файл​

	// Выходной файл​
	FILE* fout = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\out4.txt", "wt");
	if (fout == NULL) {
		printf("Входной файл не создан");
		return;
	}
	fprintf(fout, "%d", M);
	fprintf(fout, "\n");
	for (int i = 0; i < M; i++) {
		fprintf(fout, "%d ", a[i]);
	}
	fclose(fout);
	
	printf("\n\n");
}


void zadach5() {
	// Чтение из входного файла

	// Массив, загружаемый из входного файла
	int a[10]; // может содержать не более 10 элементов
	int n; // количество загруженных из файла элементов
	int i; // счётчик для обхода элементов массива
	// Входной файл
	FILE* fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\in5.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не создан");
		return;
	}
	fscanf(fin, "%d", &n);

	for (i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);

	// Логирование ввода
	printf("Ввели массив a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]); 
	}

	// Обработка
	// Вычисляем среднее арифметическое
	int s = 0; //сумма
	for (i = 0; i < n; i++) {
		s += a[i];
	}

	float sa = (float)s / n;

	// логирование обработки
	printf("\nsa = %f\n", sa);

	// Обработка
	//Обновляем значения элементов
	for (i = 0; i < n; i++) {
		if (a[i] > sa) {
			a[i] *= 10;
		}
	}

	// Логирование вывода
	printf("Ввели массив a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	// Запись в выходной файл
	//Выходной файл
	FILE* fout;
	fout = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\out5.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	fprintf(fout, "%d\n", n);

	for (i = 0; i < n; i++) {
		//printf("%d ", a[i]);
		fprintf(fout, "%d ", a[i]);
	}
	fclose(fout);
}


void zadach6() {
	// Чтение из входного файла. Вводимые числа, которые считываются с файла
	int a[10];
	int M = 0;

	// Входной файл​
	FILE* fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\in6.txt", "rt");
	if (fin == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	fscanf(fin, "%d", &M);
	for (int i = 0; i < M; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);

	// логирование ввода
	printf("%d\n", M);
	float srznach = 0;
	printf("< ");
	for (int i = 0; i < M; i++) {
		printf("%d ", a[i]);
		srznach += a[i];
		
	}
	printf(" >");
	printf("\n\nСреднее: %.2f", srznach / M);
	printf("\n\n");

	// Обработка​
	for (int i = 0; i < M; i++) {
		if ((a[i] % 2) == 0 && a[i] < (srznach / M)) {
			a[i] /= 2;
		}
	}
	printf("\n");

	// логирование вывода​

	printf("%d\n", M);
	printf("< ");
	for (int i = 0; i < M; i++) {
		printf("%d ", a[i]);
	}
	printf(" >");

	// Запись в выходной файл​

	// Выходной файл​
	FILE* fout = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\out6.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	fprintf(fout, "%d\n", M);
	for (int i = 0; i < M; i++) {
		fprintf(fout, "%d ", a[i]);
	}
	fclose(fout);

	printf("\n\n");
}


void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Белянин Никита\n");
	printf("ЛР12 Задача 2.1\n");

	//zadach2();
	//zadach3();
	zadach4();
	//zadach5();
	zadach6();
}