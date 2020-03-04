#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of integers.
 * @width: width.
 * @height: height.
 * Return: Grid of integers.
*/

int **alloc_grid(int width, int height)
{
int i, j, **g;
if (width <= 0 || height <= 0)
		return (NULL);
g = malloc(sizeof(int *) * height);
if (g == NULL)
	return (NULL)
else
{
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);
		if (g[i] == NULL)
              		return (NULL)
		else
		{
			for (j = 0; j < width; j++)
			g[i, j] = 0;
		}
	}
	return (g)
}
}
