#include "lists.h"
/**
 *free_list - delete list.
 *@head: pointer.
 *Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *m;

		m = head;
		while (head != NULL)
{
			m = head;
			head = head->next;
		free(m->str);
		free(m);
}
}
