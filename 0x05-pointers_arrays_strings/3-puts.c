#include "holberton.h"
/**
* _puts - main function
* @str : parameter
* return : void
*/
void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);
str++
}
_putchar('\n');
}
