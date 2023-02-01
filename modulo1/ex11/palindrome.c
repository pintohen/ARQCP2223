#include <string.h>
#ifndef STDIO_H
#define STDIO_H

/* Caso a string esteja vazia, é automaticamente retornado o valor 0. Caso o tamanho da string seja 1,
 * é retornado 1, já que todas as strings com o tamanho igual a 1 são automaticamente palíndromas.
 * A função começa por verificar o primeiro e o último elemento da string, avançando uma posição caso
 * o caracter a ser analisado seja um espaço, um ponto final ou uma vírgula. Se os elementos analisados
 * forem diferentes, a função retorna 0. A iteração acontece até ao meio da string (uma vez que são 
 * comparados elementos dois a dois, a iteração apenas acontece até metade do tamanho total da string).
 * Caso todos os elementos sejam iguais dois a dois, a função retorna 1.
 */

int palindrome (char *str) {
	int size, i = 0;
	size = strlen(str) - 1;
	
	
	if (str[0] == '\0') {
		return 0;
	}
	
	if (strlen(str) == 1) {
		return 1;
	}
	
	while (size > i) {
		if(*(str + i) == ',' || *(str + i) == ' ' || *(str + i) == '.') {
			i++;
			
		} else if (*(str + size) == ',' || *(str + size) == ' ' || *(str + size) == '.') {
			size--;
			
		} else if (toupper(str[i]) != toupper(str[size])) {
			return 0;
			
		} else {
			i++;
			size--;	
		}
		return 1;
	}
}
#endif
