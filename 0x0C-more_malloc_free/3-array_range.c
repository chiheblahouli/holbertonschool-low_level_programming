#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: int.
 * @max: int.
 * Return: Nothing.
*/
int *array_range(int min, int max)
{
	int i, m;
	int *f;

	if (min > max)
	return (NULL);
	m = max - min + 1;
	f = malloc(sizeof(int) * m);
	if (f == NULL)
	return (NULL);
	for (i = min; i <= max; i++)

	f[i - min] = i;

	return (f);
}
