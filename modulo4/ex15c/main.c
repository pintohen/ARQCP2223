#include "asm.h"
#include <stdio.h>

int main(){
    int number = 0;
    int left = 1;
    int right = 1;

    int inverted = activate_invert_bits(number, left, right); 
    
    printf("\nInverted Number: %d\n", inverted);

    return 0;
}

