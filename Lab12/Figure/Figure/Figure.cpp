// Figure.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "Figure.h"

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
    LoadStringW(hInstance, IDC_FIGURE, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_FIGURE));

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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_FIGURE));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_FIGURE);
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
void Image0(HDC hdc, int cx, int cy) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);

    POINT p[13] = {
        cx,  cy,
        cx + 10,  cy - 10,
        cx + 10,  cy,
        cx,       cy + 10,
        cx - 10,  cy + 10,
        cx - 10,  cy,
        cx + 10,  cy - 20,
        cx + 20,  cy - 20 ,
        cx + 20,  cy,
        cx,       cy + 20,
        cx - 20,  cy + 20,
        cx - 20,  cy, 
        cx,       cy - 20,

    };
    Polyline(hdc, p, 13);
    DeleteObject(hPen);
}
void Image1(HDC hdc, int cx, int cy) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
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
    Polyline(hdc, p, 10);
    DeleteObject(hPen);
}
void Image2(HDC hdc, int cx, int cy) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
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
void Image3(HDC hdc, int cx, int cy) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
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

void Image4(HDC hdc, int cx, int cy) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);

    POINT p[10] = {
        cx,       cy,
        cx,       cy - 40,
        cx + 40,  cy - 40,
        cx + 40,  cy,
        cx + 30,  cy,
        cx + 30,  cy - 30,
        cx + 20,  cy,
        cx + 10,  cy - 30,
        cx + 10,  cy,
        cx,       cy,
    };
    Polyline(hdc, p, 10);
    DeleteObject(hPen);
}

void Image5(HDC hdc, int cx, int cy) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
    SelectObject(hdc, hPen);

    POINT p[8] = {
        cx,        cy,
        cx - 30,   cy - 40,
        cx + 100,  cy - 45,  // или 50
        cx + 125,  cy - 30,
        cx + 125,  cy + 250,
        cx + 70,   cy - 20,
        cx + 10,   cy - 10,
        cx,        cy,
    };
    Polyline(hdc, p, 8);

    POINT m[8] = {
    cx + 145,  cy - 30,
    cx + 145,  cy + 250,
    cx + 200,  cy - 20,  
    cx + 260,  cy - 10,
    cx + 270,  cy,
    cx + 310,  cy - 40,
    cx + 160,  cy - 45,
    cx + 145,  cy - 30,
    };
    Polyline(hdc, m, 8);

    POINT t[13] = {
    cx - 38,       cy - 52,
    cx,  cy - 60,
    cx + 100,  cy - 70,  
    cx + 160,  cy - 70,
    cx + 270,  cy - 60,
    cx + 323,  cy - 52,
    cx + 340,  cy - 70,
    cx + 270,  cy - 83,
    cx + 160,  cy - 93,
    cx + 100,  cy - 93,
    cx,        cy - 83, 
    cx - 54,   cy - 70,
    cx - 38,   cy - 52, 
    };
    Polyline(hdc, t, 13);
    DeleteObject(hPen);
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
            
            Image0(hdc, 100, 200);
            Image1(hdc, 100, 100);
            Image2(hdc, 300, 100);
            Image3(hdc, 300, 300);
            Image4(hdc, 200, 200);
            Image5(hdc, 500, 350);

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
