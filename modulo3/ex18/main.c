#include <stdio.h>
#include "asm.h"


short array[] = { 15, 13, 19, 15, 1, 3, 3, 7, 9, 11, 13, 15 };
short array2[sizeof(array) / sizeof(short)];
short * ptrsrc = array;
short * ptrdest = array2;
int num = sizeof(array) / sizeof(short);

int main(){
    
    int length = sort_without_reps();

    printf("Array after sorting with no reps: ");
    for (int i = 0; i < length; i++){
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}
