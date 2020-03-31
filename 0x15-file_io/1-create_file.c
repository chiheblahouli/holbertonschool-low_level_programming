#include "holberton.h"

/**
 * create_file - make a file.
 * @filename : name of the file.
 * @text_content : content to write inside the file.
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
int map, cto, c;

if (!filename)
return (-1);
/*unable to get filename*/

map = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (map == -1)
/*unable to open file*/
return (map);

if (!text_content)
return (1);
/*content not indicated*/


for (cto = 0; text_content[cto]; cto++);
/*get te length of the string*/

c = write(map, text_content, cto);

if (c == -1)
return (c);

close(map);
return (1);
}
