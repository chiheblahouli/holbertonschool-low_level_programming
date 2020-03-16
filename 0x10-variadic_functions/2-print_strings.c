#include "variadic_functions.h"
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
	m = va_arg(vas, char*);
	if (m == NULL)
		printf("(nil)");
	else
		printf("%s", s);
	if (n - 1 > i)
		printf("%s", separator);
}
	printf("\n");
	va_end(vas);
}
