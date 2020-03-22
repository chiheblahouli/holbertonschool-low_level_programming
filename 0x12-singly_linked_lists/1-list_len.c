#include "lists.h"
/**
 *list_len - returns the length of a list
 *@h: list_t.
 *Return: size_t number of elements.
 */
size_t list_len(const list_t *h)
{

	size_t j;

	for (j = 0; h; j++)
		h = h->next;
	return (i);
}
