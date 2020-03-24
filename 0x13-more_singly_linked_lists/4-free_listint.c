#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: node.
 * Return: Always 0.
*/
void free_listint(listint_t *head)
{
	int i;
	listint_t *cto;

	for (i = 0; head; i++)
	{
	cto = head;
	head = head->next;
	free(cto);
	}
}
