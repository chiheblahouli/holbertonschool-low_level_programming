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
char *m;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
m = malloc((i + 1) * sizeof(char));
if (m == NULL)
return (NULL);
for (i = 0; str[i]; i++)
{
m[i] = str[i];
m[i] = '\0';
return (m);
}
}
