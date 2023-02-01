#include <stdio.h>
#include "asm.h"

short array[] = {0x1234, 0x5678, 0x9ABC, 0xDEF0};
unsigned short num = sizeof(array)/sizeof(short);
short *ptrvec = array;

int main() {
    keep_positives();
    for (int i = 0; i < num; i++)
        printf("0x%04X ", array[i]);

    printf("\n");
    return 0;
}