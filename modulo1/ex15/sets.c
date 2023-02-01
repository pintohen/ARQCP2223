#ifndef STDIO_H
#define STDIO_H

/* É criada uma variável global. A função vai ser invocada sempre que a condição pedida é verificada e
 * vai incrementar 1 ao valor de vezes em que a repetição acontece.
 */
 
void inc_nsets() {
	
	extern int numberSets;
	
	numberSets++;
}
#endif
