#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("���������� ������ �� ������\n\n ���� ������ m �� ���������� ��������� �� ������ h, ��� = n. ����������, ����� ������ ���� ��������� ��� ����\n\n\n");
	float m; // ����� �����
	float h; // ������
	float g = 9.8; // �������� ���������� �������
	float n; // ���
	printf("������� ����� ����� = ");
	scanf("%f", &m);

	printf("������� ������ = ");
	scanf("%f", &h);

	printf("������� ��� = ");
	scanf("%f", &n);

	float A = (m * g * h) * 100 / n; // ������
	printf("������ ����������� �� ������ ����� ������ m= %.1f �� ������ h= %.2f A = %.2f ��\n", m, h, A);
}
