#include "monty.h"
/**
 * pall - prints the stack
 * @head: stack head
 * @counter: no use
 * Return: void
 */
void pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
