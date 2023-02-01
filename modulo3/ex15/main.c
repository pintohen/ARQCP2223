#include <stdio.h>
#include "asm.h"

long array[] = {0x00000005, 0x0000000A, 0x0000000F, 0x00000014, 0x00000019};
long *ptrvec = array;
int num = sizeof(array)/sizeof(long);

int main() {
    int sum = sum_first_byte();
    printf("sum = %d\n", sum);
    return 0;
}