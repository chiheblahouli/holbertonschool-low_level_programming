#include "lists.h"

/**
 * dlistint_len - counts all the elements of dlistint_t list
 * @h: pointer.
 * Return: 0 if NULL.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
