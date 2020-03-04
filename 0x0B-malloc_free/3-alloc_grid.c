#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function returns a pointer to a 2-d array of integers.
 * @width: width.
 * @height: height.
 * Return: Grid of integers initialized to 0.
*/

int **alloc_grid(int width, int height)
{
int i, j, **g;
if (width <= 0 || height <= 0)
	return (NULL);
g = malloc(sizeof(int) * height);
if (g == NULL)
	return (NULL);
for (i = 0; i < height; i++)
{
	g[i] = malloc(sizeof(int) * width);
	if (g[i] == NULL)
		return (NULL);
	for (j = 0; j < width; j++)
	g[i, j] = 0;
}
return (g);
}
