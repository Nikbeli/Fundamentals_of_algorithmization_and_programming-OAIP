#include <stdio.h>
#include <Windows.h>

void aboutMe() {
	printf("�������\n");
	printf("������\n");
	printf("����������\n");
	printf("\n");
	printf("������: ����-11-2022\n");
	printf("����: 3.09.2022\n");
	printf("�������: ������ ����������������\n");
	printf("������������ ������ �1\n");
}
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	aboutMe();
}