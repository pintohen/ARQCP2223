void copy_vec(int *vec1, int *vec2, int n){
		/*iterar o primeiro vetor segundo o tamanho do mesmo e copiar
		 * os valores do primeiro para o segundo(não sendo necessário 
		 * retornar o segundo pois os valores foram passados por 
		 * referência)*/
	for(int i = 0; i < n ; i++){
		vec2[i] = vec1[i];
	}
}
