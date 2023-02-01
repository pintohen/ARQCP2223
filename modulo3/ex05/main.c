#include "asm.h"
#include "asm2.h"
#include <stdio.h>

long array[] = { -1, -1, -1};
long * ptrvec = array;
short num = 3;

int main(){
    //print the array average in a long format
    // should be 5
    long sum = vec_sum();
    printf("\nThe sum of the elements is %ld\n", sum);
    long result = vec_avg();
    printf("\nThe average of the vector is %ld\n", result);
    return 0;
}
