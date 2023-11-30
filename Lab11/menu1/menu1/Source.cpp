#include <stdio.h>
#include <Windows.h>
#include <math.h>

void print1_10() {
	int a = 1;
	while(a <= 10) {
		printf("%d ", a);
		a += 1;
	}
}

void print10_1() {
	int a = 10;
	while (a >= 1) {
		printf("%d ", a);
		a -= 1;
	}
}

void print50dds() {
	int a = 1;
	int i = 1;
	while (i <= 5){
		printf("%d ", a);
		a += 2;
		i += 1;
	}
}

void print10Evens() {
	int a = 2;
	int i = 1;
	while (i <= 10){
		printf("%d ", a);
		a += 2;
		i += 1;
	} 
}

void print10_100() {
	int a = 10;
	int i = 1;
	while (i <= 10){
		printf("%d ", a);
		a += 10;
		i += 1;
	}
}

void print10_20() {
	int a = 100;
	int i = 1;
	while (i <= 10){
		printf("%d ", a);
		a += 100;
		i += 1;
	} 
}

void print20_20() {
	int a = 1;
	int i = 1;
	while (i <= 11){
		printf("%d ", a);
		a *= 2;
		i += 1;
	}
}

void print100_20() {
	int a = 1;
	int i = 1;
	while (i <= 11){
		printf("%d ", a);
		a *= 3;
		i += 1;
	}
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
	while (god < 11){
		printf("%.0f RUB in %d year \n", s, god);
		s = (s * (100 + procent)) / 100;
		god++;
	}
}

void zadach2() {
	int a;
	long st;
	int b;	//scanf_s("%d", &b);
	b = 12;
	st = 1;
	a = 0;
	while (a <= b){
		printf("4^%d = %li\n", a, st);
		a++;
		st = pow(4, a);
	} 
}

void zadach3() {
	long long n, j, a1, a2, c;
	scanf_s("%lld", &n);	//n = 10;
	j = 3;
	a1 = 0;
	a2 = 1;
	printf("%lld %lld ", a1, a2);
	while (j <= n){
		printf("%lld ", a1 + a2);
		j++;
		c = a1;
		a1 = a2;
		a2 = c + a1;
	} 
}

void zadach4() {
	int a = 100;
	while (a >= 10) {
		printf("%d ", a);
		a -= 10;
	}
}

void zadach5() {
	int a = 1000;
	while (a >= 10) {
		printf("%d ", a);
		a -= 100;
	}
}

void zadach6() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float s;
	float procent;
	int god;

	printf("summa = ");
	scanf_s("%f", &s);
	printf("procent = ");
	scanf_s("%f", &procent);

	god = 0;
	while (god < 11) {
		printf("Через %d лет: %.0f \n", god, s);
		s = (s * (100 + procent)) / 100;
		god++;
	}
}

void zadach7() {
	int a = 1000;
	int b;
	//scanf_s("%d", &b);
	while (a >= 0) {
		printf("%d ", a);
		a -= 5;    //a -= b;
	}
}

void zadach8() {
	int a = 1;
	int n = 1;
	int i;
	printf("Enter number : ");
	scanf_s("%d", &i);
	while (n <= i) {

	a *= n;	
	printf("Factorial(%d) = %d\n", n, a);
	n++;
	}
}

void zadach9() {
	int t, i = 2;
	printf("Enter YOUR number:\n");
	scanf_s("%d", &t);
	printf("%d = ", t);
	while (i <= t) {
		if (t % i == 0) {
			printf("%d", i);
			t = t / i;
			if (t > 1)
				printf("*");
		}
		else
			i = i + 1;
	}
}

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	/*char f[4] = "";
	fgets(f, 4, stdin);
	if (f[0] == 'd' && f[1] == 'u' && f[2] == 'b') {

		int x = 1;
		switch (x) {
		case 1:
			printf("Вы смогли вывести характеристики\n");
			printf("Дуб\n");
			printf("Зелёный, дорогой");
			break;
		}
	}
	else if (f[0] = 'i') {
		printf("УРАААААААА");
	}*/


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
		printf("12: Вывести числа 100 90 80 ... 10 (через WHILE)\n");
		printf("13: Вывести числа 1000 900 800 ... 100 (через WHILE)\n");
		printf("14: Рост суммы на счете​\n");
		printf("15: Вывести числа от 1000 до 0 (шаг n=5)\n");
		printf("16: Вывод N факториалов чисел \n");
		printf("17: Разложение числа N на простые множители \n");
		printf("\n\n");
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
		case 12:
			zadach4();
			break;
		case 13:
			zadach5();
			break;
		case 14:
			zadach6();
			break;
		case 15:
			zadach7();
			break;
		case 16:
			zadach8();
			break;
		case 17:
			zadach9();
			break;
		}
	} while (n != 0);

}