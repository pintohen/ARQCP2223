int count_bits_one(int x){

    int count = 0; // count the number of bits set to 1
        
        // loop through all bits of x(int is 32 bits)
        for(int i = 0; i < 32; i++)
        {
            if(x & 1) // if the last bit is 1 (through bitwise AND)
                count++; // increment count

            x >>= 1; // shift bits of x to the right by 1(iterate to next bit)
        }

    return count;
}