#include "holberton.h"
/**
 * print_number - prints numbers.
 * @n: integer
 * Return: void.
 */
void print_number(int n)
{
int i, m[10];
unsigned int j = 0;
j = n;
if (n < 0)
{
j = -n;
_putchar('-');
}
if (n != 0)
{
for (i = 0; j > 0; i++)
{
m[i] = j % 10;
j = j / 10;
}
while (i > 0)
{
_putchar(m[i - 1] + '0');
i--;
}
}
else
_putchar('0');
}
