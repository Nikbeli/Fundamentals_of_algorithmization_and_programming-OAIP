#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Задача 1 на вывод нечётных чисел \n\n");
	printf("Ввести количество чисел N = ");
	int i;
	int x=1;
	scanf_s("%d", &i);
	do {
		if (x % 2 == 1)
		{
			printf("%d ", x);
		}
		x++;
	} while (x <= i);
	printf("\n");
	printf("Конец\n\n");

	printf("Задача 2 на возведение в степень \n\n");
	printf("ввести b = ");
	int a;
	long st;
	int b;
	scanf_s("%d", &b);
	st = 1;
	a = 0;
	do {
		{printf("4^%d = %li\n", a, st);
		a++;
		st = pow(4,a);
		}
	} while (a <= b);
	printf("\n");
	printf("Конец\n");

	printf("Задача 3 Числа Фиббоначи\n\n");
	printf("Ввести число N чисел Фибоначчи = ");

	long long n, j, a1, a2, c;
	scanf_s("%lld", &n);
	a1 = 1;
	a2 = 1;
	printf("%lld %lld ", a1, a2);
	for (j = 3; j < n; j++)
	{
		printf("%lld ", a1 + a2);
		c = a1;
		a1 = a2;
		a2 = c + a1;
	}
	printf("\n");
	_getch();
	return 0;

	printf("Конец\n\n");

}