#include "search_algos.h"
#include <math.h>

/**
 * prints - prints
 * @array: array
 * @l: l
 * @r: r
 * @size: size
 * @value: value
 * Return: -1 or i
*/
int prints(int *array, size_t l, size_t r, size_t size,  int value)
{
size_t k = 0;

if (r > size)
{
r = l + sqrt(size);
}
printf("Value found between indexes [%lu] and [%lu]\n", l, r);
k = l;
while (k <= r)
{
printf("Value checked array[%ld] = [%u]\n", k, array[k]);
if (array[k] == value)
return (k);
if (k == size - 1)
return (-1);
k++;
}
return (0);
}

/**
 * jump_search - jump_search
 * @array: array
 * @size: size
 * @value: value
 * Return: -1 or i
*/

int jump_search(int *array, size_t size, int value)
{
size_t l = 0;
size_t r;
size_t a = 0;
int cv = 0;

r = size - 1;
if (!array || !size)
return (-1);
a = (size_t) sqrt(size);
r = a;
while (l <= r)
{
printf("Value checked array[%ld] = [%u]\n", l, array[l]);
if (array[l] <= value && array[r] >= value)
{
cv = prints(array, l, r, size, value);
if (cv)
return (cv);
}
else
{
r = r + a;
l = l + a;
}
if (r > size)
{
r = size - 1;
}
}
cv = prints(array, l - a, r + a, size, value);
return (-1);
}
