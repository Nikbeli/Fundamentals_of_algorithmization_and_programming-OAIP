#include "Images.h"


void Image0(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);
    POINT p[4] = {
        cx,        cy + 20,
        cx + 20,   cy - 20,
        cx - 20,   cy - 20,
        cx,        cy + 20
    };
    Polyline(hdc, p, 4);
    DeleteObject(hPen);
}
void Image1(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);
    POINT p[4] = {
        cx,        cy - 20,
        cx + 20,   cy + 20,
        cx - 20,   cy + 20,
        cx,        cy - 20
    };
    Polyline(hdc, p, 4);
    DeleteObject(hPen);
}
void Image2(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[6] = {
        cx,  cy,
        cx,  cy - 40,
        cx + 20, cy - 20,
        cx + 40, cy - 40,
        cx + 40, cy,
        cx,      cy,
    };
    Polyline(hdc, p, 6);
    DeleteObject(hPen);
}
void Image3(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[10] = {
       cx,  cy,
       cx,  cy - 40,
       cx + 40, cy - 40,
       cx + 40, cy,
       cx + 10, cy,
       cx + 10, cy - 30,
       cx + 30, cy - 30,
       cx + 30, cy - 10,
       cx + 20, cy - 10,
       cx + 20, cy - 20,
    };
    Polyline(hdc, p, 8);
    DeleteObject(hPen);
}

void Image4(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[8] = {
        cx,  cy,
        cx - 10,  cy - 40,
        cx + 5,   cy - 20,
        cx + 12,  cy - 40,
        cx + 20,  cy - 20,
        cx + 35,  cy - 40,
        cx + 30,  cy,
        cx,       cy,
    };
    Polyline(hdc, p, 8);
    DeleteObject(hPen);
}

void Image5(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[6] = {
        cx,  cy,
        cx,  cy - 40,
        cx + 20, cy - 20,
        cx + 40, cy - 40,
        cx + 40, cy,
        cx,      cy,
    };
    Polyline(hdc, p, 6);
    DeleteObject(hPen);
}


void Image6(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[7] = {
        cx,  cy,
        cx,  cy - 40,
        cx + 40, cy - 40,
        cx + 20, cy - 30,
        cx + 40, cy - 20,
        cx,      cy - 20,
        cx,  cy,
    };
    Polyline(hdc, p, 7);
    DeleteObject(hPen);
}

void Image7(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[5] = {
        cx,      cy,
        cx + 20, cy - 20,
        cx + 40, cy,
        cx + 20, cy - 40,
        cx,      cy,
    };
    Polyline(hdc, p, 5);
    DeleteObject(hPen);
}