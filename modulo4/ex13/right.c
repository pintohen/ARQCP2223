int rotate_right(int num, int nbits) {
    int size = sizeof(int) * 8; // 32 bits
    int mask = num << (size - nbits);
    int right = num >> nbits;
    return right | mask; // returns
}