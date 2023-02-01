/*
 * Primeiramente usamos um pointer auxiliar para dar cast do pointer de inteiros para shorts.
 * Posteriormente copiamos os valores do pointer shorts para o auxiliar.
 * Como o auxiliar é apenas uma referência para o integers(definido numa main function), o pointer/array vai ser automaticamente
 *  "un-casted" na função onde foi iniciado, transformando 2 shorts(2 bytes) em um int (4 bytes).
 */
void compress_shorts(short* shorts, int n_shorts, int* integers){
	int i;
	
	short *aux = (short *) integers;
	
	for(i=0; i < n_shorts; i++){
		(*(aux + i)) = (*(shorts + i));
	}
}
