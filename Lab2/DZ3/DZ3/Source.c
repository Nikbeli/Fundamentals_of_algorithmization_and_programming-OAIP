#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	printf("Купили торт весом 1 кг 400 грамм. Съели 7/10. Сколько граммов торта осталось?\n\n");

	float m = 1.400;
	float res = m - m * 7 / 10;
	printf("Осталось %.3f кг торта", res);
	printf("\n\n");
}