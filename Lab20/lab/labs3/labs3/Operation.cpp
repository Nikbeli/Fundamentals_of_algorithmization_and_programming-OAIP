/* // ��������� ����� ���������� ��������
	printf("1�� ����������\n\n");
	char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
	int result;


	// ��������� 1�� � 2�� �����
	result = strcmp(str1, str2);
	printf("strcmp(str1, str2) = %d\n", result);


	// ��������� 1�� � 3�� �����
	result = strcmp(str1, str3);
	printf("strcmp(str1, str3) = %d\n", result);
	//��������� �������� ����� �� ����������


	printf("\n\n");


	// ��������� ����� ���������� ��������
	printf("2�� ����������\n\n");
	char leftStr[] = "g f g";
	char rightStr[] = "g f g";

	// ���������� �-��� strcmp()
	int res = strcmp(leftStr, rightStr);

	if (res == 0)
		printf("������ �����");
	else
		printf("������ �������");

	printf("\n��������, ������������ strcmp(), �����:  %d", res);


	printf("\n\n");


	// ������������ ������ ���������� ��������
	printf("3�� ����������\n\n");
	char strl1[1024] = "12345";
	char strl2[1024] = "12305";

	// ���������� ��� ������
	if (strcmp(strl1, strl2) == 0)
		puts("������ ���������");
	else
		puts("������ ����������");*/




		/*

			 char* strz = (char*)calloc(100, 1); //����� ������ ������ ��� ���� ������

			strcat(strz, "Techie ");
			strcat(strz, "Delight ");
			strcat(strz, "� ");
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

			printf("����������� ������ = %s", strcat(destination1, source1));*/


			/* // ������ �������� ������
			char src[1024] = "������ ������\0������ ������";

			// ������ �������� ������
			char dst[1024] = "";

			// �������� ������ �� ������� src � ������ dst. �������� ��������,
			//��� ����������� ������ ������ ������� ������\0�.
			strcpy(dst, src);

			// ����� ������� src �� �������
			printf("src: %s %s\n", src, &src[14]);

			// ����� ������� dst �� �������
			printf("dst: % s % s\n", dst, &dst[14]);

			// ����������� �����
			char dest[30] = "Hello";
			char src[] = "World";

			strcat(dest, src);
			printf("����������� ������ dest = %s\n", dest);*/