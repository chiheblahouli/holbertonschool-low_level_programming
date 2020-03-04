#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - returns a pointer to a new string
* @str: print a string
* Return: to string.
*/
char *_strdup(char *str)
{
int j, i;
char *m;
if (str == NULL)
return (NULL);
for (j = 0; str[j]; j++)
m = malloc(j * sizeof(*m));
if (m == NULL)
return (NULL);
for (i = 0; i < j; i++)
m[i] = str[i];
m[i] = '\0';
return (m);
}
