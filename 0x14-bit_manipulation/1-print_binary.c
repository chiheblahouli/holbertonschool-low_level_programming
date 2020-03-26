#include "holberton.h"

/**
 * print_binary - prints numbers
 * @n: int.
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
}
