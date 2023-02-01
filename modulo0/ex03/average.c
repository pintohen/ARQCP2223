double average (int * vec){
	int i = 0;
	int sum = 0;
	for(i = 0; i < 30 ; i++){
		sum = sum + vec[i];
	}
	return sum / (double) i;
}

