#include "Header.h"
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
#include <string.h>


//для ctype  
//isdigit (строка)
//краткое описание: узает цифры  в символах (идентифицирует), возвращает ноль, если аргумент не является числом и возвращает значение, если аргумент числом является

//В качестве источников информации я взял лабораторные работы и лекции с занятий по ОА и П, википедия и справочник с microsoft


void testisdigit1() {
	printf("Функции isdigit \n");

	//найти в строке цифры/числа и заменить их на '?'

	char s[] = "I'm 17 years old. I was born in 2005";
	printf("вы ввели:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isdigit(s[i])) {
			s[i] = '?';
		}
	}
	printf("\n Результат:   %s\n\n\n", s);
}

// isupper(int *)
// данная функция определяет прописные буквы, возвращая ненулевое значение. нуль возвращает, если буква строчная

void testisupper_1() {
	printf("Функции isupper \n");

	//найти в строке прописные буквы и заменить их на '?'

	char s[] = "i want TO BE HAPPY hehe";
	printf("вы ввели:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isupper(s[i])) {
			s[i] = '?';
		}
	}
	printf("\n Результат:   %s\n\n\n", s);
}

void testisupper_2() {
	printf("2ая функция isupper \n");

	//найти в строке прописные буквы и заменить их на '?'

	char s[] = "секретный ингридиент - БАЗИЛИК";
	printf("вы ввели:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isupper(s[i])) {
			s[i] = '?';
		}
	}
	printf("\n Результат:   %s\n\n\n", s);
}

void testisupper_3() {
	printf("3ья функция isupper с русскими буквами  \n");

	//найти в строке прописные буквы и заменить их на '?'

	char s[] = "секретный ингридиент - БАЗИЛИК";
	printf("вы ввели:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isupper((unsigned char)s[i])) {
			s[i] = '?';
		}
	}
	printf("\n Результат:   %s\n\n\n", s);
}


// toupper()
// преобразует строчные буквы в прописные



void testtoupper_1() {
	printf("Функция toupper - с русскими буквами  \n");

	//найти в строке строчные буквы и заменить их на прописные

	char s[] = "скажи громче";
	printf("вы ввели:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toupper(s[i]);
	}
	printf("\n Результат:   %s\n\n\n", s);
}

void testtoupper_2() {
	printf("2ая функция toupper \n");

	//найти в строке прописные буквы и заменить их на прописные

	char s[] = "I love YOU!";
	printf("вы ввели:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toupper(s[i]);
	}
	printf("\n Результат:   %s\n\n\n", s);
}


// функция из этого модуля на выбор - isspace()
// эта функция возвращает ненулевое значение, если символ является пробелом

void testisspace_1() {

	//переделаем пробелы в * :)))
	printf("Функция isspace с русскими буквами  \n");


	char s[] = "каждый охотник желает знать...";
	printf("вы ввели:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isspace((unsigned char)s[i])) {
			s[i] = '*';
		}
	}
	printf("\n Результат:   %s\n\n\n", s);


}

void testisspace_2() {

	//переделаем пробелы в * :)))
	printf("2ая функция isspace с латинскими буквами  \n");


	char s[] = "i hate everything about you";
	printf("Ввод:   %s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (isspace(s[i])) {
			s[i] = '*';
		}
	}
	printf("\n Результат:   %s\n\n\n", s);
}
