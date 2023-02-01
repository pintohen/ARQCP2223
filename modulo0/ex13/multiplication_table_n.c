#include <stdio.h>
#include "line.h"

void multiplication_table_n(int n){
	printf("\n---------------------------------------\n");
	printf("\nMultiplication table of %d\n", n);
	for(int i = 1; i < 11; i++) line(n, i);
	printf("\n---------------------------------------\n");
}
