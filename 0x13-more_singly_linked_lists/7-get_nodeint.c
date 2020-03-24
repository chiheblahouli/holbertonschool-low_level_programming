#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t.
 * @head: the head.
 * @index: parameter
 * Return: Always 0.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

	if (head == NULL)
	return (NULL);
	for (i = 0; index > i; i++)
	head = head->next;
	return (head);
}
