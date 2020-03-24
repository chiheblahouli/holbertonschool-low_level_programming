#include <stdio.h>
#include "lists.h"

void Before_execution(void) __attribute__ ((constructor));
/**
 * Before_execution - printf before the main.
 * Return: Always 0.
 */
void Before_execution(void)

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
