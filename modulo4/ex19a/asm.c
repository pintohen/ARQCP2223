void add_byte(char x, int *vec1, int *vec2){
    int lenght = vec1[0];
	vec2[0] = lenght; // vec2[0] = lenght
	int mask = 0xFFFFFF00; // mask to clear the first byte
	
	for(int i = 1; i <= lenght; i++){
		vec2[i] = vec1[i]; // copy vec1 to vec2

		char firstByte = (char) vec2[i]; // get first byte         
		firstByte += x; // sum it with x

		vec2[i] &= mask; // clear first byte
		vec2[i] |= firstByte; // add firstByte created
	}
}