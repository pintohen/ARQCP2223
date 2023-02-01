#include <stdio.h>
#include "asm.h"

int length1, length2, height;

int main(){
    length1 = 3;
    length2 = 7;
    height = 4;
    // Calcular a área do trapézio (suposto ser 20)
    int area = getArea();
    printf("\nBase maior: %d\nBase menor: %d\nAltura: %d\n", length1, length2, height);
    printf("Area: %d\n", area);

    return 0;
}