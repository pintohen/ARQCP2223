#include <stdio.h>
#include "asm.h"

char string[] = "atleast two 7's in here7";
char * ptr1 = string;

int main(){

    int counter = seven_count();
    printf("\nThere are %d sevens in the sentence\n", counter);
    return 0;

}