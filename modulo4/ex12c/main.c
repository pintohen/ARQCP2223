#include <stdio.h>
#include "asm.h"
#include "func.s"

int main(){
    char array[] = "Hello World!";
    int num = sizeof(array);
    short * ptr = (short *)array;

    int result = vec_count_bits_one(ptr, num);

    printf("\nThe number of bits set to 0 is: %d\n", result);

    return 0;
}