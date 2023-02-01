#include "asm.h"
#include <stdio.h>

int main(){
    int a = 1;
    int b = 5;
    int c = 10;
    int d = 2;

    int result = greatest(a, b, c, d);

    printf("\nThe greatest number is %d\n", result);

    if(c==result){
        printf("The result is correct!\n");
    }
    else{
        printf("The result is incorrect!\n");
    }
    
    return 0;
}