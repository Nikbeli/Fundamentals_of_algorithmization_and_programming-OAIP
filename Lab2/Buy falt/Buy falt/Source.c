#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m; // ������� �������� ������
	int rub_m; // ������� ������ ����� 1 ���������� ����
	float cash; // ��������
	printf("������� ������� �������� m*m=");
	scanf("%f", &m);

	printf("������� ��������� 1 ����������� ����� �������� RUB=");
	scanf("%d", &rub_m);

	printf("������� ������ ��������=");
	scanf("%f", &cash);

	float price = m * rub_m; // ���������� ��������� ��������
	printf("�������� �������� %f m*m �� ���� %d RUB/(m*m) ����� <%10.1f> RUB\n", m, rub_m, price);
	int t = price / (cash / 2); // �����
	printf("��� �������� %f RUB �� ��� �������� ����� ������ %d �������", cash, t);
}
