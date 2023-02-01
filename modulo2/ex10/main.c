#include <stdio.h>
#include "asm.h"

int op1 = 5, op2 = 2, op3 = 6;

int main() {
    long result = sum3ints();
    printf("\nsum = %ld\n", result);
    return 0;
}
