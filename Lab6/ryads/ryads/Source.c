#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i;
	long stepen;

	stepen = 1;
	i = 0;

	do {
		{printf("2^%d = %li\n", i, stepen);
		i++;
		stepen = pow(2, i);
		}
	} while (i < 11);
	printf("\n");
	printf("Конец\n");

}
