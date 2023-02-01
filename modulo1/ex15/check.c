#ifndef STDIO_H
#define STDIO_H

/* A função verifica se a condição pedida acontece - dados três elementos consecutivos x, y e z, o
 * elemento z é igual ao elemento y + 1 e ao elemento x + 2, ou seja, são números consecutivos.
 * Caso a condição seja verdadeira, retorna 1. Se não acontecer, retorna 0.
 */

int check (int x, int y, int z) {
	
	if ((x == y - 1) && (x == z - 2)) {
		return 1;
	}
	
	return 0;
}
#endif
