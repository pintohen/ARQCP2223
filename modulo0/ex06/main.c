#include <stdio.h>
#include "average.h"
#include "../ex05/string_to_int.h"

int main(){
	char string1[] = "15555";
	char string2[] = "51111";
	int number1;
	int number2;
	double average_number;
	
	number1 = string_to_int(string1);
	number2 = string_to_int(string2);
	printf("\nNumber 1: %d\n", number1);
	printf("\nNumber 2: %d\n", number2);
	average_number = average(number1, number2);
	printf("\nAverage: %.2f\n", average_number);
	
	return 0;
}
