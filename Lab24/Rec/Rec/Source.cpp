#define _CRT_SECURE_MO_WARNINGS
#include <stdio.h>
#include <Windows.h>



void rec1(int n) {
	printf(" %d", n);
	if (n > 1) {
		rec1(n - 1);
	}
}


void rec2(int n) {
	if (n > 1) {
		rec2(n - 1);
	}
	printf(" %d", n);
}


void rec3(int n) {
	printf(" %d", n);
	if (n > 1) {
		rec3(n - 1);
	}
	printf(" %d", n);
}


void rec11(int n) {
	printf(" %d", n);
	if (n > 1) {
		rec11(n - 2);
	}
}


void rec22(int n) {
	if (n > 1) {
		rec22(n - 2);
	}
	printf(" %d", n);
}


void rec33(int n) {	!!!!!!!!!!!!!!!
	printf(" %d", n);
	if (n > 1) {
		rec33(n - 2);
	}
	printf(" %d", n);
}


void recEGE1(int n) {
	if (n >= 1) {
		printf(" %d", n);
		recEGE1(n - 1);
		recEGE1(n - 1);
	}
}


void F1(int n) {
	if (n > 2) {
		printf("%d\n", n);
		F1(n - 3);
		F1(n - 4);
	}
}


void F2(int n) {
	printf("%d\n", n);
	if (n < 5) {
		F1(n + 1);
		F1(n + 3);
	}
}

///
void G3(int n);

void F3(int n) {
	if (n > 0)
		G3(n - 1);
}


void G3(int n) {
	printf("*");
	if (n > 1)
		F3(n - 3);
}
///


long fuct2(int n) {
	if (n == 0) {
		return 1;
	}
	long res = fuct2(n - 1) * n;
	return res;
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	rec1(3);
	printf(" rec1 FINISH\n");
	rec2(3);
	printf(" rec2 FINISH\n");
	rec3(3);
	printf(" rec3 FINISH\n");
	printf("\n\n");

	rec11(11);
	printf(" rec11 FINISH\n");
	rec22(11);
	printf(" rec22 FINISH\n");
	rec33(11);
	printf(" rec33 FINISH\n");
	printf("\n\n");

	printf("-------------------Задачи Егэ-------------\n");
	recEGE1(3);
	printf("\n\n");

	F1(10);
	printf("\n\n");

	F2(1);
	printf("\n\n");

	F3(11);
	printf("\n\n");

	printf("------------------------------------------\n\n\n");

	int n = 5;
	long f = fuct2(n);
	printf("%d! = %ld\n\n", n, f);
}