#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - print strings.
* @separator: string.
* @n: number of integers.
* Return: void.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vas;
	unsigned int i;
	char *m;

	va_start(vas, n);
	for (i = 0; i < n; i++)
	{
	m = va_arg(vas, char *);
	if (m != NULL)
		printf("%s", m);
	else
		printf("(nil)");
	if (i < n - 1 && separator)
		printf("%s", separator);
}
		printf("\n");
		va_end(vas);
}
