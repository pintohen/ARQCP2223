#include <stdio.h>
#include "asm.h"

char a[] = "abd",  b[] = "abd";
int main(void){

    int value = test_equal(a, b);

    printf("\nValue is %d\n", value);

    if(value == 0) {
        printf("The strings are not equal\n");
    } else {
        printf("The strings are equal\n");
    }
    return 0;
}