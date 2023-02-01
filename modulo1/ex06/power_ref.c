void power_ref(int * x, int y){
	
	//pequenas restrições que são gerais para todo o número negativo e 0
	//se elevarmos a um número negativo o resultado vai ser sempre <1
	//(arredonda a 0)
	if(y==0) *x=1;
	if(y<0) *x=0;
	int value_to_multiply = *x;
	for(int i = 1; i<y; i++){
		*x = *x * value_to_multiply;
	}
}
