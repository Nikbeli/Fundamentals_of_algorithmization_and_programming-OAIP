// Polygon3.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "Polygon3.h"

#define MAX_LOADSTRING 100

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна

// Отправить объявления функций, включенных в этот модуль кода:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Разместите код здесь.

    // Инициализация глобальных строк
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_POLYGON3, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_POLYGON3));

    MSG msg;

    // Цикл основного сообщения:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  ФУНКЦИЯ: MyRegisterClass()
//
//  ЦЕЛЬ: Регистрирует класс окна.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_POLYGON3));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_POLYGON3);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   ФУНКЦИЯ: InitInstance(HINSTANCE, int)
//
//   ЦЕЛЬ: Сохраняет маркер экземпляра и создает главное окно
//
//   КОММЕНТАРИИ:
//
//        В этой функции маркер экземпляра сохраняется в глобальной переменной, а также
//        создается и выводится главное окно программы.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Сохранить маркер экземпляра в глобальной переменной

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  ФУНКЦИЯ: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ЦЕЛЬ: Обрабатывает сообщения в главном окне.


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


void PictureV1H1(HDC hdc) {
    int x, y, i, j;
    unsigned char r, g;

    y = 50;
    i = 0;
    g = 0;
    do {
        x = 30;
        j = 0;
        r = 0;
        do {
            Image0(hdc, x, y, RGB(r, g, 0));
            x += 50;
            r += 36;
            j++;
        } while (j < 8);
        y += 70;
        g += 51;
        i++;
    } while (i < 6);
}

void PictureV2H2(HDC hdc) {
    int x, y, i, j;
    unsigned char r, g;

    y = 70;
    i = 0;
    g = 0;
    do {
        x = 420;
        j = 0;
        r = 0;
        do {
            Image4(hdc, x, y, RGB(0, g, r));
            x += 50;
            r += 36;
            j++;
        } while (j < 6);
        y += 70;
        g += 51;
        i++;
    } while (i < 6);
}

void PictureV3H3(HDC hdc) {
    int x, y, i, j;
    unsigned char r, g;

    y = 50;
    i = 0;
    g = 0;
    do {
        x = 780;
        j = 0;
        r = 0;
        do {
            Image1(hdc, x, y, RGB(0, g, r));
            x += 50;
            r += 36;
            j++;
        } while (j < 4);
        y += 70;
        g += 51;
        i++;
    } while (i < 6);
}

void PictureV4H4(HDC hdc) {
    int x, y, i, j;
    unsigned char r, g;

    y = 480;
    i = 0;
    g = 0;
    do {
        x = 10;
        j = 0;
        r = 0;
        do {
            Image2(hdc, x, y, RGB(0, g, r));
            x += 50;
            r += 36;
            j++;
        } while (j < 8);
        y += 70;
        g += 51;
        i++;
    } while (i < 6);
}

void PictureV5H5(HDC hdc) {
    int x, y, i, j;
    unsigned char r, g;

    y = 480;
    i = 0;
    g = 0;
    do {
        x = 410;
        j = 0;
        r = 0;
        do {
            Image3(hdc, x, y, RGB(0, g, r));
            x += 50;
            r += 36;
            j++;
        } while (j < 6);
        y += 70;
        g += 51;
        i++;
    } while (i < 6);
}

void PictureV6H6(HDC hdc) {
    int x, y, i, j;
    unsigned char r, g;

    y = 480;
    i = 0;
    g = 0;
    do {
        x = 770;
        j = 0;
        r = 0;
        do {
            Image4(hdc, x, y, RGB(0, g, r));
            x += 50;
            r += 36;
            j++;
        } while (j < 4);
        y += 70;
        g += 51;
        i++;
    } while (i < 6);
}

void PictureV7H7(HDC hdc) {
    int x, y, i, j;
    unsigned char r, g;

    y = 75;
    i = 0;
    g = 0;
    do {
        x = 1100;
        j = 0;
        r = 0;
        do {
            Image7(hdc, x, y, RGB(0, g, r));
            x += 50;
            r += 36;
            j++;
        } while (j < 2);
        y += 70;
        g += 51;
        i++;
    } while (i < 6);
}

void PictureV8H8(HDC hdc) {
    int x, y, i, j;
    unsigned char r, g;

    y = 485;
    i = 0;
    g = 0;
    do {
        x = 1100;
        j = 0;
        r = 0;
        do {
            Image6(hdc, x, y, RGB(0, g, r));
            x += 50;
            r += 36;
            j++;
        } while (j < 2);
        y += 70;
        g += 51;
        i++;
    } while (i < 6);
}
//  WM_COMMAND  - обработать меню приложения
//  WM_PAINT    - Отрисовка главного окна
//  WM_DESTROY  - отправить сообщение о выходе и вернуться
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Разобрать выбор в меню:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Добавьте сюда любой код прорисовки, использующий HDC...

            PictureV1H1(hdc);
            PictureV2H2(hdc);
            PictureV3H3(hdc);
            PictureV4H4(hdc);
            PictureV5H5(hdc);
            PictureV6H6(hdc);
            PictureV7H7(hdc);
            PictureV8H8(hdc);

            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Обработчик сообщений для окна "О программе".
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
