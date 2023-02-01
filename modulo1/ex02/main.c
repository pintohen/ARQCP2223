#include <stdio.h>
#include "copy_vec.h"

int main(){
	//declaração dos vetores
	int vec1[] = {1,2,3,4,5};
	//tamanho vai ser igual ao número de bytes do primeiro vetor
	// a dividir pelo número de bytes da estrutura de dados "int"
	int length = sizeof(vec1)/sizeof(vec1[0]);
	int  vec2[length];
	
	copy_vec(vec1, vec2, length);
	
	
	//iterar e imprimir os valores dos dois vetores para averiguar as
	// mudanças feitas.
	printf("array 1: ");
	for(int i = 0; i < length ; i++){
		printf("%d ", vec1[i]);
	}
	printf("\n-------------------------------------\n");
	printf("array 2: ");
	for(int i = 0; i < length ; i++){
		printf("%d ", vec2[i]);
	}
	printf("\n");
	
}
