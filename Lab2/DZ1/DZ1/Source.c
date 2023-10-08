#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Рассчетная задача по Физике\n\n Груз массой m кг равномерно поднимают на высоту h, КПД = n. Определить, какая работа была затрачена при этом\n\n\n");
	float m; // масса груза
	float h; // высота
	float g = 9.8; // скорость свободного падения
	float n; // КПД
	printf("Введите массу груза = ");
	scanf("%f", &m);

	printf("Введите высоту = ");
	scanf("%f", &h);

	printf("Введите КПД = ");
	scanf("%f", &n);

	float A = (m * g * h) * 100 / n; // Работа
	printf("Работа затраченная на подъёи груза массой m= %.1f на высоту h= %.2f A = %.2f ДЖ\n", m, h, A);
}
