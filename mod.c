#include "monty.h"
/**
 * f_mod - computing rest of our division of second
 * top element of our stack by the top element of our stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auk = h->next->n % h->n;
	h->next->n = auk;
	*head = h->next;
	free(h);
}
