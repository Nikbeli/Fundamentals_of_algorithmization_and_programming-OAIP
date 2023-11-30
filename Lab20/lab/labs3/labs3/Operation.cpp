/* // Сравнение строк применение операции
	printf("1ая Реализация\n\n");
	char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
	int result;


	// Сравнение 1ой и 2ой строк
	result = strcmp(str1, str2);
	printf("strcmp(str1, str2) = %d\n", result);


	// Сравнение 1ой и 3ой строк
	result = strcmp(str1, str3);
	printf("strcmp(str1, str3) = %d\n", result);
	//Результат является число не совпадений


	printf("\n\n");


	// Сравнение строк применение операции
	printf("2ая Реализация\n\n");
	char leftStr[] = "g f g";
	char rightStr[] = "g f g";

	// Используем ф-цию strcmp()
	int res = strcmp(leftStr, rightStr);

	if (res == 0)
		printf("Строки равны");
	else
		printf("Строки неравны");

	printf("\nЗначение, возвращаемое strcmp(), равно:  %d", res);


	printf("\n\n");


	// Сравниваемые строки применение операции
	printf("3ая Реализация\n\n");
	char strl1[1024] = "12345";
	char strl2[1024] = "12305";

	// Сравниваем две строки
	if (strcmp(strl1, strl2) == 0)
		puts("Строки идентичны");
	else
		puts("Строки отличаются");*/




		/*

			 char* strz = (char*)calloc(100, 1); //Через массив массив как блок памяти

			strcat(strz, "Techie ");
			strcat(strz, "Delight ");
			strcat(strz, "– ");
			strcat(strz, "Ace ");
			strcat(strz, "the ");
			strcat(strz, "Technical ");
			strcat(strz, "Interviews");

			puts(strz);



			char str1[999];
			fgets(str1, 999, stdin);
			char str2[999];
			fgets(str1, 999, stdin);

			printf("%s\n", strcpy(str2, str1));*/


			/*char destination1[100];
			fgets(destination1, 100, stdin);
			char source1[100];
			fgets(source1, 100, stdin);

			printf("Объединённая строка = %s", strcat(destination1, source1));*/


			/* // Массив источник данных
			char src[1024] = "первая строка\0вторая строка";

			// Массив приемник данных
			char dst[1024] = "";

			// Копируем строку из массива src в массив dst. Обратите внимание,
			//что скопируется только строка «первая строка\0».
			strcpy(dst, src);

			// Вывод массива src на консоль
			printf("src: %s %s\n", src, &src[14]);

			// Вывод массива dst на консоль
			printf("dst: % s % s\n", dst, &dst[14]);

			// Объединение строк
			char dest[30] = "Hello";
			char src[] = "World";

			strcat(dest, src);
			printf("Объединённая Строка dest = %s\n", dest);*/