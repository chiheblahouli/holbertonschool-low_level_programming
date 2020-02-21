#include "holberton.h"
/**
 * *leet - main function
 * @s: parameter
 * Return: s
 */
char *leet(char *s)
{
int i = 0, j;
char s1[] = {'A', 'E', 'O', 'T', 'L'};
char s2[] = {'4', '3', '0', '7', '1'};
while (s[i] != '\0')
{
for (j = 0; s1[j] != '\0'; j++)
{
if (s[i] == s1[j] || s[i] == s1[j] + 32)
{
s[i] = s2[j];
}
}
i++;
}
return (s);
}
