#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
#include <locale.h>

void main1() {   //������ 3*

	fflush(stdin);
	printf("������� ������ = ");
	int ch1 = getchar();

	for (int c = ch1; c >= ch1 - 29; c--) {
		printf("'%c' (%d)\n", c, c);
	}

	{
		int x;
		scanf("%d", &x);
	}

}


void main2() {   //������ 4
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//���� ������
	char s[80];
	printf("������� ������:");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������ s = \"%s\"", s);

	int cnt = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') cnt++;
	}

	printf("\n� ��� %d ��������\n", cnt);

	{
		int x;
		scanf("%d", &x);
	}

}


void main3() {     //������ 5*
	setlocale(LC_ALL, "Rus");

	char s3[80];
	printf("������� ������:");
	fgets(s3, 79, stdin);

	printf("s3 = %s\n", s3);
	int i = 0;
	while (s3[i] != '\0') {
		if (isspace(s3[i])) {
			s3[i] = '#';
		}
		i++;
	}
	printf("s3 = %s\n", s3);
}


void main4() {
	// ������ ������ s. ��� ����� � ��� �������� �������� '$'  ������ 6.1
	setlocale(LC_ALL, "Rus");

	char s[] = "I have 32 USD and 5 EUR!85���";
	printf("s = %s\n", s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (isdigit(s[i]))
			s[i] = '$';
	}
	printf("s = %s\n", s);
}


void main5() {
	// ������ ������ z. ��� ����� � ��� �������� �������� '$'  ������ 6.1  ����� ����
	setlocale(LC_ALL, "Rus");

	char z[80];
	printf("������� ������:");
	fgets(z, 79, stdin);
	printf("z = %s\n", z);

	for (int i = 0; z[i] != '\0'; i++) {
		if (isdigit(z[i]))
			z[i] = '$';
	}
	printf("z = %s\n", z);
}


int isDigitMy(char c) {
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}


void main6() {
	// ������ ������ s. ��� ����� � ��� �������� �������� '$'  ������ 6.2
	char z[80];
	printf("������� ������:");
	fgets(z, 79, stdin);
	printf("z = %s\n", z);
	
	for (int i = 0; z[i] != '\0'; i++) {
		//if (isdigit(z[i]))
		if(isDigitMy(z[i]))
			z[i] = '$';
	}
	printf("z = %s\n", z);
}



void main7() {  // ������ 7.1

	char s[80];
	printf("������� ������:");
	fgets(s, 79, stdin);
	printf("s = %s\n", s);

	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toupper(s[i]);
	}
	printf("s = %s\n", s);
}


int toUpperAll(int c) {
	int new_c = c;
	if (c >= 'a' && c <= 'z')
		new_c = 'A' + (c - 'a');
	if (c >= '�' && c <= '�')
		new_c = 'A' + (c - 'a');
	if (c >= '�' && c <= '�')
		new_c = '�' + (c - '�');
	if (c == '�')
		new_c = '�';
	return new_c;
}
void main8() {  // ������ 7.2

	setlocale(LC_ALL, "Rus");

	// ���� ������
	char s[80];
	printf("������� ������:");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������ = \"%s\"\n", s);

	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toUpperAll(s[i]);
	}

	printf("������ ����� ��������� =\"%s\"", s);

}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	
	//main1();

	printf("\n");

	//main2();
	//main3();


	/*//---------------------------------//
	main4(); //4,5 � 6 ����� ������
	printf("\n");
	printf("\n");
	main5();
	main6();
	//---------------------------------//*/


	//main7();

	main8();

	return 0;
}