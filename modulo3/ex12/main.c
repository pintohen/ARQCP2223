#include "asm.h"
#include <stdio.h>

//fill array with random values from 0 to 1000, 15 values
int array[] = { 20, 300, 500, 2, 7, 1000, 550, 700, 60, 12, 5, 20, 878, 1, 4 };
int * ptrvec = array;
int num = sizeof(array)/sizeof(int);

int main(){

    unsigned char number_of_elements = vec_zero();

    printf("\nNumber of elements that were changed is: %d\n", number_of_elements);
    
    return 0;
}