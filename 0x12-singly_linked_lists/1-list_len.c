#include "lists.h"
/**
 *list_len - function.
 *@h: list.
 *Return: number of elements.
 */
size_t list_len(const list_t *h)
{

	size_t j = 0;

	while (h != NULL)
{
		j++;
		h = h->next;
	}
	return (j);
}
