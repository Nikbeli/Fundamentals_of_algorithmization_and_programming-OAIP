#include <stdio.h>
#include <Windows.h>

void main() {

	int a, b, min, max;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("������� ������ ����� = ");
	scanf_s("%d", &a);
	printf("������� ������ ����� = ");
	scanf_s("%d", &b);

	if (a < b) {
		min = a;
		max = b;
	}
	else {
		min = b;
		max = a;
	}
	printf("������� ����� = %d\n", max);
	printf("������� ����� = %d\n\n", min);
}