#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * malloc: parameter.
 * new_node: parameter.
 * @head: pointer.
 * @n: integer.
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *narudni;

	narudni = malloc(sizeof(listint_t));

	if (narudni == NULL)
		return (NULL);
		narudni->n = n;
	narudni->next = *head;
	*head = narudni;
	return (narudni);

}

