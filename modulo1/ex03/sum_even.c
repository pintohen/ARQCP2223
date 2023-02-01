
/* Todas as posições do array serão percorridas. Se o número for divisível por 2 e com resto 0,
 * significa que esse número é par, logo, vai ser adicionado à soma (inicialmente igualada a 0).
 * Após percorrer todas as posições, a função retorna a soma de todos os números pares.
 */
 
int sum_even (int *p, int num) {
	int sum = 0;
	for (int i = 0; i < num; i++) {
		if (p[i] % 2 == 0) {
			sum = sum + p[i];
		}
	}
	return sum;
}
