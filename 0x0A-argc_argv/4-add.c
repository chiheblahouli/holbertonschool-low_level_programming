#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main to an integer.
 * @argc: variable
 * @argv: variable
 * Return: 0 or 1
*/

int  main(int argc, char const *argv[])
{
int f = 0;
int b = 0;
int i, j;
for (i = 1; i < argc; ++i)
{
for (j = 0; j < argv[i][j]; ++j)
{
if ((argv[i][j]) < 48 || (argv[i][j]) > 57)
{
printf("Error\n");
return (1);
}
}
b = atoi(argv[i]);
f = f + b;
}
printf("%d\n", f);
return (0);
}
