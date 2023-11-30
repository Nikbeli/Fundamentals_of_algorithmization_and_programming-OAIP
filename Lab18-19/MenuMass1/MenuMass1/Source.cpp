#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <Windows.h>​

#define MAX_N 8
#define MAX_M 10

// Массивы

int arr[MAX_N][MAX_M] = {
	{10, 11, 12, 13},
	{20, 21,  9, 23},
	{30, 31, 32, 33}
};

int n = 3;
int m = 4;

void print() {
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}

void fillIx10() {
	printf("!!!! fillIx10() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = i * 10 + j;
		}
	}
}


void fillZero() {
	printf("!!!! fillZero() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = 0;
		}
	}
}


void randFill0_9() {
	printf("!!!! randFill0_9() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}


void KeyBoard() {
	printf("\nВвести элементы массива\n");
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &arr[i][j]);
		}
}

void kratn10Umensh10() {
	printf("\nВвести элементы массива\n");
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &arr[i][j]);
		}

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			if (arr[i][j] % 10 == 0) {
				arr[i][j] /= 10;
			}
		}
}

void NechetUvel10() {
	printf("\nВвести элементы массива\n");
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &arr[i][j]);
		}

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			if (arr[i][j] % 2 == 1) {
				arr[i][j] *= 10;
			}
		}
}

void KeyVvod() {
	int n;
	int m;
	printf("\nЧисло строк\n");
	scanf_s("%d", &n);
	printf("\nЧисло столбцов\n");
	scanf_s("%d", &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &arr[i][j]);
		}

	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}

void DeleteRow(int delRow) {
	int n;
	int m;
	printf("\nЧисло строк\n");
	scanf_s("%d", &n);
	printf("\nЧисло столбцов\n");
	scanf_s("%d", &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &arr[i][j]);
		}

	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("!!!! deleteRow(%d) !!!!\n", delRow);
	for (int i = delRow - 1; i < n - 1; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = arr[i + 1][j];
		}
	}
	n--;

	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}

void DeleteRow1(int delRow1) {
	printf("!!!! deleteRow(%d) !!!!\n", delRow1);
	for (int i = delRow1 - 1; i < n - 1; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = arr[i + 1][j];
		}
	}
	n--;
}

void addColumn0() {
	int n;
	int m;
	printf("\nЧисло строк\n");
	scanf_s("%d", &n);
	printf("\nЧисло столбцов\n");
	scanf_s("%d", &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &arr[i][j]);
		}

	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}



	printf("!!!! addColumn0() !!!!\n");
	if (m < MAX_M) {
		for (int i = 0; i < n; i++) {
			arr[i][m] = 0;
		}
		m++;
	}

	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}

void ElementUvel2() {

	printf("!!!! findMin() !!!!\n");
	int min = arr[0][0];
	int iMin = 0;
	int jMin = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] < min) {
				int ma = j;
				for (int j = 0; j < ma; j++) {
					arr[i][j] *= 2;
				}
				min = arr[i][j];

			}
		}
	}
	printf("min = %d\n", min);
}

void ElementUvel() {
	int n;
	int m;
	printf("\nЧисло строк\n");
	scanf_s("%d", &n);
	printf("\nЧисло столбцов\n");
	scanf_s("%d", &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &arr[i][j]);
		}

	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("!!!! findMin() !!!!\n");
	int min = arr[0][0];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (arr[i][j] < min) {
				int k = i;
				int ma = j;
				min = arr[i][j];
				for(int p = 0; p > ma; p--){
					arr[i][j] *= 5;
					//for (k; i < n;)
					//for (j = 0; j < ma; j++) {
						
			}
		}
				}
	printf("min = %d\n", min);

	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}

void ElementUvel2Vvod() {
	int n;
	int m;
	printf("\nЧисло строк\n");
	scanf_s("%d", &n);
	printf("\nЧисло столбцов\n");
	scanf_s("%d", &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &arr[i][j]);
		}

	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("!!!! findMin() !!!!\n");
	int min = arr[0][0];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (arr[i][j] < min) {
				int ma = j;
				for (int j = 0; j < ma; j++) {
					arr[i][j] *= 2;
				}
				min = arr[i][j];

			}
		}

	printf("min = %d\n", min);

	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}

void ElementUvel5down() {
	int n;
	int m;
	printf("\nЧисло строк\n");
	scanf_s("%d", &n);
	printf("\nЧисло столбцов\n");
	scanf_s("%d", &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &arr[i][j]);
		}

	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("!!!! findMin() !!!!\n");
	int min = arr[0][0];
	int ma;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] < min) {
				ma = j;
				min = arr[i][j];
			}
		}
	}
	for (int i = ma; i <= n; i++)
		for (int j = ma; j <= ma; j++) {
			arr[i][j] *= 5;
		}

	printf("min = %d\n", min);

	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}

void UvelAllMassive() {
	int n;
	int m;
	printf("\nЧисло строк\n");
	scanf_s("%d", &n);
	printf("\nЧисло столбцов\n");
	scanf_s("%d", &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &arr[i][j]);
		}
	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("Увеличить массив в X раз\n");

	int x;
	scanf_s("%d", &x);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			arr[i][j] = arr[i][j] * x;
		}


	//вывод массива
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int item;

	do {
		printf("\n");
		printf("==============================\n");
		printf("Выберите нужную вам операцию:\n");
		printf("1: Заполнение значениями i * 10 + j​ \n");
		printf("2: Заполнение значениями 0​ \n");
		printf("3: Заполнение случайными значениями​ (от 0 до 9)\n");
		printf("4: Ввода массива с клавиатуры \n");
		printf("5: Все кратные 10 уменьшить в 10 раз \n");
		printf("6: Все нечётные увеличить в 10 раз \n");
		printf("7: Ввод массива с клавиатуры с выбором срок и столбцов\n");
		printf("8: Удалить заданную строку из массива​​ \n");
		printf("9: Удалить заданную строку из массива​ (Другой случай)\n");
		printf("10: Вставить в конец массива столбец, содержащий нули​\n");
		printf("11: Элементы стоящие левее максимального увеличить в 2 раза \n");
		printf("12: Элементы стоящие левее минимального увеличить в 5 раз * \n");
		printf("14: Элементы стоящие ниже максимального увеличить в 5 раз \n");
		printf("15: Увеличение всех элементов в n раз \n");
		printf("\n");
		printf("-1: Выйти из программы\n");
		printf("Выбранная операция >>>>>> ");
		scanf_s("%d", &item);
		switch (item) {
		case 0:
			print();
			break;
		case 1:
			SetConsoleCP(1251);
			SetConsoleOutputCP(1251);
			fillIx10();
			print();
			break;
		case 2:
			fillZero();
			print();
			break;
		case 3:
			randFill0_9();
			print();
			break;
		case 4:
			KeyBoard();
			print();
			break;
		case 5:
			kratn10Umensh10();
			print();
			break;
		case 6:
			NechetUvel10();
			print();
			break;
		case 7:
			KeyVvod();
			break;
		case 8:
			int num;
			printf("Номер строки, которую нужно удалить: ");
			scanf_s("%d", &num);
			DeleteRow(num);
			break;
		case 9:
			print();
			int num1;
			printf("Номер строки, которую нужно удалить: ");
			scanf_s("%d", &num1);
			DeleteRow1(num1);
			print();
			break;
		case 10:
			addColumn0(); //zamena();
			break;
		case 11:
			print();
			ElementUvel2();
			print();
			break;
		case 12:
			ElementUvel();
			break;
		case 14:
			ElementUvel5down();
			break;
		case 15:
			UvelAllMassive();
			break;
		}
	} while (item != -1);
}