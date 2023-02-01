
/* Através de uma variável auxiliar que guarda o valor do primeiro vetor, é dada a troca dos dois
 * arrays. A variável auxiliar, depois de guardar o valor do primeiro vetor, é mais tarde igualada ao
 * segundo vetor. Isto faz com que o número do primeiro vetor passe para o segundo. Este procedimento
 * acontecerá ao longo de todo o tamanho dos arrays. Quando acabar o ciclo, os elementos do array
 * estarão trocados.
 */

void swap(int* vec1, int* vec2, int size) {
	int i;
	for (i = 0; i < size; i++) {
		int aux = *(vec1+i);
		*(vec1+i) = *(vec2+i);
		*(vec2+i) = aux;
	}
}
