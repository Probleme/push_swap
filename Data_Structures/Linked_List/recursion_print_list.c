#include "stdio.h"
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
void Print(struct Node *head)
{
    if (head == NULL)
        return ;
    printf("%d", head->data); // print value in node
    Print(head->next); // recursive call
}
struct Node *Insert(struct Node *head, int data)
{
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
        head = temp;
    else
    {
        
    }
}
int main()
{
    
    return 0;
}
