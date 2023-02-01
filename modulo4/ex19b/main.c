#include <stdio.h>
#include "asm.h"

int main(){
	int vec1[] = {6,2,3,4,5,6,7};
	int lenght = sizeof(vec1)/sizeof(int);
	int vec2[lenght];
	
	int *ptr1 = vec1;
	int *ptr2 = vec2;
	
	add_byte(1,ptr1,ptr2);
	
	printf("Primeiro array: ");
	for(int i = 1; i < lenght; i++){
		printf("%x  ", vec1[i]);
	}
	printf("\n");
	
	printf("Segundo array: ");
	for(int i = 1; i < lenght; i++){
		printf("%x  ", vec2[i]);
	}
	printf("\n");
	
	return 0;
}