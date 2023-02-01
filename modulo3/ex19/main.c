#include <stdio.h>
#include "asm.h"

char grades[] = {1, 3, 5, 9, 10, 2, 1};
char * ptrgrades = grades;
int num = sizeof(grades)/sizeof(char);
int freq[21] = {0};
int * ptrfreq = freq;

int main() {

    frequencies();

    printf("Frequencies Of Each Grade:\n");
    for (int i = 0; i < 21; i++) {
        printf("%d ", freq[i]);
    }
    printf("\n");
    return 0;
}