#include <stdio.h>
#include "lists.h"
/**
 * add_node - add new nodes.
 * @head: the memory.
 * @str: string.
 * Return: node.
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *m;
	unsigned int i = 0;

m = (list_t *)malloc(sizeof(list_t));
if (m == NULL)
return (m);
	while (str[i])
		i++;
m->str = strdup(str);
m->len = i;
m->next = *head;
*head = m;
return (m);
}
