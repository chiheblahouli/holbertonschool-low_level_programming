
#include "hash_tables.h"

/**
 * hash_table_get - returns the value of a given key.
 * @ht: The hash table to retrieve the  key.
 * @key: The key to retrieve the value.
 * Return: returns the pointer of the value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || ht->array == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			break;
		node = node->next;
	}
	if (node == NULL)
		return (NULL);
	else
		return (node->value);
}
