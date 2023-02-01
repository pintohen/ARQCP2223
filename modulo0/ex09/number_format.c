char * number_format(char * number_string) {
	int decimal=0, octal=0;
	for(int i = 0; number_string[i] != '\0' ; i++){
		if((number_string[i]<71)&&(number_string[i]>65)){
			return "hexadecimal\n";
		}
		if((number_string[i]<58)&&(number_string[i]>55)){
			decimal++;
		}
		if( (number_string[i]<56)&&(number_string[i]>49) ){
			octal++;
		}
	}
	if(decimal>0){
		return "decimal\n";
	}else if(octal>0){
		return "octal\n";
	}else return "binary\n";
}
