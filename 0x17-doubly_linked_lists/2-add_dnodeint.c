#include "lists.h"
/**
 * add_dnodeint - Adds new node at beginning of linked list
 * @head: pointer to pointer to first node
 * @n: int value to be help in added node
 * Return: address to new node, NULL if failed
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *map;
	dlistint_t *tmp;

	if (!head)
	return (NULL);

	tmp = *head;
	map = malloc(sizeof(dlistint_t));

	if (!map)
	return (NULL);

	map->n = n;
	if (!*head)
	{
	*head = map;
	map->prev = NULL;
	map->next = NULL;
	return (map);
	}

	tmp->prev = map;
	map->prev = NULL;
	map->next = tmp;
	*head = map;
	return (map);
}
