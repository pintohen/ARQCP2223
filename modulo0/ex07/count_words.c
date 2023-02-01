int i, word = 1;
char str[1000];

int count_words (char * str) {
	  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
			if(i==0){
			continue;
			}else{
			word++;
			}
		} 
	}
    return word;
	}
