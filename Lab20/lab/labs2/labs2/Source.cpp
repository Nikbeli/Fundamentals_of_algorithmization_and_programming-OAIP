#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
#include <locale.h>

void main1() {   //Задача 3*

	fflush(stdin);
	printf("Введите символ = ");
	int ch1 = getchar();

	for (int c = ch1; c >= ch1 - 29; c--) {
		printf("'%c' (%d)\n", c, c);
	}

	{
		int x;
		scanf("%d", &x);
	}

}


void main2() {   //Задача 4
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//ввод строки
	char s[80];
	printf("Введите строку:");
	fgets(s, 79, stdin);

	printf("\nВы ввели строку s = \"%s\"", s);

	int cnt = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') cnt++;
	}

	printf("\nВ ней %d пробелов\n", cnt);

	{
		int x;
		scanf("%d", &x);
	}

}


void main3() {     //Задача 5*
	setlocale(LC_ALL, "Rus");

	char s3[80];
	printf("Введите строку:");
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
	// Ввести строку s. Все цифры в ней заменить символом '$'  Задача 6.1
	setlocale(LC_ALL, "Rus");

	char s[] = "I have 32 USD and 5 EUR!85рук";
	printf("s = %s\n", s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (isdigit(s[i]))
			s[i] = '$';
	}
	printf("s = %s\n", s);
}


void main5() {
	// Ввести строку z. Все цифры в ней заменить символом '$'  Задача 6.1  Через ввод
	setlocale(LC_ALL, "Rus");

	char z[80];
	printf("Введите строку:");
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
	// Ввести строку s. Все цифры в ней заменить символом '$'  Задача 6.2
	char z[80];
	printf("Введите строку:");
	fgets(z, 79, stdin);
	printf("z = %s\n", z);
	
	for (int i = 0; z[i] != '\0'; i++) {
		//if (isdigit(z[i]))
		if(isDigitMy(z[i]))
			z[i] = '$';
	}
	printf("z = %s\n", z);
}



void main7() {  // Задача 7.1

	char s[80];
	printf("Введите строку:");
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
	if (c >= 'а' && c <= 'п')
		new_c = 'A' + (c - 'a');
	if (c >= 'р' && c <= 'я')
		new_c = 'Р' + (c - 'р');
	if (c == 'ё')
		new_c = 'Ё';
	return new_c;
}
void main8() {  // Задача 7.2

	setlocale(LC_ALL, "Rus");

	// Ввод строки
	char s[80];
	printf("Введите строку:");
	fgets(s, 79, stdin);

	printf("\nВы ввели строку = \"%s\"\n", s);

	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toUpperAll(s[i]);
	}

	printf("Строка после обработки =\"%s\"", s);

}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	
	//main1();

	printf("\n");

	//main2();
	//main3();


	/*//---------------------------------//
	main4(); //4,5 и 6 можно вместе
	printf("\n");
	printf("\n");
	main5();
	main6();
	//---------------------------------//*/


	//main7();

	main8();

	return 0;
}