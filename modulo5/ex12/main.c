#include "../ex11/func.h"
#include "func.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    int ** m = new_matrix(3, 3);
    int y = 3, k = 3;

    printf("\n\nMatrix:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            //random values (from 0 to 100)
            *(*(m + i) + j) = rand() % 100;
            printf("%d ", *(*(m + i) + j));
        }
        printf("\n");
    }
    int num = 3;
    printf("\nNumber to find: %d\n", num);

    find_matrix(m, y, k, num) ? printf("Found\n\n") : printf("Not found\n\n");

    for (int i = 0; i < y; i++)
        free(*(m + i));

    free(m);
    
    return 0;
}