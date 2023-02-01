#include "where_exists.h"
#include <stdio.h>

int main(){
	char word[] = "dogs";
	char sentence[] = "Who let the dogs out?";
	
	char * ptr = where_exists(word, sentence);
	
	printf("\nAddress in memory: %p\n", &ptr);
	
	return 0;
}
