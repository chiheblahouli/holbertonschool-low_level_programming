#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints all the elements of a list_t list.
 * @h : lists.
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
size_t i;

	for (i = 0; h; i++)
{
	printf("%i\n", h->n);
	h = h->next;
}
	return (i);
}
