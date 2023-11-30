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


void IndirectRecursiveCircle(HDC hdc, int cx, int cy, int size);
void IndirectRecursiveTriangle(HDC hdc, int cx, int cy, int size);


void IndirectRecursiveCircle(HDC hdc, int cx, int cy, int size) {
	Circle(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	IndirectRecursiveTriangle(hdc, cx, cy - size, size / 2);
	IndirectRecursiveTriangle(hdc, cx + size, cy, size / 2);
	IndirectRecursiveTriangle(hdc, cx, cy + size, size / 2);
	IndirectRecursiveTriangle(hdc, cx - size, cy, size / 2);
}


void IndirectRecursiveTriangle(HDC hdc, int cx, int cy, int size) {
	Triangle(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	IndirectRecursiveCircle(hdc, cx, cy - size, size / 3);
	IndirectRecursiveCircle(hdc, cx + size, cy + size, size / 3);
	IndirectRecursiveCircle(hdc, cx - size, cy + size, size / 3);
}