#include <stdio.h>
#include <string.h>
int main( void ){


/* union union_u1 {
    char vec[32];
    float a;
    int b;
} u;

union union_u1 * ptr = &u; */

struct struct_s1{
    char vec[32];
    float a;
    int b;
} s;

struct struct_s1 * ptr = &s;

strcpy(ptr->vec, "arquitectura de computadores" );
printf( "[1]=%s\n", ptr->vec );
ptr->a = 123.5;
printf( "[2]=%f\n", ptr->a );
ptr->b = 2;
printf( "[3]=%d\n", ptr->b );
printf( "[1]=%s\n", ptr->vec );
printf( "[2]=%f\n", ptr->a );
printf( "[3]=%d\n", ptr->b );

// In struct, the values of the members are independent of each other and are stored in the order they are declared, which means that the last member declared will not overwrite the previous ones.
// In union, the values of the members are dependent on each other and are stored in the order they are declare, which means that the last member declared will overwrite the previous ones.

return 0;
}