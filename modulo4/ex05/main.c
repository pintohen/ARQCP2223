#include <stdio.h>
#include "asm.h"

int main() {
    int v = 3;
    int *v1 = &v;
    int v2 = 3;
    int square = inc_and_square(v1, v2);
    printf("v1 = %d, v2 = %d, square = %d\n", *v1, v2, square);
    return 0;
}