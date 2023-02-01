#include <stdio.h>
#include "asm.h"

unsigned int date(int year, int month, int day) {
	return (year << 8) | (month << 24 ) | day;
}

int main() {
	
	unsigned int result = greater_date(date(2017,11,11),date(12,12,31));
	printf("Result: %u\n", result);
	return 0;
}