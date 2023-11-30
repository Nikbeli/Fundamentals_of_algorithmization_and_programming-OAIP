#include "Figure.h"


void Cross(HDC hdc, int cx, int cy, int size) {
	HPEN hPen;
	hPen = CreatePen(PS_SOLID, 2, RGB(0, 255, 0));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, cx - size, cy, NULL);
	LineTo(hdc, cx + size, cy);
	MoveToEx(hdc, cx, cy - size, NULL);
	LineTo(hdc, cx, cy + size);
	DeleteObject(hPen);
}


void Triangle(HDC hdc, int cx, int cy, int size) {
	HPEN hPen;
	hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, cx, cy - size, NULL);
	LineTo(hdc, cx + size, cy + size);
	LineTo(hdc, cx - size, cy + size);
	LineTo(hdc, cx, cy - size);
	DeleteObject(hPen);
}


void Circle(HDC hdc, int cx, int cy, int size) {
	HPEN hPen;
	hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
	SelectObject(hdc, hPen);
	Ellipse(hdc, cx - size, cy - size, cx + size, cy + size);
	DeleteObject(hPen);
}


void RecursiveTriangle(HDC hdc, int cx, int cy, int size) {
	Triangle(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveTriangle(hdc, cx, cy - size, size / 2);
}



void RecursiveTriangle1(HDC hdc, int cx, int cy, int size) {
	Triangle(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveTriangle1(hdc, cx, cy - size, size / 2);
	RecursiveTriangle1(hdc, cx + size, cy + size, size / 2);
}



void RecursiveTriangle2(HDC hdc, int cx, int cy, int size) {
	Triangle(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveTriangle2(hdc, cx, cy - size, size / 2);
	RecursiveTriangle2(hdc, cx + size, cy + size, size / 2);
	RecursiveTriangle2(hdc, cx - size, cy + size, size / 2);
}



void RecursiveCircle(HDC hdc, int cx, int cy, int size) {
	Circle(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveCircle(hdc, cx, cy - size, size / 2);
}



void RecursiveCircle1(HDC hdc, int cx, int cy, int size) {
	Circle(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveCircle1(hdc, cx, cy - size, size / 2);
	RecursiveCircle1(hdc, cx + size, cy, size / 2);
}



void RecursiveCircle2(HDC hdc, int cx, int cy, int size) {
	Circle(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveCircle2(hdc, cx, cy - size, size / 2);
	RecursiveCircle2(hdc, cx + size, cy, size / 2);
	RecursiveCircle2(hdc, cx, cy + size, size / 2);
}



void RecursiveCircle3(HDC hdc, int cx, int cy, int size) {
	Circle(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveCircle3(hdc, cx, cy - size, size / 2);
	RecursiveCircle3(hdc, cx + size, cy, size / 2);
	RecursiveCircle3(hdc, cx, cy + size, size / 2);
	RecursiveCircle3(hdc, cx - size, cy, size / 2);
}



void RecursiveCircle4(HDC hdc, int cx, int cy, int size) {
	Circle(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveCircle4(hdc, cx, cy - size, size / 2);
	RecursiveCircle4(hdc, cx + size, cy, size / 2);
	RecursiveCircle4(hdc, cx, cy + size, size / 2);
	RecursiveCircle4(hdc, cx - size, cy, size / 2);
}