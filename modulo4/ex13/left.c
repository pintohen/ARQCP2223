int rotate_left(int num, int nbits) {
    int size = sizeof(int) * 8; // 32 bits
    int mask = num >> (size - nbits);
    int left = num << nbits;
    return left | mask; // returns 
}