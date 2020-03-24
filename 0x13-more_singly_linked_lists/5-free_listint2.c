#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: the first node
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
listint_t *cto;
if (head != NULL)
return;
while (*head != NULL)
{
cto = (*head)->next;
free(*head);
*head = node;
}
*head =  cto;
}
}
