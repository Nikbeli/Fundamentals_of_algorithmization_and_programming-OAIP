// WindowsProject1.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "WindowsProject1.h"

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
    LoadStringW(hInstance, IDC_WINDOWSPROJECT1, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINDOWSPROJECT1));

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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINDOWSPROJECT1));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WINDOWSPROJECT1);
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

void StClausAuto(HDC hdc) {
    //Верхний треугольник 
    MoveToEx(hdc, 20, 0, NULL);
    LineTo(hdc, 30, 20);
    LineTo(hdc, 10, 20);
    LineTo(hdc, 20, 0);

    //Средний треугольник 
    MoveToEx(hdc, 20, 10, NULL);
    LineTo(hdc, 30, 40);
    LineTo(hdc, 10, 40);
    LineTo(hdc, 20, 10);
    
    //Нижний треугольник 
    MoveToEx(hdc, 20, 30, NULL);
    LineTo(hdc, 40, 80);
    LineTo(hdc, 0, 80);
    LineTo(hdc, 20, 30);
}

void Claus11(HDC hdc, int x, int y) {
    //Верхний треугольник 
    MoveToEx(hdc, 20+x, 0+y, NULL);
    LineTo(hdc, 30+x, 20+y);
    LineTo(hdc, 10+x, 20+y);
    LineTo(hdc, 20+x, 0+y);

    //Средний треугольник 
    MoveToEx(hdc, 20+x, 10+y, NULL);
    LineTo(hdc, 30+x, 40+y);
    LineTo(hdc, 10+x, 40+y);
    LineTo(hdc, 20+x, 10+y);

    //Нижний треугольник 
    MoveToEx(hdc, 20+x, 30+y, NULL);
    LineTo(hdc, 40+x, 80+y);
    LineTo(hdc, 0+x, 80+y);
    LineTo(hdc, 20+x, 30+y);
}


void Claus1__f1(HDC hdc) {
    Claus11(hdc, 700, 250);//По диагонали 
    Claus11(hdc, 750, 300);
    Claus11(hdc, 800, 350);
    Claus11(hdc, 850, 400);

}
void Clais(HDC hdc){
    Claus11(hdc, 100, 200);
    Claus11(hdc, 500, 200);
    Claus11(hdc, 500, 600);
    Claus11(hdc, 100, 600);
    Claus11(hdc, 300, 400);
}

void Clais1(HDC hdc) {
    int x = 0;
    do {
        Claus11(hdc, x, 0);
        x += 50;
    } while (x <= 500);
    /*StClausAuto(hdc);
    Claus11(hdc, 50, 0);
    Claus11(hdc, 100, 0);
    Claus11(hdc, 150, 0);
    Claus11(hdc, 200, 0);
    Claus11(hdc, 250, 0);
    Claus11(hdc, 300, 0);
    Claus11(hdc, 350, 0);
    Claus11(hdc, 400, 0);
    Claus11(hdc, 450, 0);
    Claus11(hdc, 500, 0);*/
}
void Clais2(HDC hdc) {
    int y = 0;
    do {
        Claus11(hdc, 0, y);
        y += 100;
    } while (y <= 700);
    /*Claus11(hdc, 0, 100);
    Claus11(hdc, 0, 200);
    Claus11(hdc, 0, 300);
    Claus11(hdc, 0, 400);
    Claus11(hdc, 0, 500);
    Claus11(hdc, 0, 600);
    Claus11(hdc, 0, 700);*/
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
            

            Claus1__f1(hdc);
            //логотип
            
            Clais(hdc);
            
            
            //в ряд
            Clais1(hdc);

            //в столбец
            Clais2(hdc);

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
