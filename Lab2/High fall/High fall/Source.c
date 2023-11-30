#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h; //Высота 12 метров
	printf("Введите высоту в метрах=");
	scanf("%f", &h);

	float g = 9.8;  //Ускорение свободного падения
	float t = sqrt(2 * h / g);  //Время полёта
		printf("Предмет падает с высоты %f метров\n", h);
		printf("Он коснётся земли через %f секунд\n", t);
}
