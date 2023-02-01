#include <stdio.h>
#include "asm.h"

int array[] = { 20, 300, 500, 2, 7, 1000, 550, 700, 60, 12, 5, 20, 878, 1, 4 };
int * ptrvec = array;
int num = sizeof(array)/sizeof(int);

int main() {
    
    int total = vec_greater10();
    printf("Total: %d\n", total);

    return 0;
}