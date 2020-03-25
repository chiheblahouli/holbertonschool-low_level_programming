#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - parameter
 * @head: head.
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *cto = NULL;
listint_t *next = NULL;

if (!head)
return (NULL);
while (*head)
{
	cto = (*head)->next;
	(*head)->next = next;
	next = *head;
	*head = node;
}
	*head = next;
	return (*head);
}

