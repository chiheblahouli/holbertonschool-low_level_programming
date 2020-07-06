
#include "hash_tables.h"

/**
 * hash_table_get - returns the value of a given key.
 * @ht: The hash table to retrieve the  key.
 * @key: The key to retrieve the value.
 * Return: returns the pointer of the value.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i;
	hash_node_t *tmp;

	if (!key || !ht)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
