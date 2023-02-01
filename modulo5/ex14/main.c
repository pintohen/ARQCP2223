#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include "func2.h"

int main() {
    int y = 2;
    int k = 3;
    int **a = new_matrix(y, k);
    int **b = new_matrix(y, k);

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < k; j++) {
            *(*(a + i) + j) = random() % 100;
            *(*(b + i) + j) = random() % 100;
        }
    }

    int **result = add_matrixes(a, b, y, k);

    printf("Matrix: \n");
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", *(*(result + i) + j));
        }
        printf("\n");
    }

    for (int i = 0; i < y; i++) {
        free(*(a + i));
        free(*(b + i));
        free(*(result + i));
    }

    free(a);
    free(b);
    free(result);

    return 0;
}