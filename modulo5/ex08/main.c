#include <stdio.h>
#include <stdlib.h>
#include "s2.h"

int main(){

    s2 structure;
    structure.c[0] = 'a';
    structure.c[1] = 'b';
    structure.c[2] = 'c';
    structure.w[0] = 1;
    structure.w[1] = 2;
    structure.w[2] = 3;
    structure.j = 4;

    for(int i = 0; i < 3; i++){
        printf("c[%d] %c\n", i, structure.c[i]);
    }

    for(int i = 0; i < 3; i++){
        printf("w[%d] %d\n", i, structure.w[i]);
    }

    printf("j %d\n", structure.j);


    return 0;
}