#include <stdio.h>
#include <Windows.h>

void main() {

	int a, b, min, max;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("¬ведите первое число = ");
	scanf_s("%d", &a);
	printf("¬ведите второе число = ");
	scanf_s("%d", &b);

	if (a < b) {
		min = a;
		max = b;
	}
	else {
		min = b;
		max = a;
	}
	printf("бќльшее число = %d\n", max);
	printf("меньшее число = %d\n\n", min);
}