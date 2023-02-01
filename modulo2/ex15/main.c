#include <stdio.h>
#include "asm.h"

int A, B, C, D;

int main(){
    A = 2;
    B = 3;
    C = 4;
    D = 2;
    
    int result = compute();

    //resultado esperado é 1 pois ((2*3)-4)/2 = 1
    printf("\nResultado: %d\n", result);

    return 0;
}