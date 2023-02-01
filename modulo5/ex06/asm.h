#ifndef ASM_H
#define ASM_H

typedef struct {
    short number; // 2 bytes (starts at 0)
    char age; // 1 byte (starts at 2)
    int grades[5]; // 20 bytes (starts at 4) (byte skip for memory alignment)
    char name[60]; // 60 bytes (starts at 24)
    char address[100]; // 100 bytes (starts at 84)
} Student;

void fill_student(Student *s, char age, short number, char *name, char *address);
int locate_greater(Student *s, int minimum, int *greater_grade);
void update_address(Student * s, char * new_address);
#endif