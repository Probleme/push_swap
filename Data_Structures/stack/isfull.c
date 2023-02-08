
#include "stack.h"

int is_full(Stack *ptr)
{
    if(ptr->top == MAX_SIZE - 1)
        return 1;
    else
        return 0;
}