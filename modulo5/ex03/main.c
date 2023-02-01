#include "student.h"
#include <string.h>
#include <stdio.h>

int main(){

   Student studentArray[5];

   fill_student(&studentArray[0], 20, 1234, "John Doe", "Rua do Ouro, 123");
   fill_student(&studentArray[1], 21, 1235, "Mary Jane", "Rua do Ouro, 124");
   fill_student(&studentArray[2], 22, 1236, "Peter Parker", "Rua do Ouro, 125");
   fill_student(&studentArray[3], 23, 1237, "Bruce Wayne", "Rua do Ouro, 126");
   fill_student(&studentArray[4], 24, 1238, "Clark Kent", "Rua do Ouro, 127");

    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("Student %d\n", studentArray[i].number);
        printf("Age: %d\n", studentArray[i].age);
        printf("Name: %s\n", studentArray[i].name);
        printf("Address: %s\n\n", studentArray[i].address);
    }

   return 0; 
}