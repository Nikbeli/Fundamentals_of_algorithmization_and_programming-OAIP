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
