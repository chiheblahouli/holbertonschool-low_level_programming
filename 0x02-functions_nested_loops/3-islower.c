#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
char x;

if (x >= 'a' && x <= 'z')
return 1;
else
return 0;
}

