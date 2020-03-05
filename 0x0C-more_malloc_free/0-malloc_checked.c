#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b : parameter.
 * Return: ALways 0.
 */
void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(b);
	if (m == NULL)
	exit(98);
		else
		return (m);
}
