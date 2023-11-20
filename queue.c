#include "monty.h"
/**
 * f_queue - printing the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
 * addqueue - adding node to our tail stack
 * @n: new_value
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *auk;

	auk = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (auk)
	{
		while (auk->next)
			auk = auk->next;
	}
	if (!auk)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		auk->next = new_node;
		new_node->prev = auk;
	}
}
