#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - a function that concatenates two strings.
 *@s1 : destination of string.
 *@s2 : source of string.
 *@n : int.
 *Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int e, m, j, i;
	char *s;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (e = 0; s1[e] != '\0'; e++)
	for (m = 0; s2[m] != '\0'; m++)
	if (n >= m)
	n = m;
	s = malloc(sizeof(char) * (e + n + 1));
	if (s == NULL)
	return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	s[i] = s1[i];
	for (j = e; j < e + n; j++)
	s[j] = s2[j - e];
	s[j] = '\0';
	return (s);
}
