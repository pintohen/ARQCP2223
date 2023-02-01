#include <stdio.h>
#include "asm.h"

int array[] = {1, 2, 1, 4, 5, 3, 7, 4, 9, 10};
int * ptrvec = array;
int num = sizeof(array)/sizeof(int);

int main(){

    printf("\nNumber of occurrences: %d\n", count_max());

    return 0;
}