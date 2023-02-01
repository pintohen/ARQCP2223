#include <stdio.h>
#include "capitalize.h"

int main(){
	char str[] = "frase a testar.";
	
	printf("\nSentence: %s", str);
	
	printf("\n");
	
	//sem return type, é passado um pointer para a função e o seu valor é editado na mesma
	capitalize(str);
	
	
	//print para verificar a credibilidade da função
	printf("Sentence capitalized: %s\n", str);
	return 0;
}
