#include <stdio.h>
#include "asm.h"

short array[] = {0x1234, 0x5678, 0x9ABC, 0xDEF0};
short * ptrvec = array;
int num = sizeof(array)/sizeof(short);

int main() {
    array_sort();
    printf("Sorted Array:\n");
    for (int i = 0; i < num; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}