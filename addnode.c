#include "monty.h"
/**
 * addnode - adding node to our head stack
 * @head: head of our stack
 * @n: new_value
 * Return: none
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *auk;

	auk = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (auk)
		auk->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
