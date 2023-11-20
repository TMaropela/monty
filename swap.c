#include "monty.h"
/**
 * f_swap - adding the top two elements
 *  of our stack.
 * @head: stack head
 * @counter: line_number
 * Return: none
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int lenk = 0, auk;

	h = *head;
	while (h)
	{
		h = h->next;
		lenk++;
	}
	if (lenk < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auk = h->n;
	h->n = h->next->n;
	h->next->n = auk;
}
