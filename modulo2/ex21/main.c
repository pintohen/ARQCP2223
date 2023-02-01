#include <stdio.h>
#include "asm.h"

short code = 20, currentSalary = 500;	
						

int main() {
    //Expected to be 900€ (500 + 400)(manager role)
	printf("\nNew Salary of Manager: %d\n", new_salary());
	return 0;
}