#include <stdlib.h>
#include <time.h>
#ifndef STDIO_H
#define STDIO_H

/* A função gera um vetor com números de 0 a 20. O limite consiste no número de elementos que podem
 * ser considerados - como varia de 0 a 20, o limite é 21. A função srand é um gerador de números.
 */

void populate (int *vec, int num, int limit) {
	int i;
	
	srand(time(NULL));
	
	for (i = 0; i < num; i++) {
		*(vec+i) = rand() % limit;
	}
}
#endif
