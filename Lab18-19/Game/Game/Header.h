#pragma once


#include <stdio.h>
#include <Windows.h>
//#include 


#define MAX_LOADSTRING 100
#define N 30
#define M 30
#define WIDTH 30
#define HEIGHT 20
// Коды ячеек:​
// 0 - свободна​
// 1 - игрок​
// 2 - препятствие​
// 3 - золото​

int map[N][M] = {
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 1, 0, 0, 0,   0, 0, 0, 0, 3,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 3,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 3, 3,   3, 3, 0, 0, 0,   3, 3, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 3, 0, 0, 0,   3, 3, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},

	{0, 0, 0, 0, 0,   0, 3, 3, 3, 0,   0, 0, 0, 0, 0,   0,0,0,0,2,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 0, 0, 3, 0,   2, 0, 0, 2, 0,   0,0,0,0,2,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 0, 2, 0, 0,   2, 0, 0, 2, 0,   0,0,0,0,2,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 2, 2, 2, 2,   2, 2, 2, 2, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},

	{0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 3,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 3,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 3, 3,   3, 3, 0, 0, 0,   3, 3, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 3, 0, 0, 0,   3, 3, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},

	{0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 3,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 3,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 3, 3,   3, 3, 0, 0, 0,   3, 3, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 3, 0, 0, 0,   3, 3, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},

	{0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 3,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 3,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 3, 3,   3, 3, 0, 0, 0,   3, 3, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 3, 0, 0, 0,   3, 3, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},

	{0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 3,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 3,   0, 0, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 3, 3,   3, 3, 0, 0, 0,   3, 3, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0},
	{0, 0, 0, 0, 0,   0, 3, 0, 0, 0,   3, 3, 0, 0, 0,   0,0,0,0,0,   0,0,0,0,0}, };


void drawMap(HDC hdc) {
	// кисть для пустого поля​
	HBRUSH hBrushEmptyCell = CreateSolidBrush(RGB(200, 200, 200)); // серый​
	// кисть для поля с золотом​
	HBRUSH hBrushGold = CreateSolidBrush(RGB(255, 255, 0)); // желтый​
	// кисть для стены​
	HBRUSH hBrushWall = CreateSolidBrush(RGB(0, 0, 0)); // черный​
	// кисть для игрока​
	HBRUSH hBrushMan = CreateSolidBrush(RGB(0, 0, 255)); // синий​
	// Коды ячеек:​
	// 0 - свободна​
	// 1 - игрок​
	// 2 - препятствие​
	// 3 - золото​
	HBRUSH brush[4] = { hBrushEmptyCell, hBrushMan, hBrushWall, hBrushGold };

	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			int x1 = j * WIDTH;
			int x2 = (j + 1) * WIDTH;
			int y1 = i * HEIGHT;
			int y2 = (i + 1) * HEIGHT;
			RECT r = { x1, y1, x2, y2 };
			FillRect(hdc, &r, brush[map[i][j]]);
		}
	}
	for (i = 0; i < 4; i++) {
		DeleteObject(brush[i]);
	}
}

int steps = 0;
int gold = 0;

void Left() {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 1; j < M; j++) {
			if (map[i][j] == 1) { // если в map[i][j]  игрок​
				if (map[i][j - 1] == 0) { // если слева от игрока - пустая клетка​
					map[i][j - 1] = 1;
					map[i][j] = 0;
					steps++;
				}
				else if (map[i][j - 1] == 3) {// если слева от игрока - золото​
					map[i][j - 1] = 1;
					map[i][j] = 0;
					steps++;
					gold++;
				}
			}
		}
	}
}

void Right() {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = M - 2; j >= 0; j--) {
			if (map[i][j] == 1) { // если в map[i][j]  игрок​
				if (map[i][j + 1] == 0) {
					map[i][j + 1] = 1;
					map[i][j] = 0;
					steps++;
				}
				else if (map[i][j + 1] == 3) {
					map[i][j + 1] = 1;
					map[i][j] = 0;
					steps++;
					gold++;
				}
			}
		}
	}
}




void Up() {
	int i, j;
	for (i = 1; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (map[i][j] == 1) { // если в map[i][j]  игрок​
				if (map[i - 1][j] == 0) {
					map[i - 1][j] = 1;
					map[i][j] = 0;
					steps++;
				}
				else if (map[i - 1][j] == 3) {
					map[i - 1][j] = 1;
					map[i][j] = 0;
					steps++;
					gold++;
				}
			}
		}
	}
}


void Down() {
	int i, j;
	for (i = M - 2; i >= 0; i--) {
		for (j = 0; j < M; j++) {
			if (map[i][j] == 1) { // если в map[i][j]  игрок​
				if (map[i + 1][j] == 0) {
					map[i + 1][j] = 1;
					map[i][j] = 0;
					steps++;
				}
				else if (map[i + 1][j] == 3) {
					map[i + 1][j] = 1;
					map[i][j] = 0;
					steps++;
					gold++;
				}
			}
		}
	}
}

void Stena() {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = M - 2; j >= 0; j--) {
			if (map[i][j] == 1) { // если в map[i][j]  игрок​
				if (map[i][j + 1] == 0) {
					map[i][j + 1] = 2;
				}

			}
		}
	}
}

void Stena2() {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 1; j < M; j++) {
			if (map[i][j] == 1) { // если в map[i][j]  игрок​
				if (map[i][j - 1] == 0) { // если слева от игрока - пустая клетка​
					map[i][j - 1] = 2;
				}
			}
		}
	}
}


void Zoloto() {
	int i, j;
	for (i = 1; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (map[i][j] == 1) { // если в map[i][j]  игрок​
				if (map[i - 1][j] == 0) {
					map[i - 1][j] = 3;
				}
			}
		}
	}
}

void Default() {
	int i, j;
	for (i = M - 2; i >= 0; i--) {
		for (j = 0; j < M; j++) {
			if (map[i][j] == 1) { // если в map[i][j]  игрок​
				if (map[i + 1][j] == 2) {
					map[i + 1][j] = 0;
				}

			}
		}
	}
}


// Сохранение состояния
void Save() {

	// Выходной файл
	FILE* fout;
	fout = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab18-19\\Game+\\in.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
	}

	fprintf(fout, "%d ", N);
	fprintf(fout, "%d\n", M);
	int i, j;

	for (i = 1; i < N; i++) {

		for (j = 0; j < M; j++) {
			fprintf(fout, "%d ", map[i][j]);
		}
		fprintf(fout, "\n");
	}

	fprintf(fout, "%d ", steps);
	fprintf(fout, "%d", gold);

	fclose(fout);
}


// Загрузка состояния
void Load() {

	// Выходной файл
	FILE* fin;
	fin = fopen("C:\\Users\\Никита\\source\\repos\\Program create\\ULSTU\\Lab18-19\\Game+\\in.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не создался");
		return;
	}

	int n, m;
	fscanf(fin, "%d", &n);
	fscanf(fin, "%d", &m);

	int i, j;

	for (i = 1; i < n; i++) {
		for (j = 0; j < m; j++) {
			fscanf(fin, "%d", &map[i][j]);
		}

	}
	fscanf(fin, "%d ", &steps);
	fscanf(fin, "%d", &gold);

	fclose(fin);
}
/*void Stena(HDC hdc) {
	// кисть для стены​
	HBRUSH hBrushWall = CreateSolidBrush(RGB(0, 0, 0)); // черный​
	HBRUSH brush[1] = {hBrushWall};

	int i = 0;
	int j = 0;

	int x1 = j * WIDTH;
	int x2 = (j + 1) * WIDTH;
	int y1 = i * HEIGHT;
	int y2 = (i + 1) * HEIGHT;
	RECT r = { x1, y1, x2, y2 };

	FillRect(hdc, &r, brush[map[i][j]]);
}*/