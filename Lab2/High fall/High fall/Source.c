#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h; //������ 12 ������
	printf("������� ������ � ������=");
	scanf("%f", &h);

	float g = 9.8;  //��������� ���������� �������
	float t = sqrt(2 * h / g);  //����� �����
		printf("������� ������ � ������ %f ������\n", h);
		printf("�� ������� ����� ����� %f ������\n", t);
}
