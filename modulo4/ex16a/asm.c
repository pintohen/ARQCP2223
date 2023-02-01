int join_bits(int a, int b, int pos){
    // initialize A mask
    unsigned int maskA = 0xFFFFFFFF;
    maskA = maskA >> (31 - pos); // will place 0's through right shifting in the necessary bits
    unsigned int maskB = ~maskA; // negate so 0's become 1's and 1's become 0's
    // basically, maintain [pos;31] bits of b and [0;pos] bits of a
    
    // then apply the masks to a and b and join results
    return (a & maskA) | (b & maskB);
}