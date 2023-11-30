#include <stdio.h>​

void main1() {
	int num ;
	int del = 2;
	scanf_s("%d", &num);
	while (del < num) {
		// если num нацело делится на del​
		if (num % del == 0) {
			// если есть иные делители, кроме 1 и num - ​
	// то число num не простое!​
	printf("Number %d is not a prime\n", num);
	goto label_end;
		}
			del++;
	}
		printf("Number %d is a prime\n", num);
label_end: ;
}

void main2() {
	//Вывод 7ми чисел Фиббоначи 
	long long n, j, a1, a2, c;
	scanf_s("%lld", &n);	//n = 10;
	j = 3;
	a1 = 0;
	a2 = 1;
	printf("%lld %lld ", a1, a2);
	while(j<n) {
		if (j == 7) {
			printf("Error\n\n");
			goto label_end;
		}
		printf("%lld ", a1 + a2);
		j++;
		c = a1;
		a1 = a2;
		a2 = c + a1;
	} 
label_end:;
}

void main3() {
	int a = 1;
label_do:
	printf("%d ", a);
	a += 1;
	if (a <= 10) goto label_do;
}

void main() {
	main1();
	main2();
	main3();
}