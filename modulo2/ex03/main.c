#include <stdio.h>
#include "asm.h"

int op1 = 5, op2 = 3;

int main(){
    int result = sum_v2();
    //deve imprimir 13 sendo que CONST vai ser 20 e (20 - 5 - 5) + 3 = 13
    printf("\nresultado = %d\n", result);
    return 0;
}