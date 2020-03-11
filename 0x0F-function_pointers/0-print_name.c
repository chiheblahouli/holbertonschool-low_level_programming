#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - parameters.
 * @name: name.
 * @f: function print a name.
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
