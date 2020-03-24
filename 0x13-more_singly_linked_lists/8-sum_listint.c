#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data.
 * @head: first node.
 * Return: Always 0.
*/
int sum_listint(listint_t *head)
{
	int cto = 0;

	if (head == NULL)
	return (0);
	while (head)
{
	cto += head->n;
	head = head->next;
}
	return (cto);
}
