void upper(char * str) {
	for(int i = 0; str[i] != '\0'; i++){
			if((str[i]>96) & (str[i]<123)) str[i] -= 32;
	}
}
