#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat -concat string
 *@s1: string
 *@s2:  string
 *@n: first byte
 *Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, m = 0, c = 0;
if (s1 == NULL)
	s1 = "";
	for (i = 0; s1[i]; i++)
	;
if (s2 == NULL)
s2 = "";
for (j = 0; s2[j]; j++)
;
	if (j < n)
	n = j;
	s = malloc((i + n + 1) * sizeof(char));
	if (s == NULL)
	return (NULL);
	for (m = 0; m < i  ; l++)
	s[l] = s1[l];
	for (c = 0; c < n; c++)
	s[m + c] = s2[c];
	s[m + c] = '\0';
	return (s);
}
