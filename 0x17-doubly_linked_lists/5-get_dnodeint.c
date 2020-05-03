#include "lists.h"
/**
 * get_dnodeint_at_index - gets nodes.
 * @head: pointer.
 * @index: index of node.
 * Return: NULL if failed.
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
