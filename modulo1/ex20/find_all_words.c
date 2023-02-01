#include "find_word.h"
#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>

/*
 * É iterada a string e é sempre verificada a primeira ocasião da palavra na string, caso haja ocasiõeso endereço de memória
 *  é guardado no pointer do pointer addrs e adiciona-se o tamanho da string ao apontador da string, de forma a encontrar
 *  a próxima ocasião. Caso não haja mais ocasiões a função termina a iteração da string e caso não haja nenhuma ocasião,
 *  o pointer de pointer addrs fica com os seus endereços todos a NULL.
 */

void find_all_words(char* str, char* word, char** addrs){
	
	int size = 0;
	
	for (int i = 0; word[i] != '\0'; i++) {
		size++;
	}
	
	char* result;
	
	char* str_aux = str;
	
	while(*str != '\0')
	{
		result = find_word(word, str_aux);
		
		if(str_aux != NULL)
		{
			*addrs = result;
			addrs++;
			str_aux = result + size;
			str = result + size;
		}
		else
		{
			str++;
		}
	}
}
#endif
