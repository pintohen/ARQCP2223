#include <stdio.h>
#include "asm.h"
#include <string.h>

int main() {

    Student s1;
    char name_s1[60] = "John Doe";
    char address_s1[100] = "Rua do Ouro, 123";

    s1.number = 1234;
    s1.age = 20;
    
    s1.grades[0] = 10;
    s1.grades[1] = 9;
    s1.grades[2] = 8;
    s1.grades[3] = 7;
    s1.grades[4] = 6;

    strcpy(s1.name, name_s1);
    strcpy(s1.address, address_s1);
    
    char address2[100] = "456 Main Street, Anytown, USA";

    update_address(&s1, address2);

    printf("\nStudent number: %d\n", s1.number);
    printf("\nStudent name: %s\n", s1.name);
    printf("\nStudent age: %d\n", s1.age);

    printf("\nStudent new address: %s\n\n", s1.address);

    return 0;
}
