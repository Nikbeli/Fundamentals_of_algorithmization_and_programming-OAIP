#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#define NUM_ELEMENTS 10

int arr[NUM_ELEMENTS];
int n = 0;

void printElements() {
	printf("< ");
	int i = 0;
	while (i < n) {
		printf("%d ", arr[i]);
		i++;
	}
	printf(">\n");
}


void keyboardInput() {
	int newN;
	printf("newN = ");
	scanf_s("%d", &newN);
	if (newN >= 1 && newN <= NUM_ELEMENTS) {
		n = newN;
		printf("������� %d ����� �����: ", n);
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &arr[i]);
		}
	}
	else {
		printf("newN ����� ������������ ��������");
	}
}


void addRand0_10() {
	if (n < NUM_ELEMENTS) {
		arr[n++] = rand() % 11;
	}
}


void deleteElement(int delIndex) {
	if (delIndex >= 0 && delIndex < n) {
		for (int i = delIndex; i < n - 1; i++) {
			arr[i] = arr[i + 1];
		}
		n--;
	}
}


void selectionSort() {
	for (int j = 0; j < n - 1; j++) {
		int min = arr[j];
		int iMin = j;
		for (int i = j + 1; i < n; i++) {
			if (arr[i] < min) {
				min = arr[i];
				iMin = i;
			}
		}
		int tmp = arr[iMin];
		arr[iMin] = arr[j];
		arr[j] = tmp;
	}
}


void oddx10() {
	int newN;
	printf("newN = ");
	scanf_s("%d", &newN);
	if (newN >= 1 && newN <= NUM_ELEMENTS) {
		n = newN;
		printf("������� %d ����� �����: ", n);
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &arr[i]);
		}
	}
	else {
		printf("newN ����� ������������ ��������");
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			arr[i] *= 10;
		}
	}
}


void oddx100() {

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] *= 100;
		}
	}
}


/*void keyboardInput1() {
	int newN;
	printf("newN = ");
	scanf_s("%d", &newN);
	if (newN >= 1 && newN <= NUM_ELEMENTS) {
		n = newN;
		printf("������� %d ����� �����: ", n);
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &arr[i]);
		}
	}
	else {
		printf("newN ����� ������������ ��������");
	}
}*/


void deleteX() {
	int newN;
	printf("newN = ");
	scanf_s("%d", &newN);
	if (newN >= 1 && newN <= NUM_ELEMENTS) {
		n = newN;
		printf("������� %d ����� �����: ", n);
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &arr[i]);
		}
	}
	else {
		printf("newN ����� ������������ ��������");
	}

	int min = arr[0];
	int i = 1;
	int imin = 0;

	printf("!!! %d  !!!", imin);
	while (i < n) {
		if (arr[i] < min) {
			//min = arr[i];
			imin = i;
		}
		i++;
	}
	printf("!!!!  %d  !!!!", imin);
	int delmin = imin;

	if (delmin >= 0 && delmin < n) {
		for ( i = delmin; i < n - 1; i++) {
			arr[i] = arr[i + 1];
		}
		n--;
	}
}


void deleteXMax() {
	int newN;
	printf("newN = ");
	scanf_s("%d", &newN);
	if (newN >= 1 && newN <= NUM_ELEMENTS) {
		n = newN;
		printf("������� %d ����� �����: ", n);
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &arr[i]);
		}
	}
	else {
		printf("newN ����� ������������ ��������");
	}

	int max = arr[0];
	int i = 1;
	int imax = 0;



	while (i < n) {
		if (arr[i] > max) {
			max = arr[i];
			imax = i;
		}
		i++;
	}

	int delmin;
	delmin = imax;

	if (delmin >= 0 && delmin < n) {
		for (i = delmin; i < n - 1; i++) {
			arr[i] = arr[i + 1];
		}
		n--;
	}
}


void addEndElementMin() {
	int newN;
	printf("newN = ");
	scanf_s("%d", &newN);
	if (newN >= 1 && newN <= NUM_ELEMENTS) {
		n = newN;
		printf("������� %d ����� �����: ", n);
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &arr[i]);
		}
	}
	else {
		printf("newN ����� ������������ ��������");
	}


	int min = arr[0];
	int i = 1;
	int imin = 0;


	while (i < n) {
		if (arr[i] < min) {
			min = arr[i];
			//imin = i;
		}
		i++;
	}

	if (n < NUM_ELEMENTS) {
		arr[n++] = min;
	}
}


void deleteElementmensh4() {
	int newN;
	printf("newN = ");
	scanf_s("%d", &newN);
	if (newN >= 1 && newN <= NUM_ELEMENTS) {
		n = newN;
		printf("������� %d ����� �����: ", n);
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &arr[i]);
		}
	}
	else {
		printf("newN ����� ������������ ��������");
	}

	//for (int i = 0; i < n; i++)
		for (int i = 0; i < n;)
		{
			if (arr[i] < 4)
			{
				for (int j = i; j < n - 1; j++)
					arr[j] = arr[j + 1];
				n--;
				//i--;
			}
			else {
				i++;
			}
		}
}

void addSortmassive() {
	int newN;
	printf("newN = ");
	scanf_s("%d", &newN);
	if (newN >= 1 && newN <= NUM_ELEMENTS) {
		n = newN;
		printf("������� %d ����� �����: ", n);
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &arr[i]);
		}
	}
	else {
		printf("newN ����� ������������ ��������");
	}

	for (int j = 0; j < n - 1; j++) {
		int min = arr[j];
		int iMin = j;
		for (int i = j + 1; i < n; i++) {
			if (arr[i] < min) {
				min = arr[i];
				iMin = i;
			}
		}
		int tmp = arr[iMin];
		arr[iMin] = arr[j];
		arr[j] = tmp;
	}

	printf("< ");
	int i = 0;
	while (i < n) {
		printf("%d ", arr[i]);
		i++;
	}
	printf(">\n");

	printf("\n������ �������:\n");
	int k;
	scanf_s("%d", &k);
	if (n < NUM_ELEMENTS) {
		arr[n++] = k;
	}

	for (int j = 0; j < n - 1; j++) {
		int min = arr[j];
		int iMin = j;
		for (int i = j + 1; i < n; i++) {
			if (arr[i] < min) {
				min = arr[i];
				iMin = i;
			}
		}
		int tmp = arr[iMin];
		arr[iMin] = arr[j];
		arr[j] = tmp;
	}
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int item = -1;
	do {
		printf("\n");
		printf("==============================\n");
		printf("�������� ������ ��� ��������:\n");
		printf("0: �������  ������\n");
		printf("1: ������ ������ � ����������\n");
		printf("2: � ����� �������� ��������� ����� (�� 0 �� 10)\n");
		printf("3: ������� �������� �������\n");
		printf("4: ������������� ������\n");
		printf("5: ��� �������� ��������� � 10 ���\n");
		printf("6: ��� ������ ��������� � 100 ���\n");
		printf("7: ������� ����������� �������\n");
		printf("8: ������� �� ������� ������������ �������\n");
		printf("9: �������� � ����� ������� ������ ������������\n");
		printf("10: ������� �� ������� ��� ��������, �������� ������� ������ (������� �������!!!) 4\n");
		printf("11: �������� � ��������������� ������ ����� �������, �������� ��������������� ���������\n");
		printf("\n");
		printf("-1: ����� �� ���������\n");
		printf("��������� �������� >>>>>> ");
		scanf_s("%d", &item);

		switch (item) {
		case 0:
			printElements();
			break;
		case 1:
			keyboardInput();
			printElements();
			break;
		case 2:
			addRand0_10();
			printElements();
			break;
		case 3:
		{
			int index;
			printf("������ ��������, ������� ����� �������: ");
			scanf_s("%d", &index);
			deleteElement(index);
		}
		break;
		case 4:
			keyboardInput();
			selectionSort();
			printElements();
			break;
		case 5:
			oddx10();
			printElements();
			break;
		case 6:
			keyboardInput();
			oddx100();
			printElements();
			break;
		case 7:
			deleteX();
			printElements();
			break;
		case 8:
			deleteXMax();
			printElements();
			break;
		case 9:
			addEndElementMin();
			printElements();
			break;
		case 10:
			deleteElementmensh4();
			printElements();
			break;
		case 11:
			addSortmassive();
			printElements();
			break;
		}
	} while (item != -1);

	return 0;
}