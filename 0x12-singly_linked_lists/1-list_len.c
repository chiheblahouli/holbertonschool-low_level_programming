#include "lists.h"
/**
 *list_len - function.
 *@h: list.
 *Return: number of elements.
 */
size_t list_len(const list_t *h)
{

	size_t j;

	for (j = 0; h; j++)
		h = h->next;
	return (j);
}
