#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: int.
 * @index: parmaeter.
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 32)
return (-1);
*n = *n | (1 << index);
return (1);
}
