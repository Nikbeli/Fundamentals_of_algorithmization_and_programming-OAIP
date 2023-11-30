#include "Recurs.h"
#include "Figure.h"


void RecursiveCross(HDC hdc, int cx, int cy, int size) {
	Cross(hdc, cx, cy, size);
	if (size < 2) {
		return;
	}
	RecursiveCross(hdc, cx - size, cy, size / 2);
}


void RecursiveCross1(HDC hdc, int cx, int cy, int size) {
	Cross(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveCross1(hdc, cx, cy - size, size / 2);
}


void RecursiveCross11(HDC hdc, int cx, int cy, int size) {
	Cross(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveCross11(hdc, cx - size, cy, size / 2);
	RecursiveCross11(hdc, cx, cy - size, size / 2);
}



void RecursiveCross12(HDC hdc, int cx, int cy, int size) {
	Cross(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveCross12(hdc, cx - size, cy, size / 2);
	RecursiveCross12(hdc, cx + size, cy, size / 2);
}


void RecursiveCross13(HDC hdc, int cx, int cy, int size) {
	Cross(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveCross13(hdc, cx - size, cy, size / 2);
	RecursiveCross13(hdc, cx, cy - size, size / 2);
	RecursiveCross13(hdc, cx + size, cy, size / 2);
}



void RecursiveCross14(HDC hdc, int cx, int cy, int size) {
	Cross(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveCross14(hdc, cx - size, cy, size / 2);
	RecursiveCross14(hdc, cx, cy - size, size / 2);
	RecursiveCross14(hdc, cx + size, cy, size / 2);
	RecursiveCross14(hdc, cx, cy + size, size / 2);
}