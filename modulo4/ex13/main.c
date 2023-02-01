#include <stdio.h>
#include "asm.h"

int main() {
    int num = 56;
    unsigned int nbits = 4;

    int shift_right = rotate_right(num, nbits);
    int shift_left = rotate_left(num, nbits);

    printf("0x%08x rotated right %d bits is 0x%x\n", num, nbits, shift_right);
    printf("0x%08x rotated left %d bits is 0x%x\n", num, nbits, shift_left);

    return 0;
}