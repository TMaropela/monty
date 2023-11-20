#include "monty.h"
/**
  *f_sub - sustration
  *@head: stack head
  *@counter: line_number
  *Return: none
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *auk;
	int susb, nodes;

	auk = *head;
	for (nodes = 0; auk != NULL; nodes++)
		auk = auk->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auk = *head;
	susb = auk->next->n - auk->n;
	auk->next->n = susb;
	*head = auk->next;
	free(auk);
}
