#include <stdio.h>
#include <stdlib.h>
/**
 * main - main to an integer.
 * @argc: variable
 * @argv: variable
 * Return: 0 or 1
*/
int main(int argc, char const *argv[])
{
int a;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
a = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", a);
return (0);
}
}
