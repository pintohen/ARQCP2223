#include <stdio.h>
#include "asm.h"

int num = 15;

int main() {
    char result;
    result = check_num();
    printf("Result: %d\n", result);
    return 0;
}