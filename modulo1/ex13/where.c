#include <string.h>

/* Caso o array inicial esteja vazio, é automaticamente retornado o valor 0, o que significa que não
 * é possível encontrar o caracter pretendido. O ciclo for percorre o array inicial e verifica, em cada
 * posição, se o caracter dentro desse array é igual ao caracter pretendido previamente passado como 
 * argumento. Se for igual, aumenta o contador do número de vezes e guarda a posição onde foi
 * encontrado. A função retorna o número de vezes que o caracter foi encontrado.
 */

int where_is (char *str, char c, int *p) {
	int counter, size;
	counter = 0;
	size = strlen(str);
	
	if (str[0] == '\0') {
		return 0;
	}
	
	for (int i = 0; *(str + i) != '\0' ; i++) {
		if (*(str+i) == c) {
			*(p+counter) = i;
			counter++;
		}
	}
	return counter;
}
