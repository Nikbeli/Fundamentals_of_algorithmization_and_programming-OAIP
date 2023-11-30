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

              
            int x1 = 250, y1 = 50;

            // Первый рисунок
            int x2 = 250, y2 = 150;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 -= 15; // перемещаем точку вправо на 25 пикселей
                y1 += 15;
            } while (x1 >= 100);

            //1ый рисунок
            x1 = 250, y1 = 250;
            x2 = 250; y2 = 150;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 += 15; // перемещаем точку вправо на 15
                y1 -= 15;
            } while (x1 <= 400);

            //2ой рисунок
            x1 = 500, y1 = 50;
            x2 = 500; y2 = 150;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 += 5; // перемещаем точку вправо 
                //y1 -= 15;
            } while (x1 <= 650);
            //2ой рисунок
            x1 = 500, y1 = 250;
            x2 = 500; y2 = 150;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 -= 5; // перемещаем точку влево
                //y1 -= 15;
            } while (x1 >= 400);

            //Третий рисунок
            x1 = 700, y1 = 250;
            x2 = 700; y2 = 150;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 += 5; // перемещаем точку вправо на 25 пикселей
                //y1 -= 15;
            } while (x1 <= 800);
            x1 = 800, y1 = 250;
            x2 = 700; y2 = 150;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                //x1 += 5; // перемещаем точку вправо 
                y1 -= 5;
            } while (y1 >= 150);
            
            //4ый рисунок

            x1 = 700, y1 = 450;
            x2 = 700; y2 = 350;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 += 7; // перемещаем точку вправо 
                
            } while (x1 <= 800);

            x1 = 700, y1 = 450;
            x2 = 800; y2 = 450;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                
                y1 -= 7;
            } while (y1 >= 350);
            
            //5ый рисунок
            x1 = 100, y1 = 550;
            x2 = 100; y2 = 500;
            do {
                MoveToEx(hdc, y1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, y1, y2);

                x1 += 15; // перемещаем точку вправо на 15
                y1 -= 15;
            } while (x1 <= 200);

            x1 = 100, y1 = 500;
            x2 = 100; y2 = 550;
            do {
                MoveToEx(hdc, y2, y2, NULL);   // Соединение двух точек
                LineTo(hdc, y1, y2);

                x1 += 15; // перемещаем точку вправо 
                y2 -= 15;
            } while (x1 <= 200);

            //6ой рисунок
            x1 = 250, y1 = 550;
            x2 = 250; y2 = 500;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 += 15; // перемещаем точку вправо на 15
                
                x2 += 15;
                y2 -= 15;
            } while (x1 <= 350);
            x1 = 250, y1 = 550;
            x2 = 250; y2 = 500;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 += 15; // перемещаем точку вправо на 15
                y1 += 15;
                x2 += 15;
                
            } while (x1 <= 350);
             
            //7ой рисунок

            x1 = 950, y1 = 550;
            x2 = 950; y2 = 500;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 -= 15; // перемещаем точку 

                x2 -= 15;
                y2 -= 15;
            } while (x1 >= 850);
            x1 = 950, y1 = 550;
            x2 = 950; y2 = 500;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 -= 15; // перемещаем точку 
                y1 += 15;
                x2 -= 15;
                
            } while (x1 >= 850);
            x1 = 970, y1 = 550;
            x2 = 970; y2 = 500;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 += 15; // перемещаем точку вправо

                x2 += 15;
                y2 -= 15;
            } while (x1 <= 1070);
            
            x1 = 970, y1 = 550;
            x2 = 970; y2 = 500;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 += 15; // перемещаем точку 
                y1 += 15;
                x2 += 15;
               
            } while (x1 <= 1070);
            // 8ой рисунок
            x1 = 1200, y1 = 300;
            x2 = 1300; y2 = 300;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 -= 15; // перемещаем точку 

                y2 += 15;
            } while (y2 <= 500);
            
           //9тый рисунок
            x1 = 1100, y1 = 150;
            x2 = 1200; y2 = 150;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                y1 -= 7;
            } while (y1 >= 70);                           
            
            x1 = 1300, y1 = 150;
            x2 = 1200; y2 = 150;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                y1 += 7;


            } while (y1 <= 220);
            
            //10тый рисунок 
            x1 = 1400, y1 = 150;
            x2 = 1500; y2 = 150;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                y1 -= 7;
            } while (y1 >= 70);
            x1 = 1400, y1 = 150;
            x2 = 1500; y2 = 150;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                y1 += 7;

            } while (y1 <= 220);
            //11тый рисунок
            x1 = 1400, y1 = 450;
            x2 = 1500; y2 = 450;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);
                x2 -= 10;
                y1 -= 10;
            } while (y1 >= 320);
            //Рисунок 12тый
            x1 = 1500, y1 = 650;
            x2 = 1400; y2 = 650;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);
                x2 -= 10;
                y1 -= 10;
            } while (y1 >= 520);
            //Рисунок 
            x1 = 400, y1 = 790;
            x2 = 300; y2 = 750;
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 -= 7;
                x2 -= 7;
                y1 += 6;
                y2 -= 5;

            } while (y1 <= 840);
            x1 = 400, y1 = 790;
            x2 = 300; y2 = 750; 
            do {
                MoveToEx(hdc, x1, y1, NULL);   // Соединение двух точек
                LineTo(hdc, x2, y2);

                x1 += 7;
                x2 += 7;
                y1 -= 9;
                y2 += 5;

            } while (y1 >= 640);
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
