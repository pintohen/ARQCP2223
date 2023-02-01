#include <stdio.h>
#include "asm.h"

int vec[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int *ptrvec = vec;
int num = sizeof(vec)/sizeof(int);

int main(){
    int i;
    printf("\nBefore vec_add_two(): ");
    for (i = 0; i < 10; i++){
        printf("%d ", *(ptrvec+i));
    }
    printf("\n");

    vec_add_two();

    printf("\nAfter vec_add_two(): ");
    for (i = 0; i < 10; i++){
        printf("%d ", *(ptrvec+i));
    }
    printf("\n");
    
}