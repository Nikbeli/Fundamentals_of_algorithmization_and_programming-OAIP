#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("������ �������� �����������:");
		int t;
	scanf_s("%d", &t);

	if (t < 18) {
		printf("�������");
	}
	if (t >= 18 && t <=22) {
		printf("���������");
	}
	if (t >22 && t <= 26) {
		printf("�����");
	}
	if (t > 26) {
		printf("�����");
	}

}