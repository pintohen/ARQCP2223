#include <stdio.h>
#include "populate.h"
#include "check.h"
#include "sets.h"

#define VEC_SIZE 100

int numberSets = 0;

/* É definido um array com 100 posições que irá ser utilizado na resolução do exercício. É invocada a
 * função populate para popular o array e gerar os valores entre 0 a 20 nas 100 posições. É invocada,
 * posteriormente, a função inc_nsets que soma o número de vezes em que três elementos consecutivos
 * respeitam a condição x = y - 1 e x = z - 2. Esta verificação acontece através da função check. O
 * output consiste no número de vezes em que a condição é verificada.
 */

int main() {
	
	int vec[VEC_SIZE], i, limit = 21;
	
	populate(vec, VEC_SIZE, limit);
	
	for (i = 0; i < VEC_SIZE - 2; i++) {
		if (check(*(vec+i), *(vec+i+1), *(vec+i+2))) {
			inc_nsets();
		}
	}
	printf("[");
	for (i = 0; i < VEC_SIZE; i++) {
		if (i != VEC_SIZE - 1) {
			
		printf("%d ", *(vec+i));
		
		} else {
			
		printf("%d]\n", *(vec+i));
		}
	}
	
	printf("\nNumber of sets of three consecutive elements that satisfy the condition: %d\n", numberSets);
	
	return 0;
}
