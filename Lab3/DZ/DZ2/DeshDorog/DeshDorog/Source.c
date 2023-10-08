#include <stdio.h>
#include <Windows.h>
#

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b;
	printf("Введите стоимость автомобиля Мерседес \n");
	scanf_s("%d", &a);
	printf("Пробег в тысячах км \n");
	scanf_s("%d", &b);

	if (a > 6000000 || b >= 100) {
		printf("Ужас дорого");
	}
	else if (a > 6000000 || (b > 50 && b < 100)) {
		printf("Дорого");
	}
	else if (a < 6000000 && a > 3000000) {
		printf("Нормально");
	}
	else {
		printf("Дёшево");
	}
}