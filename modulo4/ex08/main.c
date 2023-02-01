#include "asm.h"
#include <stdio.h>

int main(){
    int a = 5;
    int bNumber = 2;
    int * b = &bNumber;
    int c = 5;

    int result = calc(a, b, c);
    
    // supposed to print 8 since ((5*2)-2)*(5-4) = 8 * 1 = 8
    printf("\nResult: %d\n", result);

    return 0;
}