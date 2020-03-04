#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - duplicate a string
 * @str: parameter.
 * Return: Always to 0
 */
char *_strdup(char *str)
{
int j;
char *m;
if (str == NULL)
return (NULL);
for (j = 0; str[j]; j++)
m = malloc((j + 1) * sizeof(char));
if (m == NULL)
return (NULL);
for (j = 0; str[j]; j++)
m[j] = str[j];
x[j] = '\0';
return (m);
}
