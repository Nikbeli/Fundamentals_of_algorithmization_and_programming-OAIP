#pragma once

#include <Windows.h>
#include "Lines.h"

struct Line {
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	unsigned char r, g, b;
};

void LoadLines();
void DrawLines(HDC hdc);
void DestroyLines();
void InitLines1();

extern struct Line* lines;
extern int n;