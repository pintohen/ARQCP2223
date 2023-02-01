void upper1(char * str){
	for(int i = 0; *(str + i) != '\0'; i++){
		//minúscula para maiúscula é uma subtração de 32 (ascii code)
		// apenas se for uma letra minúscula(também verificado pelo ascii)
			if((*(str + i)>96) & (*(str + i)<123)) *(str + i) -= 32;
	}
}
