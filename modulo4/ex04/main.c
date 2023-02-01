#include "asm.h"
#include <stdio.h>

int main(){

    int num1 = 5;
    int num2 = 6;
    int menor = 0;
    int * smaller = &menor;

    int sum = sum_smaller(num1, num2, smaller);

    printf("\nSum: %d\n", sum);
    printf("\nSmaller: %d\n", menor);
    return 0;
}