#include "odd_sum.h"
#include <stdio.h>

int main(){
	int vec[] = {5,1,2,3,4,5};

	int sum = odd_sum(vec);
	
	printf("sum: %d\n", sum); 
	return 0;
}
