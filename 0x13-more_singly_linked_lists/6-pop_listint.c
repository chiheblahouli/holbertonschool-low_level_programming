#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t.
 * @head: header to delete.
 * Return: Always 0.
*/
int pop_listint(listint_t **head)
listint_t *cto;

	int x;
	cto = *head;
	if (*head == NULL)
		return (0);
		x = (*head)->x;
	*head = cto->next;
	free(cto);
	return (x);
}
