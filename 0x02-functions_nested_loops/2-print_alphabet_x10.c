#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
int i;
char x;
for (i = 0 ; i < 10 ; i++)
{
for (x = 'a'; x <= 'z' ; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
