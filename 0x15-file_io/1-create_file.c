#include "holberton.h"

/**
 * create_file - make a file and write a string corresponding to the content.
 * @filename : name of the file.
 * @text_content : content to write inside the file.
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
int map, len, c;

if (!filename)
return (-1);

map = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (map == -1)
return (map);

if (!text_content)
return (1);

for (len = 0; text_content[len]; len++);
c = write(map, text_content, len);

if (c == -1)
return (c);

close(map);
return (1);
}
