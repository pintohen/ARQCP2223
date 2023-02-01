#include <stdio.h>
#include "asm.h"

int main() {
    int num = 3;
    int vec[] = {0x12345678, 0x87654321, 0x11111111, 0x22222222, 0x33333333, 0x44444444, 0x55555555, 0x66666666, 0x77777777, 0x88888888};
    int *ptr = vec;

    changes_vec(ptr, num);
    printf("array: ");
    for (ptr = vec; ptr < vec + num; ptr++) {
        printf("%x ", *ptr);
}

    printf("\n");
    return 0;

}