#include "lists.h"
/**
 *free_list - delete list.
 *@head: pointer.
 *Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *m;

	while (head != NULL)
	bowl = head;
	head = head->next;
	free(bowl);
	free(bowl->str);
}
