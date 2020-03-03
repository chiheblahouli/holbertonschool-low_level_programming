#include "holberton.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars.
* @size: parameter
* @c: parameter
* Return: Nothing.
*/
char *create_array(unsigned int size, char c)
{
char *m;
unsigned int i;
m = malloc(sizeof(char) * size);
if (size == 0)
return (NULL);
else
{
for (i = 0; i < size; i++)
m[i] = c;
return (m);
}
}

