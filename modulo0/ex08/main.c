#include <stdio.h>
#include "integer_part.h"
#include "fractional_part.h"

int main() {
	
	char x[] = "123.456";
	int x_integer = integer_part(x);
	int x_decimal = fractional_part(x); 
	printf("Integer part: %d\nFractional part: %d\n", x_integer, x_decimal);
	return 0;
	
}
