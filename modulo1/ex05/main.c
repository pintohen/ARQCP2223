#include <stdio.h>
#include "upper2.h"

/* É pedido ao utilizador para inserir a palavra/frase que deseja utilizar. É invocada a função upper2
 * que consiste em trocar todas as letras minúsculas para a sua correspondente maiúscula. Após isso,
 * é dado o output da palavra novamente, agora só em maiúsculas.
 */

int main(){
	char str[256];
	
	printf("Word: ");
	scanf("%s", &str);
	printf("\n");
	
	upper2(str);
	
	printf("%s\n", str);
}
