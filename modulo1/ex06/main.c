#include <stdio.h>
#include "power_ref.h"

int main(){
	int x, y;
	printf("First Number: ");
	scanf("%d", &x);
	printf("\n");
	
	printf("Second Number: ");
	scanf("%d", &y);
	printf("\n");
	
	power_ref(&x, y);
	//print para verificar a credibilidade do resultado
	printf("Value %d\n", x);
	return 0;
}
