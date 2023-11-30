#include <stdio.h>​
#include <Windows.h>


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float s;
    float procent;
    int god;

    printf("summa = ");
    scanf_s("%f", &s);
    printf("procent = ");
    scanf_s("%f", &procent);

    god = 0;
    do {
            printf("%.0f RUB in %d year \n", s, god);
            s = (s * (100 + procent)) / 100;
            god++;
    } while (god < 11);
    printf("Конец\n");
}