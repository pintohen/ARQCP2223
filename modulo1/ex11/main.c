#include <stdio.h>
#include <ctype.h>
#include "palindrome.h"

/* É pedido ao utilizador para inserir uma frase que será utilizada no exercício. É invocada a função
 * palindrome que, dependendo do valor que retorna, determina a resposta do output. Caso o valor seja
 * igual a 1, significa que a palavra/frase foi analisada e respeita todas as condições para ser
 * considerada palíndroma. Caso o retorno tenha sido 0, não é um palíndromo.
 */

int main() {
	char sentence[1000], *str;
	
	printf("Write a sentence:\n ");
	scanf("\n%[^\n]s", sentence);
	str = sentence;
 
  if (palindrome(str) == 1) {
      printf("\n\"%s\" is a palindrome.\n", str);
  } else {
      printf("\n\"%s\" is not a palindrome.\n", str);
  }

   return 0;
}
