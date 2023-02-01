int activate_bits(int a, int left, int right) {
    
    left = 31 - left; // it is 31 - left because we wont activate the bits from left to right, but from right to left(wont activate the "left" bit)

    int i, tempMask;
    for (i = 0; i < left; i++) {
        tempMask = (0x80000000 >> i); // will right shift i times the max int value
        //(so it places a 1 in the desired bit)
        a = a | tempMask; // will activate the bit
    }

    for (i = 0; i < right; i++) {
        tempMask = (1 << i); // will left shift i times the value 1 
        //(so it places a 1 in the desired bit, i bits to the left)
        a = a | tempMask; // will activate the bit
    }

    return a; // returns the number with the bits activated
}