#include "stack.h"

int pop(char *ptr_element, Stack *ptr)
{
    if(ptr->top == MAX_SIZE - 1)
        return 0;
    else
    {
        *ptr_element = ptr->elements[ptr->top];
        ptr -> top--;
        return 1;
    }
}