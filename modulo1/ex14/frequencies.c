void frequencies(float * grades, int n, int * freq){
	
	//variável temporária que vai tratar das conversões
	int value;
	
	//preenche o array freq de 0's(para posteriormente serem contadas quantas notas existem)
	for(int i = 0; i < 20; i++){
		*(freq + i) = 0;
	}
		
	for(int i = 0; i < n; i++){
		//vai iterando sobre o array de notas e converte o seu valor decimal para inteiro.
		value = (int) *(grades + i);
		//incrementa o valor de tal frequência convertida em 1
		(*(freq + value))++;
	}
	
}
