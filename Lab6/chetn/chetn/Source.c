#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(!251);
	SetConsoleOutputCP(1251);
	printf("Ввести число N = ");
	int i;
	int x = 1;
	scanf_s("%d", &i);
	do {
		if (x % 2 == 0) {
			printf("%d ", x);
		}
		x++;
	} while (x / 2 <= i);  // while(x <= (i*2));
	printf("\n\n");
	printf("Конец программы\n");
}