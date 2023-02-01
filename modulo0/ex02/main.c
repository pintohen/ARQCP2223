#include <stdio.h>
#include "sum.h"

int main(){
	int a, b, result;
	do{ 
		printf("First Number: ");
		scanf("%d", &a);
		printf("\nSecond Number: ");
		scanf("%d", &b);
		result = a+b;
		printf("\nresult: %d\n", result);
	}while(result > 9);
	printf("\nfinished!\n");
	return 0;
}
