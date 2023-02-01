#include "asm.h"
#include <stdlib.h>

void fill_unionA(structA *sA, short int a[3], char b, long long int c, short d, char e, unionB ub){
    sA->a[0] = a[0];
    sA->a[1] = a[1];
    sA->a[2] = a[2];
    sA->b = b;
    sA->c = c;
    sA->d = d;
    sA->e = e;
    sA->ub = ub;
}

structA ** matrixCreate(int i, int j){
    structA ** matrix;
    matrix = (structA **) malloc(i * sizeof(structA *));
    for(int k = 0; k < i; k++){
        matrix[k] = (structA *) malloc(j * sizeof(structA));
    }
    return matrix;
}

void freeMatrix(structA **matrix, int i){
    for(int k = 0; k < i; k++){
        free(matrix[k]);
    }
    free(matrix);
}
