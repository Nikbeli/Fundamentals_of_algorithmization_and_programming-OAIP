#include "Fun.h"

//������� ��� ���������� ������q strlen, strcmp, strcpy
//���������� strlen

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


//���������� strcmp (���������������� ��������� ��� ������������ ������� ��������)

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


// ���������� strcpy (�����������)

char* strcpy(char* destination, const char* source) {
    // �������, ���� ��� ���������� �� �������� ������
    if (destination == NULL) {
        return NULL;
    }

    // ���� ���������, ������� ��������� �� ������ ������
    char* ptr = destination;

    // ��������� C-������, �� ������� ��������� ��������, � ������
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    // �������� ����������� ������� ������
    *destination = '\0';

    return ptr;
}


// ���������� strcat ����������� �����


char* strcat(char* str1, char* str2)
{
    if ((str1 == NULL) || (str2 == NULL)) throw "Invalide arguments!";
    char* pt = str1;
    while (*pt != '\0') pt++;
    while (*str2 != '\0') *pt++ = *str2++;
    *pt = '\0';
    return str1;
}