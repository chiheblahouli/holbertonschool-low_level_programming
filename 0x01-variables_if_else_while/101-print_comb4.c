#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int i;
	int j;
	int k;

	i = 48;
	j = 49;
	k = 50;
	while  ((i < 56) && (j < 57) && (k < 58))
	{
		putchar(i);
		putchar(j);
		putchar(k);
	if ((i == 55) && (j == 56) && (k == 57))
		{
			putchar('\n');
			i++;
			j++;
			k++;
		}
	else
		{
			putchar(44);
			putchar(32);
		if (k < 57)
			{
				k++;
			}
		else
			{
		if (j < 56)
				{
					j++;
					k = j + 1;
				}
		else
				{
					i++;
					j = i + 1;
}
}
	}
	}
	return (0);
}
