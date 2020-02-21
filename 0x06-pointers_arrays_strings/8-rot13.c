#include "holberton.h"
/**
 * *rot13 - main function
 *@s: parameter
 *Return: s
 */
char *rot13(char *s)
{
int i, j;
char m[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ}";
char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM}";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (m[j] == s[i])
{
s[i] = n[j];
break;
}
}
}
return (s);
}
