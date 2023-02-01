#include <stdio.h>
#include "asm.h"

int main() {
    char v1[] = "";
    char v2[] = "ad";
    char *a = v1;
    char *b = v2;
    int result = distance(a, b);
    printf("result: %d\n", result);
    return 0;
}