#include <stdio.h>
#include "sort2.h"

int main() {
	int n, i;
	//leitura e declaração do array
	printf("Enter the value of n: \n");
	scanf("%d", &n);
	int vec[n];
	printf("Enter the numbers: \n");
	for (i = 0; i < n; i++) {
		scanf("%d", &vec[i]);
	}
	printf("\n");
	
	//visto que passamos pointers por argumento não há motivo para haver
	// return type, as mudanças feitas na função verificam-se no "main"
	array_sort2(vec, n);
	
	//print do resultado para verificar a credibilidade da função
	printf("Sorted array:\n");
	
	for (i = 0; i < n; i++) {
		printf("%d", vec[i]);
	}
	
	printf("\n");
	
	return 0;
}
