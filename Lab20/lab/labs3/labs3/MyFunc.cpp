#include "MyFunc.h"

int isDigitMy(char c) {
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}


int toUpperAll(int c) {
	int new_c = c;
	if (c >= 'a' && c <= 'z')
		new_c = 'A' + (c - 'a');
	if (c >= 'à' && c <= 'ï')
		new_c = 'A' + (c - 'a');
	if (c >= 'ð' && c <= 'ÿ')
		new_c = 'Ð' + (c - 'ð');
	if (c == '¸')
		new_c = '¨';
	return new_c;
}
