void capitalize(char * str){
	//servirá como ajuda para iterar o pointer str
	char * ptr = str;
	
	//enquanto a string não acabar...
	while(*ptr != '\0')
	{
		//verificará se o carater atual é o primeiro ou o anterior é um espaço...
		if(*ptr == str[0] || *(ptr - 1) == ' '){
			//e se for uma letra minúscula transformará numa maiúscula.
			if(*ptr < 123 && *ptr > 96){
				// -32 transforma uma minúscula numa maiúscula através do ascii code
				*ptr = *ptr - 32;
			}
		}
		ptr++;//iterar sobre o pointer
	}
}
