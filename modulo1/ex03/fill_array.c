#include <stdio.h>

/* Através do tamanho do array escolhido anteriorimente, é pedido ao utilizador que insira os valores
 * que preenchem o array para depois a função sum_even selecionar os elementos pares e fazer a sua soma.
 */

void fill_array(int *p, int num) {
	for(int i = 0; i < num; i++){
		printf("Number: ");
		scanf("%d", &p[i]);
		printf("\n");
	}
}
