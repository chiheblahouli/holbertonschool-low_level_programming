#include <stdio.h>
/**
 *main - pritns numbers
 *Return: 0
 */
int main(void)
{
int L;
int C;

for (L = 48; L <= 56; L++)
for (C = L + 1; C <= 57; C++)
if (L != C)
putchar(L);
putchar(C);
if (L < 56)
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
