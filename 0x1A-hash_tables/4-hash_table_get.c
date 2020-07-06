#include "hash_tables.h"

/**
 * hash_table_get - get a value assiociated with a key
 *@ht: hash table
 *@key: key to find
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
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
