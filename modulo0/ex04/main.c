#include <stdio.h>
#include "count.h"

int main() {
	int n, number, value, result;
	n = 5;
	int vec[n]; 
	
	value = 3;
	
	vec[0] = 1;
	vec[1] = 2;
	vec[2] = 3;
	vec[3] = 3;
	vec[4] = 3;
	result = count(vec, n, value);
	printf("\nThe number %d appears %d times\n", value, result);
	return 0;
}
