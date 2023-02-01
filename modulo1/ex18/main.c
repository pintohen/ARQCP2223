#include <stdio.h>
#include "compress_shorts.h"

int main(){
	
	short array1[] = {15, 2, 73, 94, 25, 64};
	int array1_size = (sizeof(array1)/sizeof(short));
	printf("\nSize 1: %d\n", array1_size);
	//como short tem metade dos bytes de int, o segundo array vai ter metade do tamanho em números int, mas o mesmo em bytes.
	int array2_size = (array1_size/2);
	printf("\nSize 2: %d\n", array2_size);
	int array2[array2_size];
	
	printf("\nArray 1: ");
	for(int i=0; i < array1_size; i++){
		printf("%d ", array1[i]);
	}
	printf("\n");
	
	compress_shorts(array1, array1_size, array2);
	
	printf("\nArray 2: ");
	for(int i=0; i < array2_size; i++){
			printf("%d ", array2[i]);
	}
	printf("\n");
	
	return 0;
}
