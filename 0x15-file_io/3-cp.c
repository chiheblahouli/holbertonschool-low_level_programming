#include "holberton.h"
/**
 * main Ã- copy from a file to another.
 * @arg: argument.
 * @nb_arg: integer.
 * Return: x.
 */

int main(int nb_arg, char **arg)
{
int f1, f2, content1, content2, c1, c2;
char buffer[1024];

if (nb_arg != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

f1 = open(arg[1], O_RDONLY);
if (f1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]);
exit(98);
}

f2 = open(arg[2], O_CREAT | O_TRUNC | O_RDWR, 664);
if (f2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", arg[2]);
exit(99);
}

content1 = read(f1, buffer, 1024);
if (content1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]);
exit(98);
}

content2 = write(f2, buffer, 1024);
if (content2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", arg[2]);
exit(99);
}

c1 = close(f1);
if (c1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
exit(100);
}

c2 = close(f2);
if (c2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
exit(100);
}

return (0);
}


