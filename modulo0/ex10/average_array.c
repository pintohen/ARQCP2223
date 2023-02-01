int average_array(int v[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum = sum + v[i];
	}
	return sum / n;
}
