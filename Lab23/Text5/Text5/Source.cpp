#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define MAX_LEN 1000

char c[MAX_LEN];


void main1() {		// Задача 5

	// Входной файл
	FILE* fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\text1.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	// Выходной файл
	FILE* fout;
	fout = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\out5.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	int c;
	int isletter = 0;
	char word[MAX_LEN];
	int wword_len = 0;
	while ((c = getc(fin)) != EOF) {
		if (isalpha((unsigned char)c)) {
			if (!isletter) {
				wword_len = 0;
				isletter = 1;
			}
			if (wword_len < MAX_LEN - 1) {
				word[wword_len++] = c;
			}

		}
		else {
			if (isletter) {
				word[wword_len] = '\0';
				fprintf(fout, "%s", word);
				int iscaps = 0;
				for (int i = 0; word[i] != '\0'; i++) {
					if ((islower((unsigned char)word[i])))
						iscaps = 1;
				}
				if (iscaps) {
					fprintf(fout, "-");
					printf("%s\n", word);
				}
			}
			isletter = 0;
			fprintf(fout, "%c", c);
		}
	}

	fclose(fout);
	fclose(fin);
}



void DZChast2() {    // ДЗ  Все заглавные поменять на Большие X

	FILE* fin2 = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\text1.txt", "rt");
	if (fin2 == NULL) {
		printf("Входной файл не найден");
		return;
	}

	// Выходной файл
	FILE* fout2;
	fout2 = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\out6.txt", "wt");
	if (fout2 == NULL) {
		printf("Выходной файл не создался");
		return;
	}



	//пока не конец строки
	while (!feof(fin2)) {
		// загрузить строку
		if (fgets(c, MAX_LEN - 1, fin2) != NULL) {
			// обработать загруженную строку
			for (int i = 0; c[i] != '\0'; i++) {

				if (isupper(unsigned char(c[i]))) { // если в строке есть БОЛЬШИЕ латинские буквы
					c[i] = 'X'; // Заменяем на "$"
				}
			}
			// сохранить строку в выходной файл
			fprintf(fout2, "%s", c);
			printf("%s\n", c);
		}
	}
	// закрыли файлы
	fclose(fout2);
	fclose(fin2);


	printf("\n\n");

}



void DZChast3() {    // ДЗ  Все цифры поменять на Большие X

	FILE* fin2 = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\text5.txt", "rt");
	if (fin2 == NULL) {
		printf("Входной файл не найден");
		return;
	}

	// Выходной файл
	FILE* fout2;
	fout2 = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\out6.txt", "wt");
	if (fout2 == NULL) {
		printf("Выходной файл не создался");
		return;
	}



	//пока не конец строки
	while (!feof(fin2)) {
		// загрузить строку
		if (fgets(c, MAX_LEN - 1, fin2) != NULL) {
			// обработать загруженную строку
			for (int i = 0; c[i] != '\0'; i++) {

				if (c[i]>= '0' && c[i]<'9') { // если в строке есть
					c[i] = 'X'; // Заменяем на "$"
				}
			}
			// сохранить строку в выходной файл
			fprintf(fout2, "%s", c);
			printf("%s\n", c);
		}
	}
	// закрыли файлы
	fclose(fout2);
	fclose(fin2);


	printf("\n\n");

}



void DZChast4() {    // ДЗ  Вывод в конце строки &?! * k = количетсву двоек в тексте

	FILE* fin2 = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\text5.txt", "rt");
	if (fin2 == NULL) {
		printf("Входной файл не найден");
		return;
	}

	// Выходной файл
	FILE* fout2;
	fout2 = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\out6.txt", "wt");
	if (fout2 == NULL) {
		printf("Выходной файл не создался");
		return;
	}



	//пока не конец строки
	while (!feof(fin2)) {
		// загрузить строку
		if (fgets(c, MAX_LEN - 1, fin2) != NULL) {
			// обработать загруженную строку
			for (int i = 0; c[i] != '\0'; i++) {

				if (c[i] == '2') { // если в строке есть
					strcat(c, "&?!"); // Заменяем на "&?!"
				}
			}
			// сохранить строку в выходной файл
			fprintf(fout2, "%s", c);
			printf("%s\n", c);
		}
	}
	// закрыли файлы
	fclose(fout2);
	fclose(fin2);


	printf("\n\n");

}



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Белянин Никита\n");
	printf("ЛР23 Задача 4\n");
	
	main1();
	//DZChast2();
	DZChast3();
	//DZChast4();
}