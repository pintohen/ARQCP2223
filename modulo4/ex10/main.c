#include <stdio.h>
#include "asm.h"

int main() {
    short p = 0x1234;
    short *p1 = &p;
    char val = 0x56;

    int result = incr(p1, val);
    printf("result: %d\n", result);
    return 0;
}