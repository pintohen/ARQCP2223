#include <stdio.h>

union union_u1{
    char vec[32]; // 32 bytes
    float a; // 4 bytes
    int b; // 4 bytes
} u;

struct struct_s1{
    char vec[32]; // 32 bytes
    float a; // 4 bytes
    int b; // 4 bytes
} s;


int main() {

    printf("sizeof(s) = %ld\n", sizeof(s));
    printf("sizeof(u) = %ld\n", sizeof(u));

    // Size of Struct = Size of char + Size of float + Size of int = 32 + 4 + 4 = 40 bytes
    // Size of Union = Size of its data member, which is the largest in size = 32 bytes

    return 0;
}