#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Function to initialize a stack
void initializeStack(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an item onto the stack
void push(struct Stack* stack, int value) {
    if (!isFull(stack)) {
        stack->items[++stack->top] = value;
    } else {
        printf("Stack Overflow\n");
    }
}

// Function to pop an item from the stack
int pop(struct Stack* stack) {
    if (!isEmpty(stack)) {
        return stack->items[stack->top--];
    } else {
        printf("Stack Underflow\n");
        return -1; // Return a special value indicating underflow
    }
}

int main() {
    struct Stack myStack;
    initializeStack(&myStack);

    push(&myStack, 1);
    push(&myStack, 2);
    push(&myStack, 3);

    printf("Popped: %d\n", pop(&myStack));
    printf("Popped: %d\n", pop(&myStack));

    return 0;
}
