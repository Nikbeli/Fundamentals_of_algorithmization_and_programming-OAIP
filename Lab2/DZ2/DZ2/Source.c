#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("������� ����� ������ ����������: 4 �����, ������, 2 ���������, �������.\n ������� ��� ����������� �����, ���� ����� ����� 45 ������, ������ - 20 ������, \n �������� - 10 ������, ������� - 100 ������?");

	int r = 45;
	int l = 20;
	int k = 10;
	int lin = 100;

	int res = 4 * r + l + 2 * k + lin;
	printf("\n\n\n");
	printf("����� ������� ����������� %d ������", res);
	printf("\n\n\n");
}