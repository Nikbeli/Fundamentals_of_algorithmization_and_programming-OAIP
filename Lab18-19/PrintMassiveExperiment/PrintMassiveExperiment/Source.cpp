#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define MAX_N 8
#define MAX_M 10

int arr[MAX_N][MAX_M] = {
	{10, 11, 12, 13},
	{20, 21,  9, 23},
	{30, 31, 32, 33}
};

int n = 3;
int m = 4;


void KeyBoard() {
	printf("\n¬вести элементы массива\n");
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
}

void print() {
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	KeyBoard();
	print();
}