#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("������ 1 �� ����� �������� ����� \n\n");
	printf("������ ���������� ����� N = ");
	int i;
	int x=1;
	scanf_s("%d", &i);
	do {
		if (x % 2 == 1)
		{
			printf("%d ", x);
		}
		x++;
	} while (x <= i);
	printf("\n");
	printf("�����\n\n");

	printf("������ 2 �� ���������� � ������� \n\n");
	printf("������ b = ");
	int a;
	long st;
	int b;
	scanf_s("%d", &b);
	st = 1;
	a = 0;
	do {
		{printf("4^%d = %li\n", a, st);
		a++;
		st = pow(4,a);
		}
	} while (a <= b);
	printf("\n");
	printf("�����\n");

	printf("������ 3 ����� ���������\n\n");
	printf("������ ����� N ����� ��������� = ");

	long long n, j, a1, a2, c;
	scanf_s("%lld", &n);
	a1 = 1;
	a2 = 1;
	printf("%lld %lld ", a1, a2);
	for (j = 3; j < n; j++)
	{
		printf("%lld ", a1 + a2);
		c = a1;
		a1 = a2;
		a2 = c + a1;
	}
	printf("\n");
	_getch();
	return 0;

	printf("�����\n\n");

}