int fractional_part (char * x) {	
	int result = 0;
	int number_of_separators = 0;
	for(int i = 0; x[i] != '\0'; i++){
		
		if(number_of_separators == 1){
			result = result*10 + (x[i]-48);
		}
		
		if((x[i] == ',') || (x[i] == '.')){
			number_of_separators++;
		} 
		
	}
	return result;
} 
