#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - function
 *@s1: char
 *@s2: char
 *@n: int
 *Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, o = k, l2 = 0;

	if (s1 == NULL)
			s1 = "";
	if (s2 == NULL)
			s2 = "";
	while (s1[o] != '\0')
			o++;
	while (s2[k] != '\0')
			k++;
	if (n >= l2)
			n = l2;
			s = malloc(o + n + 1);
	if (s == NULL)
		return (s);
	for (i = 0; i < o; i++)
			s[i] = s1[i];
	for (i = 0; i < n; i++)
			s[o + i] = s2[i];
	s[o + i] = '\0';
			return (s);
}
