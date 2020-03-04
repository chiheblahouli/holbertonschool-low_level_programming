#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: concatenated string.
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
d = malloc(sizeof(char) * i + j + 1);
if (d == NULL)
	return (NULL);
if (s1 != '\0' && s2 != '\0')
{
	for (k = 0; k < i; k++)
		d[k] = *s1[k];
	for (k = 0; k < j; k++)
		d[k + i] = *s2[k];
	d[k] = '\0';
}
else
	d = "";
return (d);
}
