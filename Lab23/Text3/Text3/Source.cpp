#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define MAXLEN 100
char s[MAXLEN]="2";


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("������� ������\n");
	printf("���� 23\n"); 
	
	FILE* fin2 = fopen("C:\\Users\\������\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\text3.txt", "rt");
	if (fin2 == NULL) {
		printf("������� ���� �� ������");
		return;
	}

	// �������� ����
	FILE* fout2;
	fout2 = fopen("C:\\Users\\������\\source\\repos\\Program create\\ULSTU\\Lab23\\txt\\out3.txt", "wt");
	if (fout2 == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}



	//���� �� ����� ������
	while (!feof(fin2)) {
		// ��������� ������
		if (fgets(s, MAXLEN - 1, fin2) != NULL) {
			int count = 0;
			for (int i = 0; ; i++) {
				if (isalpha((unsigned char)s[i])) {
					count += 1;

				}
				if (count > 0 && s[i] == '\0') {
					s[i + 1] = '\0';
					//s[i] = s[i - 1];      ����� ���� �� ������!!!
					s[i - 1] = '#';
					count = 0;
					break;
				}
			}


			// ��������� ������ � �������� ����
			fprintf(fout2, "%s\n", s);
			printf("%s\n", s);
		}
	}
	// ������� �����
	fclose(fin2);
	fclose(fout2);

	printf("\n\n"); 
}