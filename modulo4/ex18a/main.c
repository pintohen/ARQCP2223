#include <stdio.h>
#include "asm.h"

int main() {
    int num = 0x12345678;
    int *ptr = &num;
    changes(ptr);
    printf("0x%X\n", *ptr);
    return 0;
}