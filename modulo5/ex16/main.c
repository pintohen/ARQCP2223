#include "asm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    group g;
    g.n_students = 5;

    unsigned short * grades = (unsigned short *) malloc(g.n_students * sizeof(unsigned short));

    grades[0] = 0x0000; // 0 tests approved
    grades[1] = 0x00FF; // 8 tests approved
    grades[2] = 0x0FFF; // 12 tests approved
    grades[3] = 0xFFFF; // 16 tests approved
    grades[4] = 0x0F0F; // 8 tests approved

    g.individual_grades = grades;

    int result = approved_semester(&g);

    printf("\nNumber of students approved: %d\n\n", result);
    free(grades);

    return 0;
}