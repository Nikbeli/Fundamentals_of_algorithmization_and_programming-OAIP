#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("—тудент откладывает по 1000 рублей в мес€ц. —колько у него удет через 72 мес€цев\n\n");
	int x = 1000;
	int m=1;
	do {
		printf("%d мес€ц - %d рублей\n", m,x);
		m++;
		x = x + 1000;

	} while (m <= 72);
	printf("\n");
	printf(" онец\n\n");

	printf("Ѕанк. ¬клад под 11% на 3 года с 2м€ пополнени€ми в начале следующего года по 20 тыс. рублей \n\n");
	float s;
	scanf_s("f%", &s);
	float k = 11;
	float n = 3;
	float h = 20000;
	do {

	} while ();
}