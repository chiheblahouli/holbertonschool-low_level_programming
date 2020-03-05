#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: parameter
 * Return: Always 0.
 */
	void *malloc_checked(unsigned int b)
{
unsigned int *p, j;
for (j = 0; j < b; j++)
;
p = malloc(sizeof(unsigned int) * b);
;
if (!p)
return (NULL);

}
		free(p);
			return (p);
					}
