#include "lists.h"
/**
 * add_dnodeint_end - Adds new node at the end of a linked list.
 * @head: pointer.
 * @n: int.
 * Return: Always 0.
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *map;
	dlistint_t *tmp;

	if (!head)
	return (NULL);
	map = malloc(sizeof(dlistint_t));
	if (!map)
	return (NULL);
	map->n = n;
	if (!*head)
	{
	*head = map;
	map->next = NULL;
	return (map);
	}
	tmp = *head;
	while (tmp->next)
	tmp = tmp->next;
	map->prev = tmp;
	tmp->next = map;
	map->next = NULL;
	return (map);
}
