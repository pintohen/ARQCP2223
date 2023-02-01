#include <stdio.h>
#include "frequencies.h"

int main(){
	//declaração dos arrays, o tamanho do array notas é definido pelo seu número de bytes a dividir pelo número de 
	// bytes de um float
	float notas[] =  {8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 0.0, 12.67, 16.23, 18.75};
	int length = sizeof(notas)/sizeof(float);
	int frequencias[20];
	
	//valores todos passados por pointers, não necessitando de return type
	frequencies(notas, length, frequencias);
	
	//print do resultado para ver a credibilidade da função(quantas notas houve de um certo valor)
	printf("\nNotas: ");
	for(int i = 0; i < 20; i++){
		printf("%d ", frequencias[i]);
	}
	printf("\n");
	
	return 0;
}
