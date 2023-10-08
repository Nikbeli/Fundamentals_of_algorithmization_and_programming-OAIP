#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Числа Фиббоначи n =");
	long long n, j, a1, a2, c;
	scanf_s("%lld", &n);
	j = 3;
	//scanf_s("%lld", &n);
	a1 = 0;
	a2 = 1;
	printf("%lld %lld ", a1, a2);
	do {
		printf("%lld ", a1 + a2);
		j++;
		c = a1;
		a1 = a2;
		a2 = c + a1;
	} while (j < n);
	printf("\n");


	printf("Конец\n\n");
}