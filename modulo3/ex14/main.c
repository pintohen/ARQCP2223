#include "asm.h"
#include "asm2.h"
#include <stdio.h>

int array[] = {1, 2, 3, 4, 5, 2, 7, 5, 9, 10};
int * ptrvec = array;
int num = sizeof(array)/sizeof(int);
int x = 2;

int main(){

    int res = vec_diff();

    printf("\nNot duplicates: %d\n", res);

    return 0;
}