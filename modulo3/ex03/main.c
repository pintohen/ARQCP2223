#include <stdio.h>
#include "asm.h"

char string1[] = "HellO World!";
char string2[sizeof(string1)];
char * ptr1 = string1;
char * ptr2 = string2;

int main(){
    str_copy_porto2();
    printf("\nString 1: %s\n", ptr1);
    printf("\nString 2: %s\n", ptr2);
    return 0;
}