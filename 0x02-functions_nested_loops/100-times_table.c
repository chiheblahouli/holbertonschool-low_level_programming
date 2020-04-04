#include "holberton.h"
/**
 * print_tables - prints tables.
 * @n: integer.
 * Return: Always 0.
 */
void print_tables(int n)
{
int i, j, x1, x2, y1, y2, Ãz;

for (i = 0 ; i <= n ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
x1 = i * j;
x2 = i * (j + 1);
y1 = x1 / 10;
y2 = x2 / 10;
z = x1 % 10;
if (y1 == 0)
{
_putchar(z + '0');
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
if ((y2 == 0) && (j < 9))
_putchar(' ');
}
else
{
_putchar(y1 + '0');
_putchar(z + '0');
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
