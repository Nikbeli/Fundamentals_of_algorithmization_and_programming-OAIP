#include "Header.h"
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
#include <string.h>

//strcpy(dest, scr)
// источник - та же википеди€ и презентаци€ ќлега ‘едосовича
// данна€ функци€ копирует строку str в  dest, включа€ при этом завершающий \0
void strcpytest_1() {
	char src[] = "Butterfly";
	char dest[13];

	printf("src = %s, dest = %s\n\n", src, dest);
	strcpy_s(dest, src);
	printf("src = %s, dest = %s\n\n", src, dest);
}




// strcmp(const char, const char)
// лексикографическое сравнение двух строк
// возвращает 0, если строки одинаковые, положительное, если перва€ строка больше и отрицательное, если меньше


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


//функци€ strlen(const char) - если кратко  -  то она считает и возвращает длину строки

void strlentest_1() {
	char s[30] = "Hello, my name is Susi";
	printf("\n\n%s\n\n", s);
	printf("len = %d \n\n", strlen(s));

}

void strlentest_2() {
	char s[30] = "привет, € подс€ду?";
	printf("\n\n%s\n\n", s);
	printf("len = %d\n\n ", strlen(s));

}
//данна€ функци€ позвол€ет вставить определенное количество символов из одной строки в другую -->strncpy_s(b - строка, в которую вставл€ютс€ символы,
//a - строка, из которой вставл€ютс€ символы, 3 - количество вставл€емых символов)

void stricmptest() {
	
	char a[] = "weather";
	char b[] = "rrrrr";
	printf("\n\n%s", a);
	
	strncpy_s(b, a, 3);// скопируйте первые 3 символа из строки
	
	printf("\n\n—копированна€ строка = %s\n", b);
	
}
