#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <Windows.h>


#include "MyFunc.h"
#include "Func.h"
#include "Fun.h"

// ���������� ������ 7.2
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ���� ������. ���������� ����� �-���
	char s[80];
	printf("��������� �����\n");
	printf("������� ������:");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������ = \"%s\"\n", s);

	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toUpperAll(s[i]);
	}

	printf("������ ����� ��������� =\"%s\"", s);

	printf("\n\n");



	/* {
		int x;
		scanf("%d", &x);
	}*/



	//1�� ���������� strlen (������� ����� ������)
	char z[10] = "Hi!";
	printf("len = %d\n", strlen_my(z));
	z[3] = ' '; z[4] = '\0';
	printf("len = %d\n", strlen_my(z));
	z[4] = 'W'; z[5] = 'o'; z[6] = 'r'; z[7] = 'l';
	z[8] = 'd'; z[9] = '\0';
	printf("len = %d\n", strlen_my(z));


	printf("\n\n");


	//2�� ���������� strlen �-���
	char str[999];
	int ret = 0;
	printf("����������, ������� ������ ��������:\n");
	fgets(str, 999, stdin);
	ret = my_strlen1(str);
	printf("����� ������: %d \n", ret);

	printf("\n\n");

	//3�� ���������� strlen �-���
	char str0[999];
	int ret2 = 0;
	printf("����������, ������� ������ ��������:\n");
	fgets(str0, 999, stdin);
	ret2 = my_strlen2(str0) - 1;
	printf("����� ������: %d \n", ret2);


	printf("\n\n");


	// ���������� ��������� ����� strcmp ����� �-���
	char strX[999];
	int res = 0;
	printf("����������, ������� ������ ��������:\n");
	fgets(strX, 999, stdin);
	char strY[999];
	printf("����������, ������� ������ ��������:\n");
	fgets(strY, 999, stdin);

	res = strcmp(strX, strY);

	if (res > 0) {
		printf("%s", "1�� ������ ������ ��� 2�� ������");
	}
	else if (res < 0) {
		printf("%s", "1�� ������ ������, ��� 2�� ������");
	}
	else {
		printf("%s", "1�� ������ ����� 2�� ������");
	}


	printf("\n\n");


	//������� ��� ����������� ����-��������������� ������ (� ����� ������  '\0')
	
	printf("����������� �������� ������\n\n");
	char source[999];
	fgets(source, 999, stdin);
	char destination[999];

	printf("%s\n", strcpy(destination, source));


	printf("\n\n");
	
	
	//������� ��� ����������� ����� 


	printf("����������� �����\n\n");

	char str1[100];
	char str2[100];

	printf("����������� ������ = ");
	printf(strcat(fgets(str2, 100, stdin), fgets(str1, 100, stdin)));
}