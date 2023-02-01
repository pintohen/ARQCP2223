#include <stdio.h>
#include "string_to_int.h"

int main(){
	char str[] = "12345";
	
	int number = string_to_int(str);
	printf("\nNumber: %d\n", number);
	return 0;
}
