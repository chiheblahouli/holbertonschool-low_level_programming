#include "hash_tables.h"

/**
 *hash_table_create - allocates a hash.table.
 *@size: The size of the array.
 *Return: returns a node of hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	hash_table->size = size;
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
