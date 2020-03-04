#include "holberton.h"
#include <stdlib.h>

/**
* _str_concat - a function concatenating two strings
* @s1: input string1
* @s2: input string2
* Return: d string
*/


char *str_concat(char *s1, char *s2)
{

int i = 0, j = 0, k;
char *d;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[i] != '\0')
	i++;
while (s2[j] != '\0')
	j++;
d = malloc((i + j + 1) * sizeof(char));
if (d == NULL)
	return (NULL);
if (s1 != '\0' && s2 != '\0')
{
	for (k = 0; k < i; k++)
		d[k] = s1[k];
	for (k = i; k < i + j; k++)
		d[k] = s2[k - i];
	d[k] = '\0';
}
else
	d = "";
return (d);
}
