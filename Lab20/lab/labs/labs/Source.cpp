#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char name[12];
	printf("������� ���� ���: ");
	fgets(name, 11, stdin);
	printf("����������� ����, %s\n", name);


	printf("\n\n\n");
	printf("������� ������ = ");
	int ch = getchar();

	for (int c = ch; c <= ch + 19; c++) {
		printf("'%c' (%d)\n", c, c);
	}
	printf("\n\n\n");

	{
		int x;
		scanf("%d", &x);
	}

}