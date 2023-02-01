#include <stdio.h>
#include "sortNoRep.h"

/* É pedido ao utilizador para inserir os valores para preencher o array que será utilizado.
 * A função sort_without_reps vai ser invocada e vai, a partir do array original (src), passar
 * os valores para o segundo array (dest), onde todos os valores serão organizados por ordem crescente
 * e sem repetição de números iguais. O output consiste no novo array organizado.
 */

int main() {
	int n, newN, i, k;
	printf("Value of n:\n");
	scanf("%d", &n);
	printf("\n");
	int src[n];
	int dest[n];
	
	printf("Enter the numbers: \n");
    for (i = 0; i < n; i++) {
		printf("Number: ");
        scanf("%d, ", &src[i]);
	}
	printf("\n");
	printf("Sorted array without reps: \n");
	
	newN = sort_without_reps(src, n, dest);
	printf("[");
	
	for (k = 0; k < newN; k++) {
		
		if (k == newN - 1) {
		printf("%d]\n", *(dest+k));
		
		} else {
		printf("%d, ", *(dest+k));
		}
	}
	return 0;
}
