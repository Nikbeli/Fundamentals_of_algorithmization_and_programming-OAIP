#include "Func.h"

int strlen_my(char z[])
{
    char* p = z;
    while (*p++);
    return p - z - 1;
}