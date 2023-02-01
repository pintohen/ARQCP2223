#include "func2.h"

int **add_matrixes(int **a, int **b, int y, int k) {
    int **result = new_matrix(y, k);

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < k; j++) {
            *(*(result + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
        }
    }
    return result;
}