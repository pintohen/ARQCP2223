#include "asm.h"
#include "func.h"
#include <stdio.h>

int main(){
    int a=1, b=0xF0000000, pos=12;

    int result = mixed_sum(a, b, pos);

    printf("\nmixed_sum(%d, %d, %d) = %d\n", a, b, pos, result);

    return 0;
}