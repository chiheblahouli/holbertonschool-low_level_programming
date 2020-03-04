#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - prints a grid of integers
 * @str: string.
 * Return: m.
 */
char *_strdup(char *str)
{
int i;
char *d;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
d = malloc((i + 1) * sizeof(char));
if (d == NULL)
return (NULL);
for (i = 0; str[i]; i++)
{
d[i] = str[i];
}
d[i] = '\0';
return (d);
}
