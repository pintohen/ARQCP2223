#include "asm.h"
#include <stdio.h>

char array1[] = "Olá mundo 1";
char array2[] = "Olá mundo 2";
char * ptr1 = array1;
char * ptr2 = array2;
int num = sizeof(array1) / sizeof(char);

int main(){
    
    printf("\nSentence 1: %s\n", array1);
    printf("\nSentence 2: %s\n", array2);
    
    swap();

    printf("\nSentence 1: %s\n", array1);
    printf("\nSentence 2: %s\n", array2);

    return 0;
}