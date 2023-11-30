#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Lines.h"

struct Line* lines = NULL;
int n = 0;


void DestroyLines() {
	free(lines);
	lines = NULL;
	n = 0;
}


void InitLines1() {
	n = 2;
	lines = (struct Line*)malloc(sizeof(struct Line) * n);
	lines[0].x1 = 10;
	lines[0].y1 = 10;
	lines[0].x2 = 100;
	lines[0].y2 = 10;
	lines[0].r = 0;
	lines[0].g = 0;
	lines[0].b = 0;

	lines[1].x1 = 100;
	lines[1].y1 = 10;
	lines[1].x2 = 100;
	lines[1].y2 = 100;
	lines[1].r = 0;
	lines[1].g = 255;
	lines[1].b = 0;
}


void DrawLines(HDC hdc) {
	for (int i = 0; i < n; i++) {
		HPEN hPen = CreatePen(PS_SOLID, 1, RGB(lines[i].r, lines[i].g, lines[i].b));
		SelectObject(hdc, hPen);
		MoveToEx(hdc, lines[i].x1, lines[i].y1, NULL);
		LineTo(hdc, lines[i].x2, lines[i].y2);
		DeleteObject(hPen);
	}
}


void LoadLines() {
	// Открытие входного файла
	FILE* fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab26\\Txt\\lines.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден\n"); // ??? Куда выведется?
		return;
	}
	int num = 0;
	while (!feof(fin)) {
		int x1, y1, x2, y2, r, g, b;
		if (fscanf(fin, "%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &r, &g, &b) == 7) {
			num++;
		}
	}
	// Закрытие входного файла
	fclose(fin);
	// Повторное открытие входного файла
	fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab26\\Txt\\lines.txt", "rt");
	if (lines != NULL) {
		free(lines);
	}
	n = num;
	lines = (struct Line*)malloc(sizeof(struct Line) * n);
	for (int i = 0; i < n; i++) {
		int x1, y1, x2, y2, r, g, b;
		fscanf(fin, "%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &r, &g, &b);
		lines[i].x1 = x1;
		lines[i].y1 = y1;
		lines[i].x2 = x2;
		lines[i].y2 = y2;
		lines[i].r = r;
		lines[i].g = g;
		lines[i].b = b;
	}
	// Закрытие входного файла
	fclose(fin);
}
