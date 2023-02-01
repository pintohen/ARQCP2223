#include <stdio.h>
#include "average_array.h"

int main(){
	int n = 3;
	
	
	int array[n];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;

	int result;
	result = average_array(array, n);
	printf("\nResult: %d\n", result);
	return 0;
}
