#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("–ешение корней\n\n");
	float a, b, c;
	printf("¬ведите цифры: ");
	scanf_s("%f", &a);
	scanf_s("%f", &b);

	c = sqrt(sqrt(a) - sqrt(b));
	printf("%.2f - %.2f = %.2f\n", a, b, c);

}