int string_to_int(char *str){
	int number = 0;
	for(int i = 0 ; str[i] != '\0' ; i++){
		number = number*10 + (str[i] - 48);
	} 
	return number;
}
