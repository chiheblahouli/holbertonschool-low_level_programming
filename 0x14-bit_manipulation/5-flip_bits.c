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
unsigned long int g = (n ^ m), c = 0;

while (g > 0)
{
if (g & 1)
c++;
g >>= 1;
}
return (c);
}
