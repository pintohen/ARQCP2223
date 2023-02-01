#include <stdlib.h>

int **new_matrix(int lines, int columns){

int **new_matrix = NULL;	

new_matrix = (int**) calloc(lines, sizeof(int*)); 	
	
for(int i=0;i<lines;i++){
		*(new_matrix+i) = (int*) calloc(columns, sizeof(int)); 
    }
    
   return new_matrix;
}