#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr  - function converts args to string.
 * @ac: number of args.
 * @av: grid of args.
 * Return: pointer to new string.
*/

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
