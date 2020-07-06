#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to hash table
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i, first;

	if (!ht)
		return;
	first = 1;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first != 1)
				printf(", ");
			if (node->key != NULL)
			{
				printf("'%s': ", node->key);
				printf("'%s'", node->value);
			}
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
