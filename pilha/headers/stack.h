#ifndef STACK_H
#define STACK_H

typedef struct stack Stack;

Stack* stack_create();
int stack_is_empty(Stack* stack);
int stack_size(Stack* stack);
void stack_push(Stack* stack, float number);
float stack_pop(Stack* stack);
void stack_clear(Stack* stack);

#endif
