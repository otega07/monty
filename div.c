#include "monty.h"
/**
 * f_div - divides two elements of the stack
 * @counter: line number
 * @head: stack head
 * Return: void
 */
void f_div(stack_ **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h-> == 0)
	{
		fprintf(stderr, "L%d: div by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next / h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}