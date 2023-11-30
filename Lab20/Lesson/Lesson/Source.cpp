#include <stdio.h>​
#include <ctype.h>

void main() {
	char ch = 32;
	while (ch < 127) {
		printf("%d ", ch);
		ch++;
	}

	printf("\n\n\n");
	char ch1 = 32;
	while (ch1 < 127) {
		printf("%c ", ch1);
		ch1++;
	}

	printf("\n\n\n");
	unsigned char ch2 = 0;
	while (ch2 < 255) {
		printf("%c ", ch2);
		ch2++;
	}

	printf("\n\n\n");
	signed char ch3 = -128;
	while (ch3 < 127) {
		printf("%c ", ch3);
		ch3++;
	}

	printf("\n\n\n");
	//null-terminated string
	char s1[8] = "Hi!\n";
	int i;
	for (i = 0; i < 8; i++) {
		printf("%c(%d), ", s1[i], s1[i]);
	}

	//Инициализация строки как массива символов​
	printf("\n\n\n");
	char s2[8] = { 'H', 'i', '!', '\n', '\0' };
	int i1;
	for (i1 = 0; i1 < 8; i1++) {
		printf("%c(%d), ", s2[i1], s2[i1]);
	}

	//Инициализация строки как строки​  (При выходе за границу получим мусор в следующих ячейках)
	printf("\n\n\n");
	char s3[] = "%c(%d), ";
	int i2;
	for (i2 = 0; i2 < 12; i2++) {
		printf("%c(%d), ", s3[i2], s3[i2]);
	}

	//Простейшие алгоритмы обработки строк ​(как массива символов с ‘\0’ в конце)​
	printf("\n\n\n");
	char s4[] = "I have 32 USD and 5 EUR!";
	printf("s3 = %s\n", s4);
	int i3 = 0;
	while (s3[i3] != '\0') {
		if (s4[i3] >= '0' && s4[i3] <= '9') {
			s4[i3] = '#';
		}
		i3++;
	}
	printf("s4 = %s\n", s4);

	//Используем функции из ctype.h​
	printf("\n\n\n");
	char s5[] = "I have 32 USD and 5 EUR!";
	printf("s3 = %s\n", s5);
	int i4 = 0;
	while (s5[i4] != '\0') {
		if (isdigit(s5[i4])) {
			s5[i4] = '#';
		}
		i4++;
	}
	printf("s5 = %s\n", s5);

	//заменить на символ «#»​
	printf("\n\n\n");
	char s6[] = "I have 32 USD and 5 EUR!";
	printf("s3 = %s\n", s6);
	int i11 = 0;
	while (s6[i11] != '\0') {
		if (isalpha(s6[i11])) {
			s6[i11] = '#';
		}
		i11++;
	}
	printf("s6 = %s\n", s6);

	printf("\n\n\n");
	//Все ????? заменить на символ «#»  (все пробелы)
	char s7[] = "I have 32 USD and 5 EUR!";
	printf("s7 = %s\n", s7);
	int i12 = 0;
	while (s7[i12] != '\0') {
		if (isspace(s7[i12])) {
			s7[i12] = '#';
		}
		i12++;
	}
	printf("s7 = %s\n", s7);

	printf("\n\n\n");
	//Все ????? заменить на символ «#»  (все заглавные)
	char z3[] = "I have 32 USD and 5 EUR!";
	printf("z3 = %s\n", z3);
	int o = 0;
	while (z3[o] != '\0') {
		if (isupper(z3[o])) {
			z3[o] = '#';
		}
		o++;
	}
	printf("z3 = %s\n", z3);

	printf("\n\n\n");
	//Все ????? заменить на символ «#»  (все заглавные)
	char z1[] = "I have 32 USD and 5 EUR!";
	printf("z1 = %s\n", z1);
	int o1 = 0;
	while (z1[o1] != '\0') {
		if (islower(z1[o1])) {
			z1[o1] = '#';
		}
		o1++;
	}
	printf("z1 = %s\n", z1);

	printf("\n\n\n");
	//Все ????? заменить на символ «#»  (все строчные перевести в заглавные)
	char z2[] = "I have 32 USD and 5 EUR!";
	printf("s3 = %s\n", z2);
	int o2 = 0;
	while (z2[o2] != '\0') {
		z2[o2] = toupper(z2[o2]);
		o2++;
	}
	printf("z2 = %s\n", z2);


	printf("\n\n\n");
	//Все ????? заменить на символ «#»  (все строчные перевести в заглавные)
	char r[] = "I have 32 USD and 5 EUR!";
	printf("r = %s\n", r);
	int oi = 0;
	while (r[oi] != '\0') {
		r[oi] = tolower(r[oi]);
		oi++;
	}
	printf("r = %s\n", r);
}