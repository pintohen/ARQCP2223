 int i = 0, number = 0;
 
 int count(int *vec, int n, int value) {
	 for (i = 0; i < n; i++) {
		 if (vec[i] == value) {
			 number++;
		 }
	 }
	 return number;
 }
