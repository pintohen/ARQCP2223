#include "asm.h"
#include <stdio.h>

short s = 0x1234;

int main(){
    printf("\nValor não alterado: %X\n", s);
    swapBytes();
    printf("\nValor alterado: %X\n", s);
    
    return 0;
}