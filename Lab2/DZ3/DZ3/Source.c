#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	printf("������ ���� ����� 1 �� 400 �����. ����� 7/10. ������� ������� ����� ��������?\n\n");

	float m = 1.400;
	float res = m - m * 7 / 10;
	printf("�������� %.3f �� �����", res);
	printf("\n\n");
}