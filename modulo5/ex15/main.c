#include "stack.h"
#include <stdio.h>

int main(){
    
    Stack * stack = stack_new();


    // Must be 0
    printf("\nSize of stack: %d\n", stack_size(stack));

    stack_push(stack, 12);
    stack_push(stack, 10);
    stack_push(stack, 5);


    // Must be 3
    printf("\nSize of stack: %d\n", stack_size(stack));

    long popped = stack_pop(stack);

    // Must be 5
    printf("\nPopped: %ld\n", popped);

    // Must be 2
    printf("\nSize of stack: %d\n", stack_size(stack));

    stack_free(stack);

    return 0;
}