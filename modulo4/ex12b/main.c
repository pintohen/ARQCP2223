#include "func.h"
#include <stdio.h>

int main(){
    int x = 10; // in binary 10 = 1010

    int result = count_bits_one(x);

    //should print 2
    printf("\nThe number of bits set to 1 in %d is %d\n", x, result);

    return 0;
}