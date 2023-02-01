#ifndef STDIO_H
#define STDIO_H

/* Todas as posições do array vão ser percorridas e analisadas. A função começa por comparar o elemento
 * da primeira posição com todos os outros. Se o elemento na primeira posição for maior do que o outro
 * que está a ser comparado, há uma troca de elementos (o outro elemento passa a ficar na 1ª posição).
 * Após todo o array ser percorrido, este está ordenado de forma crescente.
 */

void array_sort1(int *vec, int n) {
	int sort;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (vec[i] > vec[j]) {
				sort = vec[i];
				vec[i] = vec[j];
				vec[j] = sort;
				
			}
		}
	}
}

#endif
