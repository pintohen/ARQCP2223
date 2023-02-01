#include <stddef.h>
#include <stdio.h>
#ifndef STDIO_H
#define STDIO_H

/* É percorrida toda a frase e analisado caracter a caracter. Caso o caracter da frase seja igual ao
 * caracter da palavra (seja maiúsculo ou minúsculo, que esta verificado através do -32 e do +32,
 * respetivamente), a função, através de variáveis auxiliares, guarda a posição inicial onde a procura
 * levou a uma igualdade, ou seja, guarda a posição inicial de ambas as strings quando encontraram
 * caracteres iguais. Após isso, o caracter seguinte é analisado. Caso toda a palavra pretendida seja
 * percorrida e encontrada na frase, é retornada a posição onde ela se encontra. Caso isso não aconteça
 * volta à posição de partida e continua a percorrer a frase até encontrar o primeiro caracter da
 * palavra novamente e voltar a repetir o mesmo processo. Se a palavra nunca for encontrada em toda a
 * frase, é retornado NULL.
 */
 
char* find_word (char* word, char* initial_addr) {
	
	char * found;
	
	while (*initial_addr != '\0') {
	
		if (*initial_addr == *word || *initial_addr == *(word-32) || *initial_addr == *(word+32)) {
			
			found = initial_addr;
			char* addr_aux = initial_addr;
			char* word_aux = word;
			
			while ((*word_aux == *addr_aux) || (*word_aux == *(addr_aux+32)) || (*word_aux == *(addr_aux -32))) {
				
				word_aux++;
				addr_aux++;	
				
				
				if(*word_aux == '\0'){
					return found;
				}		
				
			}
			
		}
		
		initial_addr++;
	}
	return NULL;
}
#endif
