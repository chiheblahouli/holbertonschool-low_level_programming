#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - a function.
 * @n: parameter.
 * @index: parameter.
 * Return: Always 0.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int nar;
unsigned long int cto;
if (index > 32)
return (-1);
cto = n >> index;
nar = cto & 1;
if ((nar == 1) || (nar == 0))
return (nar);
else
return (-1);
}
