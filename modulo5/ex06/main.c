#include <stdio.h>
#include <string.h>
#include "asm.h"
#include "fill.h"

int main(){

	Student s[5];
	
	fill_student(s, 10, 15, "Manuel", "Street 1");
	fill_student(s + 1, 11, 16, "João", "Rua do Ouro");
	fill_student(s + 2, 12, 17, "Luís", "Rua do ISEP");
	fill_student(s + 3, 13, 18, "Ana", "Rua  de Cima");
	fill_student(s + 4, 14, 19, "Sofia", "Rua de Baixo");
	
	update_address(s, "Nowhere Street 2222");
	
	s -> grades[0] = 10;
	s -> grades[1] = 5;
	s -> grades[2] = 6;
	s -> grades[3] = 14;
	s -> grades[4] = 20;
	
	int greaterGrades[5];
	int res = locate_greater(s, 10, greaterGrades);
	
	printf("\nNumber of Grades above 10 = %d\n", res);

	return 0;
}