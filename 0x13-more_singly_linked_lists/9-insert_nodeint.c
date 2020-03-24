#include "lists.h"
/**
 * insert_nodeint_at_index - inserts of a new node;
 * @head: head of node.
 * @idx: index.
 * @n: integer.
 * Return: Always 0.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *kak, *cto;

	if (kak == NULL)
	{
	return (NULL);
	for (i = 0; i < idx - 1; i++)
	kak = kak->next;
	}
	cto = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	cto->n = n;
	cto->next = mid->next;
	kak->next = cto;
	return (cto);
}
