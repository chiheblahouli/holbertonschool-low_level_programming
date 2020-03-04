*#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr  - function converts args to string.
 * @ac: number of args.
 * @av: grid of args.
 * Return: pointer to new string.
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
d = malloc(sizeof(char) * (i + j + 1));
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

char *argstostr(int ac, char **av)
{
int l, i, j;
char *s;
if (ac == 0 || av == NULL)
	return (NULL);
for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
		l++;
}
l = l + ac + 1;
s = malloc(sizeof(char) * l);
if (s == NULL)
	return (NULL);
for (i = 0; i < ac; i++)
{
	s = str_concat(s, av[i]);
	s = str_concat(s, "\n");
}
return (s);
}
