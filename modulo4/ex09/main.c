#include <stdio.h>
#include "asm.h"

void print_result(char op, int o1, int o2, int res) {
    printf("%d %c %d = %d\n", o1, op, o2, res); 
}

int main() {
    int a = 3;
    int b = 5;
    int res = calculate(a,b);
    printf("Result: %d\n", res);
    return 0;
}
