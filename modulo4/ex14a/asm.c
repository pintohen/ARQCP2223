int reset_bit(int *ptr, int pos) {
    int mask = 1 << pos; // places a 1 in the pos position
    int result = *ptr & mask; // result = *ptr AND mask
    *ptr = *ptr & ~mask; // sets bit to 0
    
    if (result == 0) {
        return 0;
    } else {
        return 1;
    }
}