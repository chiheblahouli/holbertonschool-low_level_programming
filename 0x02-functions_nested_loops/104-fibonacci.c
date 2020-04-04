#include <stdio.h>

/**
 * main - print 98 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int a, b, c;
	unsigned long int a1, a2, b1, b2, c1, c2, d, i;

	a = 1;
	b = 2;
	c = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);
	for (d = 3; d < 89; d++)
	{
		printf("%lu, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	b1 = b / 1000000000;
	b2 = b % 1000000000;
	c1 = c / 1000000000;
	c2 = c % 1000000000;
	for (i = 89; i < 98; i++)
	{
		printf("%lu%lu, ", c1, c2);
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
		c1 = a1 + b1 + ((a2 + b2) / 1000000000);
		c2 = (a2 + b2) % 1000000000;
	}
	printf("%lu%lu\n", c1, c2);
	return (0);
}
