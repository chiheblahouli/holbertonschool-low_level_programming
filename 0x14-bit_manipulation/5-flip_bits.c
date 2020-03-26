#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits -  that returns the number of bits you would need.
 * @n: int number.
 * @m: int number.
 * Return: Always 0.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int g = 0;
unsigned long int c;

c = n ^ m;
while (c > 0)
g = g + (c & 1);
c = c >> 1;
}
	return (g);
}
