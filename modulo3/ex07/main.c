#include "asm.h"
#include <stdio.h>

char word[] = "Hello";
char * ptr1 = word;

int main(){
    int total = decrypt();
    printf("Characters changed: %d\n", total);
    return 0;
}