// 2.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "2.h"

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
    LoadStringW(hInstance, IDC_MY2, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_MY2));

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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_MY2));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_MY2);
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
void DrawHome(HDC hdc) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);
    //Каркас домика
    MoveToEx(hdc, 400, 460, NULL);
    LineTo(hdc, 550, 460);
    LineTo(hdc, 550, 600);
    LineTo(hdc, 400, 600);
    LineTo(hdc, 400, 460);
    MoveToEx(hdc, 670, 415, NULL);
    LineTo(hdc, 670, 530);
    LineTo(hdc, 550, 600);
    //Крыша
    MoveToEx(hdc, 370, 460, NULL);
    LineTo(hdc, 580, 460);
    LineTo(hdc, 710, 390);
    LineTo(hdc, 600, 230);
    LineTo(hdc, 480, 310);
    LineTo(hdc, 370, 460);
    MoveToEx(hdc, 580, 460, NULL);
    LineTo(hdc, 480, 310);
    MoveToEx(hdc, 400, 450, NULL);
    LineTo(hdc, 475, 340);
    LineTo(hdc, 550, 450);
    MoveToEx(hdc, 550, 450, NULL);
    LineTo(hdc, 400, 450);
    //Окна
    MoveToEx(hdc, 440, 500, NULL);
    LineTo(hdc, 510, 500);
    LineTo(hdc, 510, 560);
    LineTo(hdc, 440, 560);
    LineTo(hdc, 440, 500);
    MoveToEx(hdc, 465, 500, NULL);
    LineTo(hdc, 465, 560);
    MoveToEx(hdc, 440, 520, NULL);
    LineTo(hdc, 465, 520);
    //Труба
    MoveToEx(hdc, 500, 295, NULL);
    LineTo(hdc, 500, 240);
    LineTo(hdc, 520, 230);
    LineTo(hdc, 550, 240);
    LineTo(hdc, 530, 250);
    LineTo(hdc, 500, 240);
    MoveToEx(hdc, 530, 250, NULL);
    LineTo(hdc, 530, 275);
    MoveToEx(hdc, 550, 240, NULL);
    LineTo(hdc, 550, 265);
    //Дверь
    MoveToEx(hdc, 610, 566, NULL);
    LineTo(hdc, 610, 490);
    LineTo(hdc, 640, 470);
    LineTo(hdc, 640, 545);
    //Елка
    hPen = CreatePen(PS_SOLID, 5, RGB(0, 155, 0));
    SelectObject(hdc, hPen);
    MoveToEx(hdc, 915, 410, NULL);
    LineTo(hdc, 900, 410);
    LineTo(hdc, 900, 370);
    LineTo(hdc, 940, 370);
    LineTo(hdc, 900, 300);
    LineTo(hdc, 930, 300);
    LineTo(hdc, 900, 240);
    LineTo(hdc, 930, 240);
    LineTo(hdc, 900, 190);
    LineTo(hdc, 870, 240);
    LineTo(hdc, 900, 240);
    LineTo(hdc, 870, 300);
    LineTo(hdc, 900, 300);
    LineTo(hdc, 860, 370);
    LineTo(hdc, 900, 370);

    MoveToEx(hdc, 1150, 480, NULL);
    LineTo(hdc, 1190, 440);
    LineTo(hdc, 1250, 460);
    LineTo(hdc, 1190, 400);
    LineTo(hdc, 1250, 410);
    LineTo(hdc, 1200, 340);
    LineTo(hdc, 1260, 360);
    LineTo(hdc, 1200, 290);
    LineTo(hdc, 1165, 355);

    LineTo(hdc, 1200, 340);
    LineTo(hdc, 1160, 410);
    LineTo(hdc, 1200, 400);
    LineTo(hdc, 1150, 480);
    LineTo(hdc, 1190, 440);
    LineTo(hdc, 1140, 430);
    LineTo(hdc, 1200, 400);
    LineTo(hdc, 1140, 390);
    LineTo(hdc, 1200, 340);
    LineTo(hdc, 1155, 330);
    LineTo(hdc, 1200, 290);
    LineTo(hdc, 1240, 315);
    LineTo(hdc, 1230, 320);
    MoveToEx(hdc, 1200, 340, NULL);
    LineTo(hdc, 1235, 370);
    LineTo(hdc, 1225, 378);
    MoveToEx(hdc, 1200, 400, NULL);
    LineTo(hdc, 1240, 420);
    LineTo(hdc, 1217, 425);
    //Дерево
    hPen = CreatePen(PS_SOLID, 5, RGB(119, 67, 66));
    SelectObject(hdc, hPen);
    MoveToEx(hdc, 200, 370, NULL);
    LineTo(hdc, 200, 200);
    LineTo(hdc, 190, 190);
    hPen = CreatePen(PS_SOLID, 5, RGB(0, 155, 0));
    SelectObject(hdc, hPen);
    MoveToEx(hdc, 190, 190, NULL);
    LineTo(hdc, 160, 170);
    MoveToEx(hdc, 200, 340, NULL);
    LineTo(hdc, 190, 300);
    LineTo(hdc, 170, 260);
    MoveToEx(hdc, 200, 300, NULL);
    LineTo(hdc, 250, 260);
    MoveToEx(hdc, 200, 250, NULL);
    LineTo(hdc, 180, 210);
    MoveToEx(hdc, 200, 200, NULL);
    LineTo(hdc, 220, 180);
    LineTo(hdc, 270, 170);
    MoveToEx(hdc, 210, 190, NULL);
    LineTo(hdc, 240, 220);
    MoveToEx(hdc, 220, 286, NULL);
    LineTo(hdc, 250, 290);
    }
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

            //рисование из ЛБ 4
            DrawHome(hdc);

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
