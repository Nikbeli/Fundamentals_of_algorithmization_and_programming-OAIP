#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	printf("������ �������� ����������� � ������ �������:");
	scanf_s("%d",&a);

	if (a < -70) {
		printf("������� ��");
	}
	if (a >= -70 && a <= -50) {
		printf("����� - �����, ��� ����� ����");
	}
	if (a > -50 && a < -30) {
		printf("�����");
	}
	if (a >= -30 && a < -20) {
		printf("����� �������");
	}
	if (a >= -20 && a <= -8) {
		printf("�������");
	}
	if (a > -8 && a <= 10) {
		printf("���������");
	}
	if (a > 10 && a <= 20) {
		printf("�����");
	}
	if (a > 20) {
		printf("����� �����, ����� ������� �������");
	}
	printf("\n\n\n");
}