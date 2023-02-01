#include <stdio.h>
#include "asm.h"

int main() {
    int v = 1;
    int pos = 1;
    int *ptr = &v;
    int result = reset_bit(ptr, pos);
    printf("result: %d\n", result);
    return 0;
}