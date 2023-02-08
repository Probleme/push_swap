#include "stack.h"

int push(char element, Stack *ptr)
{
    if (ptr->top == MAX_SIZE - 1)
        return 0;
    else 
    {
        ptr->top++;
        ptr->elements[ptr->top] = element;
        return 1;
    }
}