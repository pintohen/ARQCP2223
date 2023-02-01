#include <stdio.h>
#include "asm.h"

char current = 20, desired = 18; // 1 bytes cada
int result;

int main() {

	result = needed_time();
	printf("\nResult: %d\n", result);
	
	return 0;
}