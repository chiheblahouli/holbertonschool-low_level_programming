#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * usage_error_97 - Test copy usage errors.
 * Return: 97.
 */

void usage_error_97(void)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}


/**
 * read_error_98 - Test read errors.
 * @s: pointer to file name.
 * Return: 98.
 */

void read_error_98(char *s)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
exit(98);
}

/**
 * write_error_99 - Test write errors.
 * @s: pointer to file name.
 * Return: 99.
 */

void write_error_99(char *s)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
exit(99);
}

/**
 * close_error_100 - Test close errors.
 * @fd: file descriptor.
 * Return: 100.
 */

void close_error_100(int fd)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}

/**
 * main - copy from a file to another.
 * @nb_arg: number of arguments.
 * @arg: arguments.
 *
 * Return: 0 on success, exit with errors oterwise.
 */


int main(int nb_arg, char **arg)
{
int f1, f2, content1 = 1, content2;
char buffer[1024];

if (nb_arg != 3)
usage_error_97();
if (arg[1] == NULL)
read_error_98(arg[1]);
f1 = open(arg[1], O_RDONLY);
if (f1 == -1)
read_error_98(arg[1]);
f2 = open(arg[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
if (f2 == -1)
write_error_99(arg[2]);

while (content1)
{
content1 = read(f1, buffer, 1024);
if (content1  == -1)
read_error_98(arg[1]);
if (content1 > 0)
{
content2 = write(f2, buffer, content1);
if (content2 == -1)
write_error_99(arg[2]);
}
}
content1 = close(f1);
if (content1 == -1)
close_error_100(content1);
content2 = close(f2);
if (content2 == -1)
close_error_100(content2);
return (0);
}
