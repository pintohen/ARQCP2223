#include <stdio.h>
#include "asm.h"

long num = 0;

int main() {
    int result = steps();
    printf("Result: %d\n", result);
    return 0;
}