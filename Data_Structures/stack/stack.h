#ifndef STACK_H
#define STACK_H
#define MAX_SIZE 100 

typedef struct{
    char elements[100];
    int top;
} Stack;

void init(Stack *ptr);
int is_full(Stack *ptr);
int is_empty(Stack *ptr);
int push(char element, Stack *ptr);
int pop(char *ptr_element, Stack *ptr);
int stacksize(Stack *ptr);
void clearstack(Stack *ptr);

#endif
