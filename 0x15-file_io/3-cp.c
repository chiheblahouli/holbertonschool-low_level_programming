#include "holberton.h"
#include <stdio.h>

/**
 * usage_error_97 Test copy usage errors.
 * Return: 97.
 */
void usage_error_97(void)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}


/**
 * read_error_98 Test read errors.
 * @s: file name.
 * Return: 98.
 */
void read_error_98(char *s)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
exit(98);
}

/**
 * write_error_99 Test write errors.
 * @s: file name.
 * Return: 99.
 */
void write_error_99(char *s)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
exit(99);
}

/**
 * close_error_100 Test close errors.
 * @fd: file descriptor.
 * Return: 100.
 */
void close_error_100(int fd)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}

/**
 * main Ã- copy from a file to another.
 * @arg: argument.
 * @nb_arg: integer.
 * Return: 0 on success, exit with errors oterwise.
 */



int main(int nb_arg, char **arg)
{
int f1, f2, content1, content2, c1, c2;
char buffer[1024];

if (nb_arg != 3)
usage_error_97();


f1 = open(arg[1], O_RDONLY);
if (f1 == -1)
read_error_98(arg[1]);

f2 = open(arg[2], O_CREAT | O_TRUNC | O_RDWR, 664);
if (f2 == -1)
write_error_99(arg[2]);

do
{
content1 = read(f1, buffer, 1024);
if (content1 == -1)
read_error_98(arg[1]);

content2 = write(f2, buffer, 1024);
if (content2 == -1)
write_error_99(arg[2]);
} while (content2 == 1024);

c1 = close(f1);
if (c1 == -1)
close_error_100(f1);

c2 = close(f2);
if (c2 == -1)
close_error_100(f2);
return (0);
}


