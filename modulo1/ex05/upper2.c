
/* Cada caracter da palavra/frase é percorrido e analisado.
 * Se for maior que 96 ou menor que 127, significa que o caracter analisado é uma letra minúscula.
 * Caso isso seja verdade, para passar de minúscula para maiúscula é dada uma subtração de 32 (ascii
 * code).
 */

void upper2(char *str){
	
	while(*str!='\0') {
		int i = 0;
		if((*(str+i) > 96) & (*(str+i) < 123)) {
			*(str+i) -= 32;
		}
			str++;
			i++;
	}
}
