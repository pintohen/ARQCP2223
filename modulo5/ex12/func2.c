#include <stdlib.h>

int **new_matrix(int lines, int columns)
{
    int **matrix = (int **)malloc(lines * sizeof(int *));
    if (matrix == NULL)
    {
        return NULL;
    }
    for (int i = 0; i < lines; i++)
    {
        matrix[i] = (int *)malloc(columns * sizeof(int));
        if (matrix[i] == NULL)
        {
            return NULL;
        }
    }
    return matrix;
}