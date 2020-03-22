#include "lists.h"
/**
 *free_list - delete list.
 *free: free.
 *@head: pointer.
 *Return: Always 0.
 */

void free_list(list_t *head)
{
list_t *b;
while (head != NULL)
{
b = head;
head = head->next;
free(b->str);
free(b);
}
}
