#include "holberton.h"

/**
 * prime - increments count
 * @a: The number to divide
 * @b: The number to check
 *
 * Return: 1 if is prime else 0
 */

int prime(int a, int b)
{
if (b < 0)
return (0);
if (a == b)
return (1);
if (b % a == 0)
return (0);
else
return (prime(++a, b));
}
