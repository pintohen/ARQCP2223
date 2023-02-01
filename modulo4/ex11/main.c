#include "asm.h"
#include "asm2.h"
#include <stdio.h>


int main(){

    int a = 1;
    int b = 2;
    short c = 3;
    char d = 4;
    printf("Before proc\na = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    printf("Result: %d\n", call_proc(a, b, c, d));
    
    printf("After proc\na: %d, b: %d, c: %d, d: %d\n", a, b, c, d);

    return 0;
}