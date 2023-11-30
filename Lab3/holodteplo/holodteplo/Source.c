#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Ввести значение температуры:");
		int t;
	scanf_s("%d", &t);

	if (t < 18) {
		printf("Холодно");
	}
	if (t >= 18 && t <=22) {
		printf("Прохладно");
	}
	if (t >22 && t <= 26) {
		printf("Тепло");
	}
	if (t > 26) {
		printf("Жарко");
	}

}