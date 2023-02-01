#include "func.h"
#include <stdio.h>
#include <stdlib.h>


int main(){

    int ** matrix = new_matrix(3, 3);

    if(matrix == NULL){
        printf("\nError: memory allocation failed.\n");
        return 1;
    }else{
        printf("\nSuccess: memory allocation succeeded.\nMatrix ready to use.\n");
    }

    for (int i = 0; i < 3; i++)
        free(*(matrix + i));

    free(matrix);

    return 0;
}