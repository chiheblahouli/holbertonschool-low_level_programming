#include "holberton.h"

/**
 * create_file - make a files.
 * @filename : name of files.
 * @text_content : contents.
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
int map, cto, c;

if (!filename)
return (-1);

map = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (map == -1)
return (map);

if (!text_content)
return (1);

for (cto = 0; text_content[cto]; cto++)
c = write(cto, text_content, map);
if (c == -1)
return (c);

close(map);
return (1);
}
