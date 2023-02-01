#include <stdlib.h>
#include <stdio.h>
#include "asm.h"
#include <stdlib.h>

int main(){
    unionB uB;
    uB.b = 'a';

    structA ** matrix = matrixCreate(4, 3);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            short int a[3] = {i, j, i+j};
            fill_unionA(&matrix[i][j], a, 'a', 123456789, 123, 'b', uB);
        }
    }

    char bFound = return_unionB_b(matrix, 1, 1);

    printf("\nbFound = %c\n", bFound);

    freeMatrix(matrix, 4);

    return 0;
}