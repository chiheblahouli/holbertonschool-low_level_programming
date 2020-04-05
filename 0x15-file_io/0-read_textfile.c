
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard.
 * @filename : file name.
 * @letters : letters.
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x, y, z;
	char *map;

if (filename == NULL)
return (0);

map = malloc(sizeof(char) * letters);
if (!map)
return (0);
x = open(filename, O_RDWR);
if (x == -1)
return (0);


y = read(x, map, letters);
if (y == -1)
return (0);

z = write(STDOUT_FILENO, map, y);
if (z < 0)
return (0);
free(map);
close(x);
return (z);
}
