#include <stdio.h>
#include "asm.h"

int A = 5, B = 3;

int main() {
	char result = isMultiple();
	printf("Result = %d\n", result);
	return 0;
}
