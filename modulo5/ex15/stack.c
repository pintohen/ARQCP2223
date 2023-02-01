#include <stdio.h>
#include <stdlib.h>

// Define a node in the stack
typedef struct Node {
    long value;
    struct Node *next;
} Node;

// Define a stack data structure
typedef struct Stack {
    Node *head;
    int size;
} Stack;

// Create a new stack
Stack *stack_new() {
    Stack *stack = malloc(sizeof(Stack));
    stack->head = NULL;
    stack->size = 0;
    return stack;
}

// Push a value onto the stack
void stack_push(Stack *stack, long value) {
    // Create a new node
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = stack->head;

    // Update the head of the stack and the size
    stack->head = node;
    stack->size++;
}

// Pop a value from the stack
long stack_pop(Stack *stack) {
    // Check if the stack is empty
    if (stack->head == NULL) {
        printf("Error: stack is empty\n");
        exit(1);
    }

    // Get the value from the top node
    long value = stack->head->value;

    // Remove the top node from the stack and free its memory
    Node *node = stack->head;
    stack->head = node->next;
    stack->size--;
    free(node);

    return value;
}

// Get the size of the stack
int stack_size(Stack *stack) {
    return stack->size;
}

// Check if the stack is empty
int stack_is_empty(Stack *stack) {
    return stack->size == 0;
}

// Free the memory used by the stack
void stack_free(Stack *stack) {
    Node *node = stack->head;
    while (node != NULL) {
        Node *next = node->next;
        free(node);
        node = next;
    }
    free(stack);
}
