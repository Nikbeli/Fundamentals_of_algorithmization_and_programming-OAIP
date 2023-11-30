#include "Header.h"
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
#include <string.h>

void main() {


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	strcmptest();

	strcpytest_1();

	strlentest_1();
	strlentest_2();

	stricmptest();
}