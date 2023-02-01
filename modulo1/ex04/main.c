#include <stdio.h>
#include "upper1.h"


int main(){
	char str[256];
	printf("Word: ");
	scanf("%s", str);
	printf("\n");
	
	//não necessário retornar visto que é passada a referência da string
	upper1(str);
	//impressão do resultado apenas para ver a credibilidade da função
	printf("%s\n", str);
}
