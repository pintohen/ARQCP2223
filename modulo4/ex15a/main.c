#include "asm.h"
#include <stdio.h>

int main(){
    int number = 0;
    int left = 1;
    int right = 1;

    
    unsigned int result = activate_bits(number, left, right);

    printf("\nNumber: %d\n", result);

    return 0;
}

