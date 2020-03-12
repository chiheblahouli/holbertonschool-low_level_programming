#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - takes an int array, its size and a function parameters
 * @array: array.
 * @size: size.
 * @action: pointer.
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t j;

if (action == NULL || array == NULL)
return;
for (j = 0; j < size; j++)
action(array[j]);
}
