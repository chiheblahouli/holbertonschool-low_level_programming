#include "hash_tables.h"

/**
 *hash_djb2 - create A function of hash djb2
 *@str: The string that entry which represent the key
 *Return: returns hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 0;
	int i = 0;

	hash = 5381;
	while (str[i] != '\0')
	{

		hash = hash * 33 + str[i];
		i++;
	}
	return (hash);
}
