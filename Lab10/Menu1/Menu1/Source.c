#include <stdio.h>
#include <Windows.h>
#include <math.h>

void print1_10() {
	int a = 1;
	do {
		printf("%d", a);
		a += 1;
	} while (a <= 10);
}

void print10_1() {
	int a = 10;
	do {
		printf("%d", a);
		a -= 1;
	} while (a >= 1);
}

void print50dds() {
	int a = 1;
	int i = 1;
	do {
		printf("%d", a);
		a += 2;
		i += 1;
	} while (i <= 5);
}

void print10Evens() {
	int a = 2;
	int i = 1;
	do {
		printf("%d", a);
		a += 2;
		i += 1;
	} while (i <= 10);
}

void print10_100() {
	int a = 10;
	int i = 1;
	do {
		printf("%d ", a);
		a += 10;
		i += 1;
	} while (i <= 10);
}

void print10_20() {
	int a = 100;
	int i = 1;
	do {
		printf("%d ", a);
		a += 100;
		i += 1;
	} while (i <= 10);
}

void print20_20() {
	int a = 1;
	int i = 1;
	do {
		printf("%d ", a);
		a *= 2;
		i += 1;
	} while (i <= 11);
}

void print100_20() {
	int a = 1;
	int i = 1;
	do {
		printf("%d ", a);
		a *= 3;
		i += 1;
	} while (i <= 11);
}

void zadach1() {
	float s;
	float procent;
	int god;

	printf("summa = ");
	scanf_s("%f", &s);
	printf("procent = ");
	scanf_s("%f", &procent);

	god = 0;
	do {
		printf("%.0f RUB in %d year \n", s, god);
		s = (s * (100 + procent)) / 100;
		god++;
	} while (god < 11);
}

void zadach2() {
	int a;
	long st;
	int b;
	//scanf_s("%d", &b);
	b = 12;
	st = 1;
	a = 0;
	do {
		{printf("4^%d = %li\n", a, st);
		a++;
		st = pow(4, a);
		}
	} while (a <= b);
}

void zadach3() {
	long long n, j, a1, a2, c;
	scanf_s("%lld", &n);	//n = 10;
	j = 3;
	a1 = 0;
	a2 = 1;
	printf("%lld %lld ", a1, a2);
	do {
		printf("%lld ", a1 + a2);
		j++;
		c = a1;
		a1 = a2;
		a2 = c + a1;
	} while (j <= n);
}
void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	do {
		printf("\n");
		printf("\n");
		printf("Выберите нужную вам операцию:\n");
		printf("1: Вывести числа от 1 до 10\n");
		printf("2: Вывести числа от 10 до 1\n");
		printf("3: Вывести 5 первых нечетных чисел начиная с 1\n");
		printf("4: Вывести 10 первых чётных числе начиная с 1\n");
		printf("5: Вывести 10 первых числел ряда 10 20 30 ...\n");
		printf("6: Вывести 10 первых числел ряда 100 200 300 ...\n");
		printf("7: Вывести 11 первых числел ряда 1 2 4 8 16 32 ...\n");
		printf("8: Вывести 11 первых числел ряда 1 3 9 27 81 ...\n");
		printf("9: Вывести банковскую прибыль ... \n");
		printf("10: Вывести значения числа 4^n .... (12 чисел) \n");
		printf("11: Вывести числа Фиббоначи ... \n");
		printf("\n");
		printf("0: Выйти из программы\n");
		scanf_s("%d", &n);
		switch (n) {
		case 1:
			print1_10();
			break;
		case 2:
			print10_1();
			break;
		case 3:
			print50dds();
			break;
		case 4:
			print10Evens();
			break;
		case 5:
			print10_100();
			break;
		case 6:
			print10_20();
			break;
		case 7:
			print20_20();
			break;
		case 8:
			print100_20();
			break;
		case 9:
			zadach1();
			break;
		case 10:
			zadach2();
			break;
		case 11:
			zadach3();
			break;
		}
	} while (n != 0);
}