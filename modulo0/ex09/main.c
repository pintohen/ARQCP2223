#include <stdio.h>
#include "number_format.h"

int main(){
	char number[] = "123456";
	char * result;
	result = number_format(number);
	printf("\nFormat: %s", result);
	return 0;
}
