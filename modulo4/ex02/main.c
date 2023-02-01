#include <stdio.h>
#include "asm.h"

int main() {
    int n = 10;
    long sum = sum_n2(n);
    printf("sum = %ld\n", sum);
    return 0;
}