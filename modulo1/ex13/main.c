#include <stdio.h>
#include <ctype.h>
#include "where.h"

/* Através de um array previamente criado, de modo a facilitar os testes do código, é pedido ao 
 * utilizador para inserir o caracter que pretende procurar dentro do array. É invocada a função
 * where_is que, através de um array vazio criado previamente, irá retornar o número de vezes que o
 * caracter é encontrado e as posições onde isso acontece. O output consiste no número de vezes e na 
 * posição onde o caracter estava localizado.
 */


int main() {
	int found;
	char c, str[] = {'A','.','s',',','5','@','A','=','.',' ',0};
	int arraysize = (sizeof(str)/sizeof(str[0]));
	int p[arraysize];
	
	printf("Which character do you want to look for? \n");
	scanf("%c", &c);
	
	found = where_is(str, c, p);
	
	if (found != 0) {
		printf("\nThe character was found %d times\n", found);
		printf("\nArray: \n");
		for (int i = 0; i < found; i++) {
			if (i == found - 1) {
				printf("%d\n", *(p+i));
			} else {
				printf("%d, ", *(p+i));
			}
		}
	} else {
	printf("\nThe character was never found.\n");
	}
	return 0;
}
