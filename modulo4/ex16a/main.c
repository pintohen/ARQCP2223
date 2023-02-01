#include "asm.h"
#include "stdio.h"

int main(){
    int a = 5;
    int b = 0x80000000;
    int pos = 12;

    int result = join_bits(a,b,pos);

    printf("\nResult: %d\n", result);

    return 0;
}