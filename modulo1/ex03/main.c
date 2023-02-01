#include <stdio.h>
#include "sum_even.h"
#include "fill_array.h"

/* É pedido ao utilizador que insira o tamanho do array para depois ser preenchido no método
 * fill_array. Será invocado o método sum_even que soma todos os números pares presentes no
 * array previamente preenchido e, no final, é dado o output do resultado da soma dos pares.
 */
 
int main() {
	int value, sumEven, num;
	printf("Size:\n");
	scanf("%d", &num);
	printf("\n");
	int p[num];
	
	fill_array(p, num);
	
	sumEven = sum_even(p, num);
	printf("Sum of even numbers = %d ", sumEven);
	printf("\n");
	return 0;
}
