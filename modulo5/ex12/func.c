int find_matrix(int **m, int y, int k, int num){


    for(int i = 0; i < y ; i++){
        for(int j = 0; j < k; j++){
            if( *(*(m + i) + j) == num){ // if the number is found
                return 1; // return 1
            }
        }
    }
    
    return 0; // if the number is not found, return 0
}