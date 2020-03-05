#include <stdlib.h>
#include "holberton.h"
/**
*string_nconcat - function concatenate two strings
*@s1 : string 1.
*@s2 : string 2.
*@n : bytes.
*Return: Always 0.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, a, b, c;

for (i = 0; s1[i] != '\0'; i++)
for (j = 0; s2[j] != '\0'; j++)
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

s = malloc((sizeof(char) * i) + (sizeof(char) * n) + 1);
if (s == NULL)
return (NULL);
for (a = 0; a < i; a++)
s[a] = s1[a];
for (y = 0, x = c; b < j || b < n; b++, c++)
s[c] = s2[b];
s[z] = '\0';
return (s);
}
