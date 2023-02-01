#include "s1.h"
#include <stdio.h>

int main(){
    s1 example;

    fill_s1(&example, 2, 1, 4, 3);

    printf("\n\ns1: %d %d %d %d\n\n", example.c, example.i, example.d, example.j);

    return 0;
}