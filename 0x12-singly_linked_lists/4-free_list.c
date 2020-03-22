#include "lists.h"
/**
 *free_list - delete list.
 *@head: pointer.
 *Return: Always 0.
 */

void free_list(list_t *head)

{

	list_t *w;
while (head != NULL)
{
	w = head;
	head = head->next;
	free(w->str);
	free(w);
}
}
