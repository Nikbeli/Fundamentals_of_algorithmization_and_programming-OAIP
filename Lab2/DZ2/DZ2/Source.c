#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("ƒмитрию нужно купить канцтовары: 4 ручки, ластик, 2 карандаша, линейку.\n —колько ему потребуетс€ денег, если ручка стоит 45 рублей, ластик - 20 рублей, \n карандаш - 10 рублей, линейка - 100 рублей?");

	int r = 45;
	int l = 20;
	int k = 10;
	int lin = 100;

	int res = 4 * r + l + 2 * k + lin;
	printf("\n\n\n");
	printf("»того ƒмитрию потребуетс€ %d рублей", res);
	printf("\n\n\n");
}