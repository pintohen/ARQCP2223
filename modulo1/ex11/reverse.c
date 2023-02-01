#ifndef STRING_H
#define STRING_H
int size;
void reverse (char *str) {
	int i;
	char *begin, *end, temp;
	begin = str;
	end = str;
	
	for (i = 0; i < (size - 1); i++) {
		end++;
	}
	
	for (i = 0; i < size/2; i++) {
		temp = *end;
		*end = *begin;
		*begin = temp;
		
		begin++;
		end--;
	}
}
#endif
