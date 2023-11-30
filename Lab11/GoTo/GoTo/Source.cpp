#include <stdio.h>

void zadach10() {
	int t, i = 2;
	printf("Enter YOUR number:\n");
	scanf_s("%d", &t);
	printf("%d = ", t);
l1_do:
	if (t % i == 0) {
		printf("%d", i);
		t = t / i;
		if (t > 1)
			printf("*");
	}
	else
		i = i + 1;
	goto l1_do;
}

void zadach11() {
	int a = 1000;
	int b;
	//scanf_s("%d", &b);
l1_do:
	printf("%d ", a);
	a -= 5;    //a -= b;
	if (a >= 0)
		goto l1_do;
}

void main() {
	zadach11();
	printf("\n\n");
	zadach10();
}

