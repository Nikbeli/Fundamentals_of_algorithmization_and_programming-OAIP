#define _CRT_SECURE_NO_WARNINGS
#include <string.h>​
#include <stdio.h>

void main() {
	char s[10] = "Hi!";
	printf("len = %d\n", strlen(s));
	s[3] = ' '; s[4] = '\0';
	printf("len = %d\n", strlen(s));
	s[4] = 'W'; s[5] = 'o'; s[6] = 'r'; s[7] = 'l';
	s[8] = 'd'; s[9] = '\0';
	printf("len = %d\n", strlen(s));


	//Сравнение строк – НЕ ДЕЛАЙТЕ ТАК НИКОГДА!!!
	printf("\n\n");
	char s1[] = "Button";
	char s2[] = "We";
	char s3[] = "Apple !!";
	char* min = s1; char* max = s1;
	if (s2 > max) max = s2;
	if (s3 > max) max = s3;
	printf("max = %s\n", max);
	if (s2 < min) min = s2;
	if (s3 < min) min = s3;
	printf("min = %s\n", min);

	printf("\n\n");
	//Cравнение строк через strcmp​
	char r1[] = "Button";
	char r2[] = "We";
	char r3[] = "Apple !!";
	char* min1 = r1; char* max1 = r1;
	if (strcmp(r2, max1) > 0) max1 = r2;
	if (strcmp(r2, max1) > 0) max1 = r3;
	printf("max = %s\n", max1);
	if (strcmp(r2, min1) < 0) min1 = r2;
	if (strcmp(r3, min1) < 0) min1 = r3;
	printf("min = %s\n", min1);

	printf("\n\n");
	//Копирование строк
	char src[] = "Button";
	char dest[10];           //НЕИНИЦИАЛИЗИРОВАННАЯ ПЕРЕМЕННАЯ
	printf("src = %s, dest = %s\n", src, dest);

	//Копирование ф-ия strcpy
	strcpy(dest, src);
	printf("src = %s, dest = %s\n", src, dest);


	//Конкатенация строк
	printf("\n\n");
	char src1[] = "Button";
	char dest1[10] = "<>";
	printf("src1 = %s, dest1 = %s\n", src1, dest1);
	strcat(dest1, src1);
	printf("src1 = %s, dest1 = %s\n", src1, dest1);
	strcat(dest1, "!");
	printf("src1 = %s, dest1 = %s\n", src1, dest1);

	
	//Указатели​
	printf("\n\n");
	int k;    // переменная k (целый тип)​
	int* pk;  // указатель на int​
	k = 10;   // переменная k = 10​
	pk = &k;  // указатель pk указывает на переменную k ​
	// *pk – обращение через указатель к переменной​
	printf("%d %d\n", k, *pk);
	*pk = 100;
	printf("%d %d\n", k, *pk);


	//Связь массивов и указателей​
	printf("\n\n");
	int a[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };

	int* p0 = &a[0];
	int* p1 = &a[1];
	int* p7 = &a[7];

	int* p00 = a;
	int* p01 = a + 1;
	int* p07 = a + 7;

	* p0 = 100;
	* p01 = 200;
	
	
	
	//Массив ar1 
	printf("\n\n");
	int ar[5] = { 10, 20, 30, 40, 50 };

	int i;    //вывод этого массива
	
	for (i = 0; i < 5; i++)
		printf("%d ", ar[i]);
	printf("\n");

	int* p;  //*Вывод массива при помощи указателей​
	p = ar;
	for (i = 0; i < 5; i++)
		printf("%d ", *(p + i));
	printf("\n");


	//Вывод массива при помощи указателей (v 2)​
	p1 = ar;
	for (i = 0; i < 5; i++)
		printf("%d ", *(p1++));
	printf("\n");


	p1 = ar;  //Вывод массива при помощи указателей (v 3)​
	while (p1 - ar < 5)
		printf("%d ", *(p1++));
	printf("\n");


	printf("!!!!\n");
	p1 = ar + 4;
	while (p1 >= ar)
		printf("%d ", *(p1--));
	printf("\n");
	


	printf("\n");
	for (i = 0; i < 5; i++)
		printf("%d ", i[ar]);
	printf("\n");


	//Операции с указателями

	int b[8] = { 10, 20, 30, 40, 50, 60, 70, 80 };

	int* c1 = &b[1];
	int* c2 = &b[7];
	
	int* c3 = c1 + 2;   //1: К указателю добавляем целое число​
	int* c4 = c2 - 3;   //2: Из указателя вычитаем целое число​
	int  d = c2 - c1;   //3: Из одного указателя вычитаем другой​
	
	printf("%d %d %d %d %d", *c1, *c2, *c3, *c4, d);

	printf("\n\n\n");
}