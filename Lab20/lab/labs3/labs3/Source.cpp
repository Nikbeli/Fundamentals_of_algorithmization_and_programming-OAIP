#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <Windows.h>


#include "MyFunc.h"
#include "Func.h"
#include "Fun.h"

// Реализация задачи 7.2
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Ввод строки. Реализация через Ф-цию
	char s[80];
	printf("Заглавные буквы\n");
	printf("Введите строку:");
	fgets(s, 79, stdin);

	printf("\nВы ввели строку = \"%s\"\n", s);

	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toUpperAll(s[i]);
	}

	printf("Строка после обработки =\"%s\"", s);

	printf("\n\n");



	/* {
		int x;
		scanf("%d", &x);
	}*/



	//1ая реализация strlen (Подсчёт длины строки)
	char z[10] = "Hi!";
	printf("len = %d\n", strlen_my(z));
	z[3] = ' '; z[4] = '\0';
	printf("len = %d\n", strlen_my(z));
	z[4] = 'W'; z[5] = 'o'; z[6] = 'r'; z[7] = 'l';
	z[8] = 'd'; z[9] = '\0';
	printf("len = %d\n", strlen_my(z));


	printf("\n\n");


	//2ая реализация strlen ф-ция
	char str[999];
	int ret = 0;
	printf("Пожалуйста, введите строку символов:\n");
	fgets(str, 999, stdin);
	ret = my_strlen1(str);
	printf("Длина строки: %d \n", ret);

	printf("\n\n");

	//3ая реализация strlen ф-ция
	char str0[999];
	int ret2 = 0;
	printf("Пожалуйста, введите строку символов:\n");
	fgets(str0, 999, stdin);
	ret2 = my_strlen2(str0) - 1;
	printf("Длина строки: %d \n", ret2);


	printf("\n\n");


	// Реализация сравнения строк strcmp через ф-цию
	char strX[999];
	int res = 0;
	printf("Пожалуйста, введите строку символов:\n");
	fgets(strX, 999, stdin);
	char strY[999];
	printf("Пожалуйста, введите строку символов:\n");
	fgets(strY, 999, stdin);

	res = strcmp(strX, strY);

	if (res > 0) {
		printf("%s", "1ая строка больше чем 2ая строка");
	}
	else if (res < 0) {
		printf("%s", "1ая строка меньше, чем 2ая строка");
	}
	else {
		printf("%s", "1ая строка равна 2ой строке");
	}


	printf("\n\n");


	//функция для копирования нуль-терминированной строки (В конце символ  '\0')
	
	printf("Копирование символов строки\n\n");
	char source[999];
	fgets(source, 999, stdin);
	char destination[999];

	printf("%s\n", strcpy(destination, source));


	printf("\n\n");
	
	
	//функция для объединения строк 


	printf("Объединение строк\n\n");

	char str1[100];
	char str2[100];

	printf("Объединённая строка = ");
	printf(strcat(fgets(str2, 100, stdin), fgets(str1, 100, stdin)));
}