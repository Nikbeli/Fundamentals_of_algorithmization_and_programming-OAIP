#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#define N 10
#define M 10

int arr[N];
int ar[N][M];

int n = 3;
int m = 3;


void keyboardInput() {
	int newN;
	printf("newN = ");
	scanf_s("%d", &newN);
	if (newN >= 1 && newN <= N) {
		n = newN;
		printf("Введите %d целых чисел: ", n);
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &arr[i]);
		}
	}
	else {
		printf("newN имеет некорректное значение");
	}
}


void printElements() {
	printf("< ");
	int i = 0;
	while (i < n) {
		printf("%d ", arr[i]);
		i++;
	}
	printf(">\n");
}


void selectionSort() {
	for (int j = 0; j < n - 1; j++) {
		int min = arr[j];
		int iMin = j;
		for (int i = j + 1; i < n; i++) {
			if (arr[i] < min) {
				min = arr[i];
				iMin = i;
			}
		}
		int tmp = arr[iMin];
		arr[iMin] = arr[j];
		arr[j] = tmp;
	}
}


void Save() {
	// Чтение из входного файла. Вводимые числа, которые считываются с файла

	// логирование ввода
	printf("%d\n", n);
	printf("< ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	//printElements();
// Входной файл​
	FILE* fout = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\Mass.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	fprintf(fout, "%d\n", n);
	for (int i = 0; i < n; i++) {
		fprintf(fout, "%d ", arr[i]);
	}
	fclose(fout);


	printf("\n\n");
}


void Load() {
	// Чтение из входного файла. Вводимые числа, которые считываются с файла

// Входной файл​
	FILE* fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\Mass.txt", "rt");
	if (fin == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	fscanf(fin, "%d", &n);
	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &arr[i]);
	}
	fclose(fin);

	// логирование ввода
	printf("%d\n", n);
	printf("< ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf(" >");

	printf("\n\n");
}


void KeyVvod() {
	/*int n;
	int m;
	printf("\nЧисло строк\n");
	scanf_s("%d", &n);
	printf("\nЧисло столбцов\n");
	scanf_s("%d", &m);*/

	printf("Вывод массива 3 на 3\n");

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &ar[i][j]);
		}

}


void print() {
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", ar[i][j]);
		}
		printf("\n");
	}
}


void UvelAllMassive() {
	printf("Увеличить массив в X раз\n");

	int x;
	scanf_s("%d", &x);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			ar[i][j] = ar[i][j] * x;
		}
}


void Save2() {
	// Чтение из входного файла. Вводимые числа, которые считываются с файла

	// логирование ввода
	printf("%d\n", n);
	printf("%d\n", m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
		printf("%d ", ar[i][j]);
	}

// Входной файл​
	FILE* fout = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\Mass.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	fprintf(fout, "%d\n", n);
	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
		fprintf(fout, "%d ", ar[i][j]);
	}
	fclose(fout);


	printf("\n\n");
}


void Load2() {
	// Чтение из входного файла. Вводимые числа, которые считываются с файла

// Входной файл​
	FILE* fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab22\\txt\\Mass.txt", "rt");
	if (fin == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	fscanf(fin, "%d", &n);
	fscanf(fin, "%d", &m);
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) {
		fscanf(fin, "%d", &ar[i][j]);
	}
	fclose(fin);

	// логирование ввода
	printf("%d\n", n);
	printf("%d\n", m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
		printf("%d ", ar[i][j]);
	}

	printf("\n\n");
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int item = -1;
	do {
		printf("\n");
		printf("==============================\n");
		printf("Выберите нужную вам операцию:\n");
		printf("0: ввод  массива с клавиатуры\n");
		printf("1: вывод массива на экран\n");
		printf("2: сортировка и вывод на экран\n");
		printf("3: сохранение состояния\n");
		printf("4: Загрузка состояния сохранённого массива\n");


		printf("5: ввод  массива с клавиатуры\n");
		printf("6: вывод 2-мерного массива на экран\n");
		printf("7: Увеличение каждого элемента 2-мерного массива\n");
		printf("8: сохранение состояния 2-мерного массива\n");
		printf("9: Загрузка состояния сохранённого 2-мерного массива\n");

		printf("\n");
		printf("-1: Выйти из программы\n");
		printf("Выбранная операция >>>>>> ");
		scanf_s("%d", &item);

		switch (item) {
		case 0:
			keyboardInput();
			break;
		case 1:
			printElements();
			break;
		case 2:
			selectionSort();
			printElements();
			break;
		case 3:
			Save();
			break;
		case 4:
			Load();
			break;
		case 5:
			KeyVvod();
			break;
		case 6:
			print();
			break;
		case 7:
			UvelAllMassive();
			break;
		case 8:
			Save2();
			break;
		case 9:
			Load2();
			break;

		}
	} while (item != -1);

	return 0;

}