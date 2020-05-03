#include "lists.h"
/**
 * print_dlistint - prints all the elements.
 * @h: pointer to head node of linked list.
 * Return:0 if nothing.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
	return (0);
while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
