#include <stdio.h>
#include <ctype.h>


int strlen_my(char s[]){
    char* p = s;
    while (*p++);
    return p - s - 1;
}

int strcpy_my(char* dest, char* src) {
    while (*dest++ = *src++);
    return 0;
}

int strcat_my1(char* dest1, char* src1) {
    while (*dest1) dest1++;
    while (*dest1++ = *src1++);
    return 0;
}


void main() {
    char s[10] = "Hi!";
    printf("len = %d\n", strlen_my(s));

    s[3] = ' '; s[4] = '\0';
    printf("len = %d\n", strlen_my(s));

    s[4] = 'W'; s[5] = 'o'; s[6] = 'r'; s[7] = 'l';
    s[8] = 'd'; s[9] = '\0';
    printf("len = %d\n", strlen_my(s));

    printf("\n\n\n");
    char src[] = "Button";
    char dest[10];
    printf("src = %s, dest = %s\n", src, dest);
    
    strcpy_my(dest, src);
    printf("src = %s, dest = %s\n", src, dest);

    printf("\n\n\n");
    char src1[] = "Button";
    char dest1[10] = "<>";
    printf("src1 = %s, dest1 = %s\n", src1, dest1);

    strcat_my1(dest1, src1);
    printf("src1 = %s, dest1 = %s\n", src1, dest1);
    //strcat_my1(dest1, "!");
    printf("src1 = %s, dest1 = %s\n", src1, dest1);

}