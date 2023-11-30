#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define NUM_ELEMENTS 10

int arr[NUM_ELEMENTS];

void printAllElements() {  //Вывод элементов массива
	int i = 0;
	while (i < NUM_ELEMENTS) {
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

void fillIx10() {  //Заполнение 10тками
	int i = 0;
	while (i < NUM_ELEMENTS) {
		arr[i] = i * 10;
		printf("%d ", arr[i]);
		i++;
	}
}

void randFill0_9() {                //Заполнение случайными элементами
	int i = 0;
	while (i < NUM_ELEMENTS) {
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
		i++;
	}
}

void printMinElement() {
	int min = arr[0];
	int i = 1;
	while (i < NUM_ELEMENTS) {
		if (arr[i] < min) {
			min = arr[i];
		}
		i++;
	}
	printf("min = %d", min);
}

void printMaxElement() {
	int max = arr[0];
	int i = 1;
	while (i < NUM_ELEMENTS) {
		if (arr[i] > max) {
			max = arr[i];
		}
		i++;
	}
	printf("max = %d", max);
}

/*void AfterMinX__10() {
	//Найти минимум и его индекс
	int min = arr[0]; //Минимум
	int iMin = 0;  // Индекс минимума
	int i;
	
	/*i = 0;
	while (i < NUM_ELEMENTS) {
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
		i++;
	}

	for (i = 1; i < NUM_ELEMENTS; i++) {
		arr[i] = rand() % 10;
		printf("%d ", arr[i]); 
		if (arr[i] < min) {
			min = arr[i];
			iMin = i;
			printf("%d ", arr[i]);
		}

	}

	//Элементы после минимума увеличиватся в 10 раз
	for (i = iMin + 1; i < NUM_ELEMENTS; i++) {
		arr[i] *= 10;
		printf("%d ", arr[i]);
	}
}*/

void AfterMinX10() {
	//Найти минимум и его индекс
	int min; //Минимум
	int iMin;  // Индекс минимума
	int i;



	for (i = 0; i < NUM_ELEMENTS; i++) {
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
		}
	printf("\n\n");
	
	min = arr[0];
	iMin = 0;

	for (i = 1; i < NUM_ELEMENTS; i++) {
		if (arr[i] < min) {
			min = arr[i];
			iMin = i;
		}
	}

	//Элементы после минимума увеличиватся в 10 раз
	for (i = iMin + 1; i < NUM_ELEMENTS; i++) {
		arr[i] *= 10;
	}
	
	//Вывод массива
	i = 0;
	while (i < NUM_ELEMENTS) {
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

void AfterMax2() {
	//Найти минимум и его индекс
	int max; //Максимум
	int iMax;  // Индекс максимума
	int i;



	for (i = 0; i < NUM_ELEMENTS; i++) {
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	max = arr[0];
	iMax = 0;

	for (i = 1; i < NUM_ELEMENTS; i++) {
		if (arr[i] > max) {
			max = arr[i];
			iMax = i;
		}
	}

	//Элементы после минимума увеличиватся в 10 раз
	for (i = 0; i < NUM_ELEMENTS; i++) {
		if(i < iMax)
		arr[i] *= 2;
	}

	//Вывод массива
	i = 0;
	while (i < NUM_ELEMENTS) {
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

void mas() {
	int i = 0;
	int summa = 0;
	while (i < NUM_ELEMENTS) {
		arr[i] = rand() % 10;
		if (arr[i] % 2 == 0) {
			arr[i] *= -1;
		}
		printf("%d ", arr[i]);
		i++;
	}
}

void zamena() {
	int i = 0;
	int summa = 0;
	while (i < NUM_ELEMENTS) {
		arr[i] = rand() % 10;
		if (arr[i] < 4) {
			arr[i] = 4;
		}
		printf("%d ", arr[i]);
		i++;
	}
}

void chet() {
	int i = 0;
	int summa = 0;
	while (i < NUM_ELEMENTS) {
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
		if (arr[i] % 2 == 0) {
		summa++;
		}
		i++;
	}
	printf("Число чётных = %d\n\n", summa);
	printf("Число нечётных чисел = %d", 10 - summa);
}

void AfterMejMaxMin() {
	//Найти минимум и его индекс
	int min; //Минимум

	int i;
	int iMin;
	int max; 
	int iMax;



	for (i = 0; i < NUM_ELEMENTS; i++) {
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	min = arr[0];
	iMin = 0;
	max = arr[0];
	iMax = 0;

	for (i = 0; i < NUM_ELEMENTS; i++) {
		if (arr[i] <= min) {
			min = arr[i];
			iMin = i;
		}
		if(arr[i] >= max){
			max = arr[i];
			iMax = i;
		}
	}

	//Элементы после минимума увеличиватся в 10 раз
	for (i = 0; i < NUM_ELEMENTS; i++) {
		if (i < iMax && i > iMin)
			arr[i] *= 10;
	}

	//Вывод массива
	i = 0;
	while (i < NUM_ELEMENTS) {
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

void firstandendchetn() {
	int min; //Минимум

	int i;
	int iMin;
	int max;
	int iMax;

	for (i = 0; i < NUM_ELEMENTS; i++) {
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
	}
	printf("\n\n");


	min = arr[0];
	iMin = 0;
	max = arr[0];
	iMax = 0;

	for (i = 0; i < NUM_ELEMENTS; i++) {
		if (arr[i] % 2 == 0) {
			min = arr[i];
			iMin = i;
			break;
		}
	}
	
	for (i = 0; i < NUM_ELEMENTS; i++) {
		if (arr[i] % 2 == 0) {
			max = arr[i];
			iMax = i;
		}
	}

	//Элементы после минимума увеличиватся в 10 раз
	for (i = 0; i < NUM_ELEMENTS; i++) {
		if (i < iMax && i > iMin)
			arr[i] *= 100;
	}

	//Вывод массива
	i = 0;
	while (i < NUM_ELEMENTS) {
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int item;

	do {
		printf("\n");
		printf("==============================\n");
		printf("Выберите нужную вам операцию:\n");
		printf("0: вывести весь массив\n");
		printf("1: заполнить массив нулями\n");
		printf("2: заполнить массив I x 10\n");
		printf("3: заполнить массив случайными числами (от 0 до 9)\n");
		printf("4: найти и вывести минимальный элемент\n");
		printf("5: найти и вывести максимальный элемент\n");
		printf("6: Увеличить в 10 раз все элементы стоящие правее минимального\n");
		printf("7: Увеличить в 2 раза все элементы стоящие левее максимального\n");
		printf("8: Число чётных элементов массива\n");
		printf("9: Умножение чётных чисел на -1\n");
		printf("10: Замена чисел меньших 4 \n");
		printf("11: Все элементы стоящие между максимальным и минимальным увеличить в 10 раз \n");
		printf("12: Все элементы между первым и последним четным увеличить в 100 раз \n");
		printf("\n");
		printf("-1: Выйти из программы\n");
		printf("Выбранная операция >>>>>> ");
		scanf_s("%d", &item);
		switch (item) {
		case 0:
			printAllElements();
			break;
		case 1:
			printAllElements();
			break;
		case 2:
			fillIx10();
			break;
		case 3:
			randFill0_9();
			break;
		case 4:
			randFill0_9();
			printMinElement();
			break;
		case 5: 
			randFill0_9();
			printMaxElement();
			break;
		case 6:
			AfterMinX10();
			break;
		case 7: 
			AfterMax2();
			break;
		case 8:
			chet();
			break;
		case 9:
			mas();
			break;
		case 10:
			zamena();
			break;
		case 11:
			AfterMejMaxMin();
			break;
		case 12:
			firstandendchetn();
			break;
		}
	} while (item != -1);
}