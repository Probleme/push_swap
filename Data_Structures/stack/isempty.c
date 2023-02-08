#include "stack.h"

int is_empty(Stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else 
        return 0;
}