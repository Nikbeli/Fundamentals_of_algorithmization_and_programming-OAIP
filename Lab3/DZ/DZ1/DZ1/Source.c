#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	printf("Ввести значение температуры в городе Оймякон:");
	scanf_s("%d",&a);

	if (a < -70) {
		printf("Замёрзло всё");
	}
	if (a >= -70 && a <= -50) {
		printf("Мороз - мороз, все сидят дома");
	}
	if (a > -50 && a < -30) {
		printf("Мороз");
	}
	if (a >= -30 && a < -20) {
		printf("Очень холодно");
	}
	if (a >= -20 && a <= -8) {
		printf("Холодно");
	}
	if (a > -8 && a <= 10) {
		printf("Комфортно");
	}
	if (a > 10 && a <= 20) {
		printf("Тепло");
	}
	if (a > 20) {
		printf("Очень жарко, можно бассейн ставить");
	}
	printf("\n\n\n");
}