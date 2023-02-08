#include "stack.h"

int stacksize(Stack *ptr)
{
    if (ptr->top == -1)
        return 0;
    else
        return ptr->top + 1;
}