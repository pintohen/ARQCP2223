#include <stdio.h>
#include "swap.h"

/* O utilizador insere os elementos de ambos os arrays, que têm o mesmo tamanho. É invocada a função
 * swap que consiste na troca dos elementos entre os dois arrays. O output será os novos arrays e irá
 * ser verificado que os elementos foram trocados, ou seja, os elementos do vetor 1 agora estão no
 * vetor 2 e vice-versa.
 */

int main() {
	int size, i;
	
	printf("Type the size of the arrays: \n");
	
	scanf("%d", &size);
	int vec1[size], vec2[size];
	
	printf("\nElements for vec1:\n");
	for (i = 0; i < size; i++) {
		scanf("%d", &vec1[i]);
	}
	printf("\n");
	
	printf("\nElements for vec2:\n");
	
	for (i = 0; i < size; i++) {
		scanf("%d", &vec2[i]);
	}
	printf("\n");
	
	swap(vec1, vec2, size);
	
	printf("New vec1: ");
	printf("[");
	for (i = 0; i < size; i++) {
		if (i == size -1) {
			printf("%d]\n", *(vec1+i));
		} else {
			printf("%d ", *(vec1+i));
		}
	}
	
	printf("New vec2: ");
	
	printf("[");
	for (i = 0; i < size; i++) {
		if (i == size -1) {
			printf("%d]\n", *(vec2+i));
		} else {
			printf("%d ", *(vec2+i));
		}
	}
	
	return 0;
}
