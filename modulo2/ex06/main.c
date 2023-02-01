#include <stdio.h>
#include "asm.h"

char byte1 = 0xae, byte2 = 0x56;

int main() {

    short result = concatBytes();

    printf("\nresult - %hu\n", result);

    return 0;
}

