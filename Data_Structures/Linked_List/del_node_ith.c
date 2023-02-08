#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};
struct Node *head;
void Insert(int data)
{
	struct Node *temp = malloc(sizeof(struct Node));
	temp -> data = data;
	temp -> next = head;
	head = temp;
}
void Print() // Print List
{
	printf("List is : ");
	while(head != NULL)
	{
		printf("%d ", head -> data);
		head = head -> next;
	}
}
void Delete(int pos) // Delete position number in list
{
	struct Node *temp1 = head;
	if (pos == 1)
	{
		head = temp1->next;
		free(temp1);
		return ;
	}
	int i = 0;
	while(i < pos - 2)
	{
		temp1 = temp1->next;
		i++;
	}
	struct Node *temp2 = temp1 -> next;
	temp1 -> next = temp2 -> next;
	free(temp2);
}
int main()
{
	int po;
	po = 0;
	head = NULL; // empty List
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();// Print list
	printf("\nEnter a position :\n");
	scanf("%d", &po);
	printf("%d",po);
	Delete(po);
	Print();
	return 0;
}
