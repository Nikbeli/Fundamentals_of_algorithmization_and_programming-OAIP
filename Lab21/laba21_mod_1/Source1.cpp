#include "Header.h"
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
#include <string.h>

void main() {


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	testisdigit1();

	testisupper_1();
	//testisupper_2();
	testisupper_3();

	testtoupper_1();
	testtoupper_2();

	testisspace_1();
	testisspace_2();

}