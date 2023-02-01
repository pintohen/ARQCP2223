#ifndef STDIO_H
#define STDIO_H

void array_sort2(int *vec, int n) {
	//variável temporária usada para troca dos valores
	int sort;
	//esta é uma implementação básica do bubble sort,
	// onde se um número qualquer for menor que um dos anteriores,
	// troca as suas posições até que o vetor/lista fique ordenado/a.
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (*(vec + i) > *(vec + j)) {
				sort = *(vec + i);
				*(vec + i) = *(vec + j);
				*(vec + j) = sort;	
			}
		}
	}
}

#endif
