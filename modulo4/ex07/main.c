#include "asm.h"
#include <stdio.h>

int main(){

    char array[] = { 1, 2, 3, 4, 5 };
    char * vec = array;
    int n = 5;
    
    int result = count_odd(vec, n);

    printf("\nThe number of odd numbers is: %d\n", result);

    return 0;
}