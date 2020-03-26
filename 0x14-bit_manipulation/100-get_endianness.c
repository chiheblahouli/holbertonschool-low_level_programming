#include "holberton.h"
/**
 * get_endianness - parameter
 * Return: Always 0.
 */

int get_endianness(void)
{
unsigned int a = 1;
char *p;
p = (char *) &a;
if (*p)
		return (1);
	return (0);
}
