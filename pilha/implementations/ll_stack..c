#include <stdlib.h>
#include "../headers/stack.h"

/**
 * @param n Current number of elements
 * @param max Maximum number of elements
 * @param values Contents array
 */
struct stack {
    int n;
    int max;
    float* values;
};

Stack* stack_create() {
    Stack* stack = (Stack*) malloc(sizeof(Stack));

    return stack;
}

void stack_clear(Stack* stack) {
}

int stack_is_empty(Stack* stack) {
    return stack->n == 0;
}

float stack_pop(Stack* stack) {
    float number = stack->values[stack->n];
    stack->n -= 1;

    return number;
}

void stack_push(Stack* stack, float number) {
}
