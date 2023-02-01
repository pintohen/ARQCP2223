#include "asm.h"
#include <stdio.h>

char D = 5, C = 2;
short B = 2;
int A = 20;

int main(){
    long result = sum_and_subtract();
    //expected to be 19 since 2 + 20 - 5 + 2 = 19
    printf("\nResult: %ld\n", result);
    
    return 0;
}