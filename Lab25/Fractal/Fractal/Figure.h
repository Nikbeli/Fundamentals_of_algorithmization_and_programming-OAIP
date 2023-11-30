#pragma once

#include "Windows.h"

void Cross(HDC hdc, int cx, int cy, int size);
void Triangle(HDC hdc, int cx, int cy, int size);
void Circle(HDC hdc, int cx, int cy, int size);

void RecursiveTriangle(HDC hdc, int cx, int cy, int size);
void RecursiveTriangle1(HDC hdc, int cx, int cy, int size);
void RecursiveTriangle2(HDC hdc, int cx, int cy, int size);

void RecursiveCircle(HDC hdc, int cx, int cy, int size);
void RecursiveCircle1(HDC hdc, int cx, int cy, int size);
void RecursiveCircle2(HDC hdc, int cx, int cy, int size);
void RecursiveCircle3(HDC hdc, int cx, int cy, int size);
void RecursiveCircle4(HDC hdc, int cx, int cy, int size);