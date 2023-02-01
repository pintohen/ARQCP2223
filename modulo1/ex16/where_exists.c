#include <stdio.h>

/*
 * Primeiramente vamos iterar a segunda string até encontrarmos um 
 * 	caracter igual, posteriormente iterando ambas strings, para 
 * 	verificar se são iguais. Caso (sejam iguais) a iteração da primeira 
 * 	string acabe, retorna o apontador do início da palavra, 
 *  senão repete o processo de tentar encontrar uma letra igual à primeira.
 * Caso deixe de se encontrar uma letra igual à primeira, a função 
 * 	retornará NULL, indicando que a primeira string não existe na segunda
 */
char* where_exists(char *str1, char *str2){

	char *p;

	int j=0, k = 0;
  
	for(int i = 0; str2[i]; i++){
		if(str2[i] == str1[j]){
			
			p = (str2 + i);
			
			for(k=i, j=0; (str2[k] != '\0') && (str1[j] != '\0') ; j++, k++){
				if(str2[k] != str1[j]){
					break;
				}
			}
			
			if(!str1[j]){
				return p;
			}
		}
	}
	return NULL;
}
