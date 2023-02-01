#include <stdio.h>
#include "asm.h"

long vector[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
long * ptrvec = vector;
long num = sizeof(vector) / sizeof(long);
long even;

int main(){
    printf("\nSum of even numbers: %ld\n", vec_sum_even()); // 2+4+6+8+10 = 30
    return 0;
}
