#include <stdio.h>
#include <string.h>
#include "asm.h"

int main() {

    Student s;
    s.number = 100;
    s.age = 15;
    strcpy(s.name, "John Doe");
    strcpy(s.address, "Rua do Ouro, 123");

    int new_grades[] = {10, 15, 20, 25, 30};
    
    update_grades(&s, new_grades);

    for (int i = 0; i < 5; i++) {
        printf("Grade %d: %d\n", i, s.grades[i]);
    }

    return 0;
}