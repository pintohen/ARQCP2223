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
Stack *stack_new();

// Push a value onto the stack
void stack_push(Stack *stack, long value);

// Pop a value from the stack
long stack_pop(Stack *stack);

// Get the size of the stack
int stack_size(Stack *stack);

// Check if the stack is empty
int stack_is_empty(Stack *stack);

// Free the memory used by the stack
void stack_free(Stack *stack);