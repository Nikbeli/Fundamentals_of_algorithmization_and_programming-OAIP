#include<stdio.h>
#include<Windows.h>
#include<math.h>

void main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Ввести количество задач, которые ученик решает за 60 минут\n");
	int a;
	scanf_s("%d", &a);

	if (a > 100) {
		printf("Очень быстро\n");
	}
	else if (a <= 100 && a >= 70) {
		printf("Быстро\n");
	}
	else if (a < 70 && a > 50) {
		printf("Нормально\n");
	}
	else if (a <= 50 && a > 30) {
		printf("Медленно\n");
	}
	else {
		printf("Очень медленно\n");
	}
}