#include <stdio.h>
#include "asm.h"

int main() {
    int n = 0XF000000F;
    int *p = &n;
    int pos = 3;
    reset_2bits(p, pos);
    printf("After change: %d\n", n);
    return 0;
}