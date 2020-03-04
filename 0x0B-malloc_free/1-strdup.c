#include <stdlib.h>
#include "holberton.h"
/**
*_strdup - duplicate an str
*@str: the str
*Return: Always 0
*/
char *_strdup(char *str)
{
int j, i;
char *m;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
m = malloc(i * sizeof(*m));
{
if (m == NULL)
return (NULL);
}
for (j = 0; j < i; j++)
{
c[j] = str[j];
c[j] = '\0';
return (m);
}
}
