
#include "holberton.h"
/**
 * clear_bit - ets the value of a bit to 0 at a given index.
 * @n: number.
 * @index: parameter.
 * Return: Alawys 0.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
