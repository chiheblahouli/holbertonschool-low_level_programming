#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - parameters.
 * @n: parameters.
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list vas;

	if (n <= 0)

	return (0);
		va_start(vas, n);
	for (i = 0; i < n; i++)
		sum += va_arg(vas, int);
		va_end(vas);

	return (sum);
}
