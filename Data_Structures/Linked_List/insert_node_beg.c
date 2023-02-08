#include <stdio.h>
#include <stdlib.h>
struct			Node
{
	int			data;
	struct Node	*next;
};

void	Insert(struct Node **head, int x)
{
	struct Node	*temp  = malloc(sizeof(struct Node));
    temp ->data = x;
    temp -> next = *head;
    *head = temp;
}
void	Print(struct Node *head)
{
    printf("List is : ");
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head -> next;
    }
    printf("\n");
}
int	main(void)
{
	struct Node *head = NULL;
	printf("How many Numbers ?\n");
	int i, n, x;
    i = 0;
    n = 0;
    x = 0;
	scanf("%d", &n);
	while (i < n)
	{
		printf("Enter the Number :\n");
		scanf("%d", &x);
		Insert(&head,x);
		Print(head);
		i++;
	}
	return (0);
}
