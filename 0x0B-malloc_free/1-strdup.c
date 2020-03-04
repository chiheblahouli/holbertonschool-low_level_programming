#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copy of the string
 * @str: string to copy
 * Return: d.
*/
char *_strdup(char *str)
{
int i = 0, j;
char *d;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
i = i + 1;
d = malloc(i * sizeof(char));
if (d == NULL)
return (NULL);
for (j = 0; j < i; j++)
d[j] = str[j];
return (d);
}
