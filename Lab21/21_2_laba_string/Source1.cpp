#include "Header.h"
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
#include <string.h>

//strcpy(dest, scr)
// �������� - �� �� ��������� � ����������� ����� ����������
// ������ ������� �������� ������ str �  dest, ������� ��� ���� ����������� \0
void strcpytest_1() {
	char src[] = "Butterfly";
	char dest[13];

	printf("src = %s, dest = %s\n\n", src, dest);
	strcpy_s(dest, src);
	printf("src = %s, dest = %s\n\n", src, dest);
}




// strcmp(const char, const char)
// ������������������ ��������� ���� �����
// ���������� 0, ���� ������ ����������, �������������, ���� ������ ������ ������ � �������������, ���� ������


void strcmptest() {
	char s1[] = "apple";
	char s2[] = "scream";
	char s3[] = "aLways";
	char s4[] = "worry";
	printf("\n\n %s, %s, %s, %s", s1, s2, s3, s4);

	char* min = s1;
	char* max = s1;

	if (strcmp(s2, max) > 0) max = s2;
	if (strcmp(s3, max) > 0) max = s3;
	if (strcmp(s4, max) > 0) max = s4;
	printf("\n\nmax = %s", max);

	if (strcmp(s2, min) < 0) min = s2;
	if (strcmp(s3, min) < 0) min = s3;
	if (strcmp(s4, min) < 0) min = s4;
	printf("\n\nmin = %s", min);
}


//������� strlen(const char) - ���� ������  -  �� ��� ������� � ���������� ����� ������

void strlentest_1() {
	char s[30] = "Hello, my name is Susi";
	printf("\n\n%s\n\n", s);
	printf("len = %d \n\n", strlen(s));

}

void strlentest_2() {
	char s[30] = "������, � �������?";
	printf("\n\n%s\n\n", s);
	printf("len = %d\n\n ", strlen(s));

}
//������ ������� ��������� �������� ������������ ���������� �������� �� ����� ������ � ������ -->strncpy_s(b - ������, � ������� ����������� �������,
//a - ������, �� ������� ����������� �������, 3 - ���������� ����������� ��������)

void stricmptest() {
	
	char a[] = "weather";
	char b[] = "rrrrr";
	printf("\n\n%s", a);
	
	strncpy_s(b, a, 3);// ���������� ������ 3 ������� �� ������
	
	printf("\n\n������������� ������ = %s\n", b);
	
}
