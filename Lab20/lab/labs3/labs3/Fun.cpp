#include "Fun.h"

//Функция для реализации функциq strlen, strcmp, strcpy
//Реализации strlen

int my_strlen1(const char* p)
{
	const char* s = p;
	assert(p != NULL);
	assert(s != NULL);
	while (*p != '\0')
	{
		p++;
	}
	return (p - 1) - s;
}


int my_strlen2(const char* p)
{
	assert(p != NULL);
	if (*p == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen2(p + 1);
	}
}


//Реализация strcmp (Лексиграфическое сравнение или сравнивается порядок символов)

int strcmp(char* srcX, char* srcY) {
    int i = 0;
    while ((*srcX != '\0') || (*srcY != '\0'))
    {
        if (*srcX > *srcY)
            return 1;
        if (*srcX < *srcY)
            return -1; 
        srcX++;
        srcY++;
    }
    return 0;
}


// Реализация strcpy (Копирование)

char* strcpy(char* destination, const char* source) {
    // возврат, если для назначения не выделено памяти
    if (destination == NULL) {
        return NULL;
    }

    // берём указатель, который указывает на начало строки
    char* ptr = destination;

    // скопируем C-строку, на которую указывает источник, в массив
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    // включите завершающий нулевой символ
    *destination = '\0';

    return ptr;
}


// Реализация strcat Объединение строк


char* strcat(char* str1, char* str2)
{
    if ((str1 == NULL) || (str2 == NULL)) throw "Invalide arguments!";
    char* pt = str1;
    while (*pt != '\0') pt++;
    while (*str2 != '\0') *pt++ = *str2++;
    *pt = '\0';
    return str1;
}