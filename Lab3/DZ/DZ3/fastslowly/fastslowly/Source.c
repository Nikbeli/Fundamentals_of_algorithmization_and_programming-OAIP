#include<stdio.h>
#include<Windows.h>
#include<math.h>

void main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("������ ���������� �����, ������� ������ ������ �� 60 �����\n");
	int a;
	scanf_s("%d", &a);

	if (a > 100) {
		printf("����� ������\n");
	}
	else if (a <= 100 && a >= 70) {
		printf("������\n");
	}
	else if (a < 70 && a > 50) {
		printf("���������\n");
	}
	else if (a <= 50 && a > 30) {
		printf("��������\n");
	}
	else {
		printf("����� ��������\n");
	}
}