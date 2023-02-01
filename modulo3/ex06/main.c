#include "asm.h"
#include <stdio.h>

char word[] = "Hello angelina";
char * ptr1 = word;

int main(){
    // The function will add 3 as a ascii code to each character, except the a/A or space
    printf("\nNot Encrypted: %s\n", ptr1);
    encrypt();
    printf("\nEncrypted: %s\n", ptr1);
    return 0;
}