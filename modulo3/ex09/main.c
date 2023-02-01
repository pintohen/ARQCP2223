#include "asm.h"
#include <stdio.h>

short array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
short * ptrvec = array;
short x = 5;
int num = sizeof(array) / sizeof(short);

int main(){
    printf("Address: %p\n", vec_search());
    return 0;
}
