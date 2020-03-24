#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: the first node
 *
 */
void free_listint2(listint_t **head)
{
listint_t *cto;

if (head != NULL)
{
while (*head != NULL)
{
cto = (*head)->next;
free(*head);
*head = cto;
}
*head =  NULL;
}
}
