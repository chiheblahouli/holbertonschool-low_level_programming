#include "lists.h"
/**
 * print_list - function that prints all elements
 * @h: pointer.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{

		unsigned long i;

	for (i = 0; h; i++)
	{
	while (h != NULL)
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		}
		return (i);
}
