#include "asm.h"
#include <stdio.h>

int main(){
    char vec[] = "123456789";
    int x = 0xFFFFFFFF;
    int sum = sum_multiples_x(vec, x);
    printf("\nThe sum is %d\n", sum);
}