#include "variadic_functions.h"
/**
 *print_numbers - a function.
 *@separator : string.
 *@n : int.
 *Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vas;
	int Desin;

	va_start(vas, n);
	for (i = 0; i < n; i++)
	{
		Desin = va_arg(vas, int);
		printf("%d", Desin);
	if (i < n - 1)
		printf("%s", separator);
	}
		printf("\n");
		va_end(vas);
}
