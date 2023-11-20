#include "monty.h"
/**
 * f_add - adding top two elements of our stack.
 * @head: stack head
 * @counter: line_number
 * Return: none
*/
void f_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auk = h->n + h->next->n;
	h->next->n = auk;
	*head = h->next;
	free(h);
}
