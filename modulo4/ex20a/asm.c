int sum_multiples_x(char *vec, int x){
    short xShort = x; // only stores 2 first bytes of x
    xShort = xShort >> 8; // shift 8 bits to the right(only stores second byte of x)
    int sum = 0;
    for(int i = 0; *(vec+i) != '\0'; i++){
        if(*(vec+i) % xShort == 0){
            sum += *(vec+i);
        }
    }
    return sum;
}