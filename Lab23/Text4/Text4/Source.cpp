﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define MAX_LEN 80

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Белянин Никита\n");
	printf("ЛР23 Задача 4\n");

	// Входной файл
	FILE* fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\text4.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	// Выходной файл
	FILE* fout;
	fout = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\out4.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	// читаемый из файла очередной символ
	int ch; // именно int!!! если будет char - то будут проблемы!!!
	// is_letter = 1 если прочитана буква, is_letter = 0 если прочитана не буква
	int is_letter = 0;
	// word  - формируемое слово, word_len - его длина
	char word[MAX_LEN];
	int word_len = 0;
	// пока файл не кончился - читаем очередной символ из файла
	while ((ch = getc(fin)) != EOF) {
		// Если прочитали из файла букву
		if (isalpha((unsigned char)ch)) {
			//if (isalpha_my((unsigned char)ch)) { // с русскими буквами
			// если до этого была не буква
			if (!is_letter) {
				// начинаем формировать новое слово!
				word_len = 0;
				// фиксируем, что была прочитана буква
				is_letter = 1;
			}
			if (word_len < MAX_LEN - 1) {
				// очередную букву добавляем к слову
				word[word_len++] = ch;
			}
			else {
				// Если слово слишком длинное - то лишние буквы выкидываем
			}
		}

		// Если прочитали из файла не букву!​

		else { // if (!isalpha(ch)) {​

			// если до этого была буква ​

			if (is_letter) {

				// в word накоплены символы - нужно закрыть строку в конце символом '\0’
				word[word_len] = '\0';
				fprintf(fout, "%s", word);
				int isCaps = 0;
				for (int i = 0; word[i] != '\0'; i++) {
					if (isupper((unsigned char)word[i]))
						isCaps = 1;
				}
				if (isCaps) {
					fprintf(fout, "+");
					printf("%s\n", word);
				}
			}
			// фиксируем, что была прочитана не буква
			is_letter = 0;
			// в выходной файл добавляем только что прочитанный символ "КАК ЕСТЬ"
			fprintf(fout, "%c", ch);
		}// else
	}	// while ((ch = getc(fin)) != EOF)

			// Последнее слово - ЗАКРЫТЬ!!!
			// если до этого была буква
	if (is_letter) {
		// в word накоплены символы - нужно закрыть строку в конце символом '\0’
		word[word_len] = '\0';
		fprintf(fout, "%s", word);
		int isCaps = 0;
		for (int i = 0; word[i] != '\0'; i++) {
			if (isupper((unsigned char)word[i]))
				isCaps = 1;
		}
		if (isCaps) {
			fprintf(fout, "+");
			printf("%s\n", word);
		}
	}
	// закрыли файлы
	fclose(fin);
	fclose(fout);
	printf("ЛР23 Задача 4 FINISH\n");
}