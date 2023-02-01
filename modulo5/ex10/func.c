#include <stdlib.h>

char *new_str (char str[80]) {
    char *ptr = str; // ptr = &str[0]
    int size = 0;

    while (*str != '\0') { // while the character is not the null character
        size++; // increment the size
        str++; // increment the pointer
    }

    char *copy = (char *) malloc ((size + 1)* sizeof(char)); // allocate memory for the new string

    str = ptr; // reset the pointer, so it points to the beginning of the string

    for (int i = 0; *(str+i) != '\0'; i++) { // copy the string
        *(copy + i) = *(str + i);
    }

    *(copy + size) = '\0'; // add the null character at the end of the string
    return copy; // it is possible to return this address because the memory is allocated in the heap, so it will not be destroyed when the function ends
}