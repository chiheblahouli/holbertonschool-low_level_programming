#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a nodes.
 * @h: pointer to pointer of first node.
 * @idx: placement for new node.
 * @n: number values.
 * Return: address of new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *map;
	dlistint_t *tmp;
	unsigned int counteur;

	if (!h || (!*h && idx != 0))
		return (NULL);
	map = malloc(sizeof(dlistint_t));
	if (!map)
		return (NULL);
	tmp = *h;

	if (*h)
	{
	if (idx == 0)
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
