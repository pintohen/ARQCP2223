void changes(int *ptr) {
    
    unsigned int mask = 0xFF00; // mask = 1111 1111 0000 0000 - mask that activates the second byte
    int num = *ptr; // num = *ptr
    num = num & mask; // num now activates the second byte
    num = num >> 8; // shift num one byte to the right

    if (num > 15) { // verifys if the second byte is greater than 15
        mask = 0x00FF0000; // the new mask changes all the third byte bits
        *ptr = *ptr ^ mask; // *ptr XOR mask
    }
}