#include <stdio.h>
#include "asm.h"

int op1 = 5, op2 = 5;

int main() {
    long result = sum_v3();
    printf("\nsum v3 = %ld\n", result);
    return 0;
}