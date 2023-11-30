#include "Header.h"
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
#include <string.h>


//��� ctype  
//isdigit (������)
//������� ��������: ����� �����  � �������� (��������������), ���������� ����, ���� �������� �� �������� ������ � ���������� ��������, ���� �������� ������ ��������

//� �������� ���������� ���������� � ���� ������������ ������ � ������ � ������� �� �� � �, ��������� � ���������� � microsoft


void testisdigit1() {
	printf("������� isdigit \n");

	//����� � ������ �����/����� � �������� �� �� '?'

	char s[] = "I'm 17 years old. I was born in 2005";
	printf("�� �����:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isdigit(s[i])) {
			s[i] = '?';
		}
	}
	printf("\n ���������:   %s\n\n\n", s);
}

// isupper(int *)
// ������ ������� ���������� ��������� �����, ��������� ��������� ��������. ���� ����������, ���� ����� ��������

void testisupper_1() {
	printf("������� isupper \n");

	//����� � ������ ��������� ����� � �������� �� �� '?'

	char s[] = "i want TO BE HAPPY hehe";
	printf("�� �����:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isupper(s[i])) {
			s[i] = '?';
		}
	}
	printf("\n ���������:   %s\n\n\n", s);
}

void testisupper_2() {
	printf("2�� ������� isupper \n");

	//����� � ������ ��������� ����� � �������� �� �� '?'

	char s[] = "��������� ���������� - �������";
	printf("�� �����:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isupper(s[i])) {
			s[i] = '?';
		}
	}
	printf("\n ���������:   %s\n\n\n", s);
}

void testisupper_3() {
	printf("3�� ������� isupper � �������� �������  \n");

	//����� � ������ ��������� ����� � �������� �� �� '?'

	char s[] = "��������� ���������� - �������";
	printf("�� �����:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isupper((unsigned char)s[i])) {
			s[i] = '?';
		}
	}
	printf("\n ���������:   %s\n\n\n", s);
}


// toupper()
// ����������� �������� ����� � ���������



void testtoupper_1() {
	printf("������� toupper - � �������� �������  \n");

	//����� � ������ �������� ����� � �������� �� �� ���������

	char s[] = "����� ������";
	printf("�� �����:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toupper(s[i]);
	}
	printf("\n ���������:   %s\n\n\n", s);
}

void testtoupper_2() {
	printf("2�� ������� toupper \n");

	//����� � ������ ��������� ����� � �������� �� �� ���������

	char s[] = "I love YOU!";
	printf("�� �����:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toupper(s[i]);
	}
	printf("\n ���������:   %s\n\n\n", s);
}


// ������� �� ����� ������ �� ����� - isspace()
// ��� ������� ���������� ��������� ��������, ���� ������ �������� ��������

void testisspace_1() {

	//���������� ������� � * :)))
	printf("������� isspace � �������� �������  \n");


	char s[] = "������ ������� ������ �����...";
	printf("�� �����:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isspace((unsigned char)s[i])) {
			s[i] = '*';
		}
	}
	printf("\n ���������:   %s\n\n\n", s);


}

void testisspace_2() {

	//���������� ������� � * :)))
	printf("2�� ������� isspace � ���������� �������  \n");


	char s[] = "i hate everything about you";
	printf("����:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isspace(s[i])) {
			s[i] = '*';
		}
	}
	printf("\n ���������:   %s\n\n\n", s);
}
