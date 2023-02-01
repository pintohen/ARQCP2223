#ifndef STDIO_H
#define STDIO_H

/* Igual ao exercício 7, o método consiste na ordenação do array por ordem crescente. A função começa
 * por pegar na primeira posição do array e comparar com as demais. Caso o número seja menor do que o
 * número presente na 1ª posição, os elementos trocam e o elemento menor passa a estar no início. Ao
 * repetir por todas as posições, no final o array estará organizado por ordem crescente.
 */

void array_sort(int *src, int n) {
	int sort;
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (k = i+1; k < n; k++) {
			if (src[i] > src[k]) {
				sort = src[i];
				src[i] = src[k];
				src[k] = sort;	
				
			}
		}
	}
}

/* Este método é usado para analisar se um número já existe no array. Caso exista, é devolvido 0 e, se
 * não existir, o método retorna 1.
 */

int verifyIfNumberExists (int *dest, int num, int n) {
		int i;
		for (i = 0; i < n; i++) {
		if (dest[i] == num) {
			return 0;
		}
	}
	return 1;
}

/* É percorrido o array inicial (src) e, a cada iteração, é invocado o método verifyIfNumberExists
 * para verificar se esse número já está presente no segundo array (dest), evitando assim a repetição
 * de elementos. Caso o número não exista, é colocado lá esse elemento. Após ser percorrido todo o array
 * e colocado no array novo todos os números sem repetição, é invocado o método array_sort para
 * organizar o novo array por ordem crescente. O método retorna o tamanho do novo array.
 */
 
int sort_without_reps (int *src, int n, int *dest) {
	int i, new = 0;

    for (i = 0; i < n; i++) {
		if (verifyIfNumberExists(dest, src[i], n) == 1) {
		dest[new] = src[i];
		new++;
		}
    
	}
	array_sort(dest, new);
    return new;
}
#endif
