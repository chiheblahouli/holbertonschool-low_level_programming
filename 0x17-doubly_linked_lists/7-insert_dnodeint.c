#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at specified position in main
 * @h: pointer to pointer of first node in linked list
 * @idx: placement for new node
 * @n: number value assigned to node
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *map;
	dlistint_t *tmp;
	unsigned int counter;

	if (!h || (!*h && idx != 0))
		return (NULL);
	map = malloc(sizeof(dlistint_t));
	if (!map)
		return (NULL);
	map->n = n;
	if (!map)
		return (NULL);
	tmp = *h;
	if (idx == 0)
{
	if (*h)
{
	tmp->prev = map;
	map->next = tmp;
	*h = map;
}
	else
	*h = map;

		return (map);
}
	for (counter = 0; tmp->next || counter == idx - 1; counter++)
{
	if (counter == idx - 1 && tmp->next)
{
	tmp->next->prev = map;
	map->next = tmp->next;
	tmp->next = map;
	map->prev = tmp;
		return (map);
}
	tmp = tmp->next;
}

	free(map);
		return (NULL);
}
