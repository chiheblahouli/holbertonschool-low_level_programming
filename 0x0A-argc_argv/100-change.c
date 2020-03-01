#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: string
 * Return: 0
 **/
int main(int argc, char *argv[])
{
int n, i = 0, j, k, l, m;
if (argc == 2)
{
n = atoi(argv[1]);
if (n < 0)
{
printf("0\n");
}
else
{
i = (n / 25);
j = ((n % 25) / 10);
k = (((n % 25) % 10) / 5);
l = ((((n % 25) % 10) % 5) / 2);
m = ((((n % 25) % 10) % 5) % 2);
printf("%i\n", i + j + k + l + m);
}
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
