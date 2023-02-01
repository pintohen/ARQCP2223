#include <stdio.h>
#include "find_all_words.h"

int main(){

    char str[100];
	char word[100];
	char *addrs[50] = {NULL};
	
	
	printf("Frase: ");
	scanf("%[^\n]s", str);
	
	while ((getchar()) != '\n');
	
	printf("Palavra: ");
	scanf("%s", word);
    printf("\n");
	
	
    find_all_words(str, word, addrs);

	//dá a contagem de todas as vezes que a palavra se repetiu na frase
    int count = 0;
    //método para calcular a contagem
	for(int i = 0; addrs[i] != NULL; i++){
		count++;
	}
	
	printf("\nO número de vezes que a palavra foi encontrada na frase foi: %d vezes\n", count);
	printf("\nEndereços do início das palavras encontradas na frase: \n");
    //imprime todos os endereços
	for(int i = 0; addrs[i] != NULL; i++){
		printf("%s\n", addrs[i]);
	}

    return 0;
}
