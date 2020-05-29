#include "hash_tables.h"

/**
 * key_index - created a key index to store.
 * @key: The key that will be the key.
 * @size: The size of the hash_table.
 * Return: returns an index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	index = index % size;
	return (index);
}
