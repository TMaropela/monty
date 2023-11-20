#include "monty.h"
/**
* free_stack - freeing our doubly linked list
* @head: head of our stack
*/
void free_stack(stack_t *head)
{
	stack_t *auk;

	auk = head;
	while (head)
	{
		auk = head->next;
		free(head);
		head = auk;
	}
}
