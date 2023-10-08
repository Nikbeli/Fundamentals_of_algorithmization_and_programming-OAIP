// WindowsProject2.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "WindowsProject2.h"

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
    LoadStringW(hInstance, IDC_WINDOWSPROJECT2, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINDOWSPROJECT2));

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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINDOWSPROJECT2));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WINDOWSPROJECT2);
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
//
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
            HPEN hPen = CreatePen(PS_SOLID, 3, RGB(128, 0, 0));
            SelectObject(hdc, hPen);

            HBRUSH hBrush; //Создаём объекст-кисть
            hBrush = CreateSolidBrush(RGB(255, 128, 67)); //задаём сплошную кисть,закрашенную цветом RGB
            SelectObject(hdc, hBrush);

            Rectangle(hdc, 50, 200, 300, 250); //Автомобиль

            MoveToEx(hdc, 100, 200, NULL);
            LineTo(hdc, 150, 150);
            LineTo(hdc, 250, 150);
            LineTo(hdc, 300, 200);

            hPen = CreatePen(PS_SOLID, 3, RGB(0, 0, 128));
            SelectObject(hdc, hPen);

            hBrush = CreateHatchBrush(HS_FDIAGONAL, RGB(255, 0, 0)); //задаём диагональную кисть, закрашенную цветом RGB
            SelectObject(hdc, hBrush);

            Ellipse(hdc, 75, 225, 125, 275);
            Ellipse(hdc, 275, 225, 225, 275);


            hBrush = CreateSolidBrush(RGB(0, 128, 67)); //задаём сплошную кисть,закрашенную цветом RGB Грузовик каркас
            SelectObject(hdc, hBrush);

            Rectangle(hdc, 340, 200, 650, 230);
            hBrush = CreateSolidBrush(RGB(0, 128, 67)); //задаём сплошную кисть,закрашенную цветом RGB
            SelectObject(hdc, hBrush);
            Rectangle(hdc, 370, 120, 440, 200);
            hBrush = CreateSolidBrush(RGB(0, 255, 255)); //задаём сплошную кисть,закрашенную цветом RGB 
            SelectObject(hdc, hBrush);
            Rectangle(hdc, 395, 130, 425, 170);

            hBrush = CreateSolidBrush(RGB(64, 128, 128)); //задаём сплошную кисть,закрашенную цветом RGB Грузовое отделение, кузов
            SelectObject(hdc, hBrush);
            Rectangle(hdc, 440, 145, 670, 200);

            hBrush = CreateSolidBrush(RGB(64, 128, 67)); //задаём сплошную кисть,закрашенную цветом RGB 
            SelectObject(hdc, hBrush);
            Rectangle(hdc, 340, 165, 370, 200);

            MoveToEx(hdc, 400, 200, NULL);
            LineTo(hdc, 450, 200);
            LineTo(hdc, 550, 200);

            hPen = CreatePen(PS_SOLID, 5, RGB(0, 0, 128));
            SelectObject(hdc, hPen);

            hBrush = CreateHatchBrush(HS_FDIAGONAL, RGB(0, 255, 0)); //задаём диагональную кисть, закрашенную цветом RGB
            SelectObject(hdc, hBrush);

            Ellipse(hdc, 360, 225, 405, 275);
            Ellipse(hdc, 565, 225, 610, 275);

            hPen = CreatePen(PS_SOLID, 5, RGB(0, 128, 128));
            Ellipse(hdc, 425, 485, 350, 425);
            MoveToEx(hdc, 385, 455, NULL);
            LineTo(hdc, 385, 435);
            MoveToEx(hdc, 385, 455, NULL);
            LineTo(hdc, 395, 440);
            MoveToEx(hdc, 385, 425, NULL);
            LineTo(hdc, 385, 432);
            MoveToEx(hdc, 385, 480, NULL);
            LineTo(hdc, 385, 473);
            MoveToEx(hdc, 360, 455, NULL);
            LineTo(hdc, 367, 455);
            MoveToEx(hdc, 425, 455, NULL);
            LineTo(hdc, 420, 455);

            //Ellipse(hdc, 400, 525, 400, 500);
                
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
