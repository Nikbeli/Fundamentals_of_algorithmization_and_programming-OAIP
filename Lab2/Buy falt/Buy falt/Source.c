#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m; // Площадь желаемой кварти
	int rub_m; // Сколько рублей стоит 1 квадратный метр
	float cash; // Зарплата
	printf("Введите площадь квартиры m*m=");
	scanf("%f", &m);

	printf("Введите стоимость 1 квадратного метра квартиры RUB=");
	scanf("%d", &rub_m);

	printf("Введите размер зарплаты=");
	scanf("%f", &cash);

	float price = m * rub_m; // Вычисление стоимости квартиры
	printf("Квартира площадью %f m*m по цене %d RUB/(m*m) стоит <%10.1f> RUB\n", m, rub_m, price);
	int t = price / (cash / 2); // Время
	printf("При зарплате %f RUB на эту квартиру нужно копить %d месяцев", cash, t);
}
