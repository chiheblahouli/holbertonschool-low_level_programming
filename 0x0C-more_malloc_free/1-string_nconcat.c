#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, a, b;
	char *s;

	a= 0, b = 0;
	i = 0;
	if (s1)
	while (s1[i++])
	a++;
	i = 0;
	if (s2)
	while (s2[i++])
	b++;
	if (b > n)
	b = n;
	s = malloc(sizeof(char) * (a + b + 1));
	if (!s)
	return (NULL);
	for (i = 0; i < a; i++)
	s[i] = s1[i];
	for (j = 0; j < b; j++, i++)
	s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
