#include "holberton.h"
/**
 * *cap_string - main function
 * @s: parameter
 * Return: s
 */
char *cap_string(char *s)
{
int i, j;
char m[] = {' ', '\t', '\n', ',', ';', '?', '.', '!', '"', '(', ')', '{', '}'};
if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= 32;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
for (j = 0; m[j] != '\0'; j++)
if ((s[i - 1]) == m[j])
{
s[i] -= 32;
}
}
return (s);
}
