#include "asm.h"
#include <stdio.h>

char string1[] = "Hello ";
char string2[] = "World!";
char string3[(sizeof(string1)/sizeof(char)) + (sizeof(string2)/sizeof(char))];
char * ptr1 = string1;
char * ptr2 = string2;
char * ptr3 = string3;

int main(){
    str_cat();
    printf("\nString concatenated: %s\n", ptr3);
    return 0;
}