#include <stdio.h>
#include "average.h"
#include "fill_array.h"
extern int array[30];

int main() {
	int value;
	double averageNumbers;
	for(int i = 0; i<30; i++){
		scanf("%d", &value);
		fill_array(value);
	}
	
	for(int i = 0; i<30; i++){
		printf("%d ", array[i]);
	}
	
	printf("\n");
	
	averageNumbers = average(array);
	
	printf("\nAverage: %.2f\n", averageNumbers);
	
	return 0;
}
