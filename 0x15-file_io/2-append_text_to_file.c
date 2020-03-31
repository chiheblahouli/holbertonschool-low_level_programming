#include "holberton.h"

/**
 * append text to_file - add text at the end of a file
 * @filename : name of the file.
 * @text_content : content to append inside the file.
 * Return: 1 on success -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int map, len, c;

if (!filename)
return (-1);

map = open(filename, O_APPEND | O_RDWR, 0600);
if (map == -1)
return (map);

if (!text_content)
return (1);

for (len = 0; text_content[len]; len++)
	;
c = write(map, text_content, len);

if (c == -1)
return (c);

close(map);
return (1);
}
