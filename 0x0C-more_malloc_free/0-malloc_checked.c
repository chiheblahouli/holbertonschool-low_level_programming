#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - function malloc.
 *@b: integer.
 *Return: void.
 */
void *malloc_checked(unsigned int b)
{
	void *f;

	f = malloc(b);
	if (f == NULL)
		exit(98);
	return (f);
}
