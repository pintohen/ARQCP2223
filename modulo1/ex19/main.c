#include <stdio.h>
#include "find.h"

/* É pedido ao utilizador que insira uma frase e a palavra que ele pretende encontrar. É invocada a
 * função find_word que irá retornar o endereço foi encontrada ou NULL, caso essa palavra não exista em
 * toda a frase escolhida. O output imprime o endereço da palavra caso seja encontrada ou uma mensagem
 * que indica que a palavra não existe.
 */
 
int main() {
	char sentence[1000];
	char word[100];
	char* address;
	
	printf("Write a sentence: \n");
	scanf("\n%[^\n]s", sentence);
	
	printf("Write a word: \n");
	scanf("%s", word);
	
	address = find_word(word, sentence);
	
	if(address != NULL){
		printf("\nAddress: %x\n", &address);
	}else{
		printf("\nNot found.\n");
	}

	return 0;
}
