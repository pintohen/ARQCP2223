#include <stdio.h>
#include "asm.h"

int x = -3;

int main() {
    int result = cube(x);
    printf("The cube of %d is %d\n", x, result);
    return 0;
}