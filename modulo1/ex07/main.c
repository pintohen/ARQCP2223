#include <stdio.h>
#include "sort1.h"

/* É pedido ao utilizador que insira números para preencher o array que será utilizado. É invocada
 * a função array_sort1 que irá, através do endereço do array, organizar os dados por ordem crescente.
 * O output será o mesmo array, agora organizado.
 */
 
int main() {
	int n, i;
	printf("Enter the value of n: \n");
	scanf("%d", &n);
	int vec[n];
	printf("Enter the numbers: \n");
	for (i = 0; i < n; i++) {
		scanf("%d", &vec[i]);
	}
	printf("\n");
	
	array_sort1(vec, n);
	
	printf("Sorted array:\n");
	
	for (i = 0; i < n; i++) {
		printf("%d", vec[i]);
	}
	
	printf("\n");
	
	return 0;
}
