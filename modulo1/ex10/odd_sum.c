/*
 * Esta função retornará a soma dos números ímpares de um array,
 * 	iterando o mesmo e fazendo a verificação para cada número, se é 
 *  possível somar o mesmo ou não(se o resto da divisão do mesmo por 0 é
 *  2).
 * 
 * Esta mesma função poderia ser implementada sem return type também,
 * 	bastava ser declarada a variável sum como extern, sendo acedida fora
 * 	da função pelo main. 
 */
int odd_sum(int * p){
	int sum = 0;
	for(int i = 1; i <= p[0]; i++){
		if(p[i]%2!=0) sum = sum + p[i];
	}
	return sum;
}
