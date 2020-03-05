#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - function that allocates memory using malloc.
 *@b: parameter.
 *Return: ALways 0.
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
	if (pointer == NULL)
	exit(98);
	return (p);
}
