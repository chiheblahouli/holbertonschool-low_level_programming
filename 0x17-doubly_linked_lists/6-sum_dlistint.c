#include "lists.h"
/**
 * sum_dlistint - returns sum of all data.
 * @head: pointer to first node.
 * Return: sum of all elements.
**/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	return (0);

	while (head)
{
	sum = sum + head->n;
	head = head->next;
}
	return (sum);
}
