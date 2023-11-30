#include <stdio.h>
#include <ctype.h>

void main() {
	
	char s3[] = "I have therty elephants!";
	printf("s3 = %s\n", s3);
	int i = 0;
	while (s3[i] != '\0') {
		if (isalpha(s3[i])) {
			s3[i] = '#';
		}
		i++;
	}
	printf("s3 = %s\n", s3);
	
	printf("\n\n");

	char s4[] = "I have therty elephants!";
	printf("s4 = %s\n", s4);
	i = 0;
	while (s4[i] != '\0') {
		s4[i] = toupper(s4[i]);
		i++;
	}
	printf("s3 = %s\n", s4);
}