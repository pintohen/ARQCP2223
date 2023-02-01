#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main() {

    char str[80] = "Hello World!";
    char *result = new_str(str);
    printf("String: %s\n", result);

    free(result);

    return 0;
}